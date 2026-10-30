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

// Function: sub_003618D8
// Address: 0x3618d8 - 0x3619a8
void sub_003618D8_0x3618d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003618D8_0x3618d8");
#endif

    switch (ctx->pc) {
        case 0x361908u: goto label_361908;
        case 0x361910u: goto label_361910;
        case 0x361924u: goto label_361924;
        case 0x36192cu: goto label_36192c;
        case 0x361940u: goto label_361940;
        case 0x361948u: goto label_361948;
        case 0x361960u: goto label_361960;
        case 0x361968u: goto label_361968;
        case 0x361980u: goto label_361980;
        default: break;
    }

    ctx->pc = 0x3618d8u;

    // 0x3618d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3618d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3618dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3618dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3618e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3618e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3618e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3618e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3618e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3618e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3618ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3618f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3618f4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3618f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3618f8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3618f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3618fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3618fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x361900: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361900u;
    SET_GPR_U32(ctx, 31, 0x361908u);
    ctx->pc = 0x361904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361900u;
    // 0x361904: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361900u, 0x361908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361908u;
label_361908:
    // 0x361908: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361908u;
    SET_GPR_U32(ctx, 31, 0x361910u);
    ctx->pc = 0x36190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361908u;
    // 0x36190c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361908u, 0x361910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361910u;
label_361910:
    // 0x361910: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361914: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x361914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361918: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x361918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36191c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36191Cu;
    SET_GPR_U32(ctx, 31, 0x361924u);
    ctx->pc = 0x361920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36191Cu;
    // 0x361920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36191Cu, 0x361924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361924u;
label_361924:
    // 0x361924: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361924u;
    SET_GPR_U32(ctx, 31, 0x36192Cu);
    ctx->pc = 0x361928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361924u;
    // 0x361928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361924u, 0x36192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36192Cu;
label_36192c:
    // 0x36192c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36192cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361930: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x361930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361934: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x361934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361938: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361938u;
    SET_GPR_U32(ctx, 31, 0x361940u);
    ctx->pc = 0x36193Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361938u;
    // 0x36193c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361938u, 0x361940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361940u;
label_361940:
    // 0x361940: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361940u;
    SET_GPR_U32(ctx, 31, 0x361948u);
    ctx->pc = 0x361944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361940u;
    // 0x361944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361940u, 0x361948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361948u;
label_361948:
    // 0x361948: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x361948u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36194c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36194cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361950: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x361950u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x361954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x361954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361958: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361958u;
    SET_GPR_U32(ctx, 31, 0x361960u);
    ctx->pc = 0x36195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361958u;
    // 0x36195c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361958u, 0x361960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361960u;
label_361960:
    // 0x361960: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361960u;
    SET_GPR_U32(ctx, 31, 0x361968u);
    ctx->pc = 0x361964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361960u;
    // 0x361964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361960u, 0x361968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361968u;
label_361968:
    // 0x361968: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x361968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36196c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361970: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x361970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361974: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361978: 0xc0b0244  jal         func_2C0910
    ctx->pc = 0x361978u;
    SET_GPR_U32(ctx, 31, 0x361980u);
    ctx->pc = 0x36197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361978u;
    // 0x36197c: 0x23c03  sra         $a3, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0910u, 0x361978u, 0x361980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361980u;
label_361980:
    // 0x361980: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x361980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x361984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361988: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x361988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36198c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36198cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361990: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x361990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361994: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x361994u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36199c: 0x3e00008  jr          $ra
    ctx->pc = 0x36199Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3619A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36199Cu;
        // 0x3619a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36199Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3619A4u;
    // 0x3619a4: 0x0  nop
    ctx->pc = 0x3619a4u;
    // NOP
    ctx->pc = 0x3619a8u;
}
