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

// Function: sub_00120380
// Address: 0x120380 - 0x120450
void sub_00120380_0x120380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120380_0x120380");
#endif

    switch (ctx->pc) {
        case 0x1203b8u: goto label_1203b8;
        case 0x1203d0u: goto label_1203d0;
        case 0x1203d8u: goto label_1203d8;
        case 0x1203ecu: goto label_1203ec;
        default: break;
    }

    ctx->pc = 0x120380u;

    // 0x120380: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x120380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x120384: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x120384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x120388: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x120388u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x12038c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12038cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120390: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x120390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x120394: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x120394u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x120398: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x120398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x12039c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x12039cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1203a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1203a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1203a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1203a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1203a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1203ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1203acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1203b0: 0xc047ab8  jal         func_11EAE0
    ctx->pc = 0x1203B0u;
    SET_GPR_U32(ctx, 31, 0x1203B8u);
    ctx->pc = 0x1203B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1203B0u;
    // 0x1203b4: 0xe7b60060  swc1        $f22, 0x60($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x1203B0u, 0x1203B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203B8u;
label_1203b8:
    // 0x1203b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1203b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203bc: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x1203BCu;
    {
        const bool branch_taken_0x1203bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1203C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203BCu;
        // 0x1203c0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1203bc) {
            ctx->pc = 0x120420u;
            goto label_120420;
        }
    }
    ctx->pc = 0x1203C4u;
    // 0x1203c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1203c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1203c8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1203c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1203cc: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x1203ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_1203d0:
    // 0x1203d0: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x1203D0u;
    SET_GPR_U32(ctx, 31, 0x1203D8u);
    ctx->pc = 0x1203D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1203D0u;
    // 0x1203d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1203D0u, 0x1203D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203D8u;
label_1203d8:
    // 0x1203d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1203d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1203dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1203e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1203e4: 0xc048952  jal         func_122548
    ctx->pc = 0x1203E4u;
    SET_GPR_U32(ctx, 31, 0x1203ECu);
    ctx->pc = 0x1203E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1203E4u;
    // 0x1203e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122548u, 0x1203E4u, 0x1203ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203ECu;
label_1203ec:
    // 0x1203ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1203ECu;
    {
        const bool branch_taken_0x1203ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1203F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203ECu;
        // 0x1203f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1203ec) {
            ctx->pc = 0x120414u;
            goto label_120414;
        }
    }
    ctx->pc = 0x1203F4u;
    // 0x1203f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1203f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1203f8: 0xc44001d8  lwc1        $f0, 0x1D8($v0)
    ctx->pc = 0x1203f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1203fc: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x1203fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x120400: 0x0  nop
    ctx->pc = 0x120400u;
    // NOP
    // 0x120404: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x120404u;
    {
        const bool branch_taken_0x120404 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x120408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120404u;
        // 0x120408: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120404) {
            ctx->pc = 0x120418u;
            goto label_120418;
        }
    }
    ctx->pc = 0x12040Cu;
    // 0x12040c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12040Cu;
    {
        const bool branch_taken_0x12040c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12040Cu;
        // 0x120410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12040c) {
            ctx->pc = 0x120424u;
            goto label_120424;
        }
    }
    ctx->pc = 0x120414u;
label_120414:
    // 0x120414: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x120414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_120418:
    // 0x120418: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x120418u;
    {
        const bool branch_taken_0x120418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120418u;
        // 0x12041c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120418) {
            ctx->pc = 0x1203D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1203d0;
        }
    }
    ctx->pc = 0x120420u;
label_120420:
    // 0x120420: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x120420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120424:
    // 0x120424: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x120424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120428: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x120428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12042c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12042cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120430: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x120430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120438: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x120438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12043c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x12043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x120440: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x120440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120444: 0x3e00008  jr          $ra
    ctx->pc = 0x120444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120444u;
        // 0x120448: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12044Cu;
    // 0x12044c: 0x0  nop
    ctx->pc = 0x12044cu;
    // NOP
    ctx->pc = 0x120450u;
}
