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

// Function: sub_003A51F8
// Address: 0x3a51f8 - 0x3a5280
void sub_003A51F8_0x3a51f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A51F8_0x3a51f8");
#endif

    switch (ctx->pc) {
        case 0x3a5228u: goto label_3a5228;
        case 0x3a5238u: goto label_3a5238;
        case 0x3a5244u: goto label_3a5244;
        default: break;
    }

    ctx->pc = 0x3a51f8u;

    // 0x3a51f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a51f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a51fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a51fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3a5200: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a5200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3a5204: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a5204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a5208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a520c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3a520cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3a5210: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x3a5210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a5214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a5218: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3a5218u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3a521c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3a521cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5220: 0xc047ab8  jal         func_11EAE0
    ctx->pc = 0x3A5220u;
    SET_GPR_U32(ctx, 31, 0x3A5228u);
    ctx->pc = 0x3A5224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5220u;
    // 0x3a5224: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x3A5220u, 0x3A5228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5228u;
label_3a5228:
    // 0x3a5228: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a5228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a522c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A522Cu;
    {
        const bool branch_taken_0x3a522c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A522Cu;
        // 0x3a5230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a522c) {
            ctx->pc = 0x3A5260u;
            goto label_3a5260;
        }
    }
    ctx->pc = 0x3A5234u;
    // 0x3a5234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a5234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a5238:
    // 0x3a5238: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a5238u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a523c: 0xc0e9438  jal         func_3A50E0
    ctx->pc = 0x3A523Cu;
    SET_GPR_U32(ctx, 31, 0x3A5244u);
    ctx->pc = 0x3A5240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A523Cu;
    // 0x3a5240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50E0u, 0x3A523Cu, 0x3A5244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5244u;
label_3a5244:
    // 0x3a5244: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5244u;
    {
        const bool branch_taken_0x3a5244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5244u;
        // 0x3a5248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5244) {
            ctx->pc = 0x3A5260u;
            goto label_3a5260;
        }
    }
    ctx->pc = 0x3A524Cu;
    // 0x3a524c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a524cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a5250: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x3a5250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3a5254: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A5254u;
    {
        const bool branch_taken_0x3a5254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5254u;
        // 0x3a5258: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5254) {
            ctx->pc = 0x3A5238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5238;
        }
    }
    ctx->pc = 0x3A525Cu;
    // 0x3a525c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a525cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a5260:
    // 0x3a5260: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a5260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a5264: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a5264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a5268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a5268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a526c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a526cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5270: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3a5270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a5274: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5274u;
        // 0x3a5278: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A527Cu;
    // 0x3a527c: 0x0  nop
    ctx->pc = 0x3a527cu;
    // NOP
    ctx->pc = 0x3a5280u;
}
