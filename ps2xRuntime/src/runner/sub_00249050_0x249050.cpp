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

// Function: sub_00249050
// Address: 0x249050 - 0x249108
void sub_00249050_0x249050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249050_0x249050");
#endif

    switch (ctx->pc) {
        case 0x2490e0u: goto label_2490e0;
        default: break;
    }

    ctx->pc = 0x249050u;

    // 0x249050: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x249050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x249054: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x249054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x249058: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x249058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24905c: 0x24431740  addiu       $v1, $v0, 0x1740
    ctx->pc = 0x24905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x249060: 0xc4401740  lwc1        $f0, 0x1740($v0)
    ctx->pc = 0x249060u;
    { uint32_t bits = FAST_READ32(0x511740u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249064: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x249064u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x249068: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x249068u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24906c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x24906cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x249070: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x249070u;
    { uint32_t bits = FAST_READ32(0x511744u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249074: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x249074u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x249078: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x249078u;
    { uint32_t bits = FAST_READ32(0x511748u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24907c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24907cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249080: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x249080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x249084: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x249084u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x249088: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x249088u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x24908c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x24908cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x249090: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x249090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x249094: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x249094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x249098: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x249098u;
    { uint32_t bits = FAST_READ32(0x51174Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24909c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24909cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490a0: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2490a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2490a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2490a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490a8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2490a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2490ac: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2490acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2490b0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2490b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2490b4: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2490b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2490b8: 0xe7a5008c  swc1        $f5, 0x8C($sp)
    ctx->pc = 0x2490b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2490bc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2490bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2490c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2490c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2490c4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x2490c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2490c8: 0x8d2447c4  lw          $a0, 0x47C4($t1)
    ctx->pc = 0x2490c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x2490cc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2490ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2490d0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2490d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2490d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2490d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2490d8: 0xc1036e2  jal         func_40DB88
    ctx->pc = 0x2490D8u;
    SET_GPR_U32(ctx, 31, 0x2490E0u);
    ctx->pc = 0x2490DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2490D8u;
    // 0x2490dc: 0xe7a30008  swc1        $f3, 0x8($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x2490D8u, 0x2490E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2490E0u;
label_2490e0:
    // 0x2490e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2490e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2490e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2490E4u;
    {
        const bool branch_taken_0x2490e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2490E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490E4u;
        // 0x2490e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2490e4) {
            ctx->pc = 0x2490F8u;
            goto label_2490f8;
        }
    }
    ctx->pc = 0x2490ECu;
    // 0x2490ec: 0x97a2005c  lhu         $v0, 0x5C($sp)
    ctx->pc = 0x2490ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2490f0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2490f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2490f4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2490f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2490f8:
    // 0x2490f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2490f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2490fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2490fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249100: 0x3e00008  jr          $ra
    ctx->pc = 0x249100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249100u;
        // 0x249104: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249108u;
}
