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

// Function: sub_004DB728
// Address: 0x4db728 - 0x4db7b0
void sub_004DB728_0x4db728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB728_0x4db728");
#endif

    switch (ctx->pc) {
        case 0x4db740u: goto label_4db740;
        case 0x4db74cu: goto label_4db74c;
        case 0x4db75cu: goto label_4db75c;
        case 0x4db764u: goto label_4db764;
        case 0x4db770u: goto label_4db770;
        default: break;
    }

    ctx->pc = 0x4db728u;

    // 0x4db728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4db728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4db72c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4db72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4db730: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4db730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4db734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4db738: 0xc136dfa  jal         func_4DB7E8
    ctx->pc = 0x4DB738u;
    SET_GPR_U32(ctx, 31, 0x4DB740u);
    ctx->pc = 0x4DB73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB738u;
    // 0x4db73c: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E8u, 0x4DB738u, 0x4DB740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB740u;
label_4db740:
    // 0x4db740: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4db740u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x4db744: 0xc136dec  jal         func_4DB7B0
    ctx->pc = 0x4DB744u;
    SET_GPR_U32(ctx, 31, 0x4DB74Cu);
    ctx->pc = 0x4DB748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB744u;
    // 0x4db748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7B0u, 0x4DB744u, 0x4DB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB74Cu;
label_4db74c:
    // 0x4db74c: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x4db74cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x4db750: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4db750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4db754: 0xc04b5ea  jal         func_12D7A8
    ctx->pc = 0x4DB754u;
    SET_GPR_U32(ctx, 31, 0x4DB75Cu);
    ctx->pc = 0x4DB758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB754u;
    // 0x4db758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D7A8u, 0x4DB754u, 0x4DB75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB75Cu;
label_4db75c:
    // 0x4db75c: 0xc136df8  jal         func_4DB7E0
    ctx->pc = 0x4DB75Cu;
    SET_GPR_U32(ctx, 31, 0x4DB764u);
    ctx->pc = 0x4DB760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB75Cu;
    // 0x4db760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB7E0u, 0x4DB75Cu, 0x4DB764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB764u;
label_4db764:
    // 0x4db764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4db764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db768: 0xc04953c  jal         func_1254F0
    ctx->pc = 0x4DB768u;
    SET_GPR_U32(ctx, 31, 0x4DB770u);
    ctx->pc = 0x4DB76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB768u;
    // 0x4db76c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254F0u, 0x4DB768u, 0x4DB770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB770u;
label_4db770:
    // 0x4db770: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4db770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db778: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x4db778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4db77c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB77Cu;
        // 0x4db780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB784u;
    // 0x4db784: 0x0  nop
    ctx->pc = 0x4db784u;
    // NOP
    // 0x4db788: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4db788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4db78c: 0x0  nop
    ctx->pc = 0x4db78cu;
    // NOP
    // 0x4db790: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4db790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4db794: 0x0  nop
    ctx->pc = 0x4db794u;
    // NOP
    // 0x4db798: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4db798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4db79c: 0x0  nop
    ctx->pc = 0x4db79cu;
    // NOP
    // 0x4db7a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4db7a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4db7a4: 0x0  nop
    ctx->pc = 0x4db7a4u;
    // NOP
    // 0x4db7a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4db7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4db7ac: 0x0  nop
    ctx->pc = 0x4db7acu;
    // NOP
    ctx->pc = 0x4db7b0u;
}
