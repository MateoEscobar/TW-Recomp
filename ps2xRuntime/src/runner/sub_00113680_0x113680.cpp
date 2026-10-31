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

// Function: sub_00113680
// Address: 0x113680 - 0x113700
void sub_00113680_0x113680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113680_0x113680");
#endif

    switch (ctx->pc) {
        case 0x1136ccu: goto label_1136cc;
        case 0x1136ecu: goto label_1136ec;
        default: break;
    }

    ctx->pc = 0x113680u;

    // 0x113680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x113680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x113684: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x113684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113688: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x113688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11368c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x11368cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x113690: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x113694: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x113694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    // 0x113698: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x113698u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11369c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x11369cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1136a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1136a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1136a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1136a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1136a8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1136a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1136ac: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1136acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1136b0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1136b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1136b4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1136b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1136b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1136b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1136bc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1136bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1136c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1136c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1136c4: 0xc050fda  jal         func_143F68
    ctx->pc = 0x1136C4u;
    SET_GPR_U32(ctx, 31, 0x1136CCu);
    ctx->pc = 0x1136C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136C4u;
    // 0x1136c8: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1136C4u, 0x1136CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136CCu;
label_1136cc:
    // 0x1136cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1136ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1136d0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1136d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1136d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1136d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1136d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1136d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1136dc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1136dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1136e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1136e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1136e4: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x1136E4u;
    SET_GPR_U32(ctx, 31, 0x1136ECu);
    ctx->pc = 0x1136E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136E4u;
    // 0x1136e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x1136E4u, 0x1136ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136ECu;
label_1136ec:
    // 0x1136ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1136ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1136f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1136f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1136f4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1136f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1136f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1136F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1136FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136F8u;
        // 0x1136fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1136F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113700u;
}
