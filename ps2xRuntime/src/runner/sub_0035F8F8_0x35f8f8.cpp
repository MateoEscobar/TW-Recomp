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

// Function: sub_0035F8F8
// Address: 0x35f8f8 - 0x35f970
void sub_0035F8F8_0x35f8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F8F8_0x35f8f8");
#endif

    switch (ctx->pc) {
        case 0x35f920u: goto label_35f920;
        case 0x35f928u: goto label_35f928;
        case 0x35f940u: goto label_35f940;
        case 0x35f948u: goto label_35f948;
        case 0x35f954u: goto label_35f954;
        default: break;
    }

    ctx->pc = 0x35f8f8u;

    // 0x35f8f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35f8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35f8fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f900: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35f900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35f904: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35f904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35f908: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35f908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f90c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35f90cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f910: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35f910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35f914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f918: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F918u;
    SET_GPR_U32(ctx, 31, 0x35F920u);
    ctx->pc = 0x35F91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F918u;
    // 0x35f91c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F918u, 0x35F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F920u;
label_35f920:
    // 0x35f920: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F920u;
    SET_GPR_U32(ctx, 31, 0x35F928u);
    ctx->pc = 0x35F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F920u;
    // 0x35f924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F920u, 0x35F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F928u;
label_35f928:
    // 0x35f928: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35f928u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f92c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35f92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f930: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35f930u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35f934: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35f934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f938: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F938u;
    SET_GPR_U32(ctx, 31, 0x35F940u);
    ctx->pc = 0x35F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F938u;
    // 0x35f93c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F938u, 0x35F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F940u;
label_35f940:
    // 0x35f940: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F940u;
    SET_GPR_U32(ctx, 31, 0x35F948u);
    ctx->pc = 0x35F944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F940u;
    // 0x35f944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F940u, 0x35F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F948u;
label_35f948:
    // 0x35f948: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35f948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f94c: 0xc05af4e  jal         func_16BD38
    ctx->pc = 0x35F94Cu;
    SET_GPR_U32(ctx, 31, 0x35F954u);
    ctx->pc = 0x35F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F94Cu;
    // 0x35f950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD38u, 0x35F94Cu, 0x35F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F954u;
label_35f954:
    // 0x35f954: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35f954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f95c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35f95cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f960: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35f960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f968: 0x3e00008  jr          $ra
    ctx->pc = 0x35F968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F968u;
        // 0x35f96c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F970u;
}
