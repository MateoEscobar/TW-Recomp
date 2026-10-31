#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222370
// Address: 0x222370 - 0x2223e8
void sub_00222370_0x222370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222370_0x222370");
#endif

    switch (ctx->pc) {
        case 0x2223d8u: goto label_2223d8;
        default: break;
    }

    ctx->pc = 0x222370u;

    // 0x222370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222374: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x222374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x222378: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22237c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x22237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x222380: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x222380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x222384: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x222384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x222388: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x222388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22238c: 0x84830092  lh          $v1, 0x92($a0)
    ctx->pc = 0x22238cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x222390: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x222390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x222394: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x222394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x222398: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x222398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22239c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22239cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2223a0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2223a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2223a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2223a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2223a8: 0x78690000  lq          $t1, 0x0($v1)
    ctx->pc = 0x2223a8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2223ac: 0x7fa90000  sq          $t1, 0x0($sp)
    ctx->pc = 0x2223acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
    // 0x2223b0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2223b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2223b4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2223b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2223b8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2223b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2223bc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2223bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2223c0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2223c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2223c4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2223c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2223c8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2223c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2223cc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2223ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2223d0: 0xc0937d0  jal         func_24DF40
    ctx->pc = 0x2223D0u;
    SET_GPR_U32(ctx, 31, 0x2223D8u);
    ctx->pc = 0x2223D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223D0u;
    // 0x2223d4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF40u, 0x2223D0u, 0x2223D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223D8u;
label_2223d8:
    // 0x2223d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2223d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2223dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2223DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2223E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223DCu;
        // 0x2223e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2223DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2223E4u;
    // 0x2223e4: 0x0  nop
    ctx->pc = 0x2223e4u;
    // NOP
    ctx->pc = 0x2223e8u;
}
