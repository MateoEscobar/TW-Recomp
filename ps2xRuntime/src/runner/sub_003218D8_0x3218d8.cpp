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

// Function: sub_003218D8
// Address: 0x3218d8 - 0x3219a0
void sub_003218D8_0x3218d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003218D8_0x3218d8");
#endif

    switch (ctx->pc) {
        case 0x321908u: goto label_321908;
        case 0x321914u: goto label_321914;
        case 0x321928u: goto label_321928;
        case 0x32194cu: goto label_32194c;
        case 0x32195cu: goto label_32195c;
        case 0x321978u: goto label_321978;
        default: break;
    }

    ctx->pc = 0x3218d8u;

    // 0x3218d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3218d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3218dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3218dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3218e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3218e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3218e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3218e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3218e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3218ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3218ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3218f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3218f4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3218f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218f8: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3218F8u;
    {
        const bool branch_taken_0x3218f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3218FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218F8u;
        // 0x3218fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3218f8) {
            ctx->pc = 0x321980u;
            goto label_321980;
        }
    }
    ctx->pc = 0x321900u;
    // 0x321900: 0xc087502  jal         func_21D408
    ctx->pc = 0x321900u;
    SET_GPR_U32(ctx, 31, 0x321908u);
    ctx->pc = 0x321904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321900u;
    // 0x321904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x321900u, 0x321908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321908u;
label_321908:
    // 0x321908: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x321908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32190c: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x32190Cu;
    SET_GPR_U32(ctx, 31, 0x321914u);
    ctx->pc = 0x321910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32190Cu;
    // 0x321910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x32190Cu, 0x321914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321914u;
label_321914:
    // 0x321914: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x321914u;
    {
        const bool branch_taken_0x321914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321914u;
        // 0x321918: 0x3c052fef  lui         $a1, 0x2FEF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12271 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321914) {
            ctx->pc = 0x321980u;
            goto label_321980;
        }
    }
    ctx->pc = 0x32191Cu;
    // 0x32191c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32191cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321920: 0xc089998  jal         func_226660
    ctx->pc = 0x321920u;
    SET_GPR_U32(ctx, 31, 0x321928u);
    ctx->pc = 0x321924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321920u;
    // 0x321924: 0x34a5efff  ori         $a1, $a1, 0xEFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x321920u, 0x321928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321928u;
label_321928:
    // 0x321928: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x321928u;
    {
        const bool branch_taken_0x321928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321928u;
        // 0x32192c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321928) {
            ctx->pc = 0x321984u;
            goto label_321984;
        }
    }
    ctx->pc = 0x321930u;
    // 0x321930: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x321930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x321934: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x321934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x321938: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x321938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
    // 0x32193c: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x32193cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x321940: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x321940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
    // 0x321944: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x321944u;
    SET_GPR_U32(ctx, 31, 0x32194Cu);
    ctx->pc = 0x321948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321944u;
    // 0x321948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x321944u, 0x32194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32194Cu;
label_32194c:
    // 0x32194c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32194Cu;
    {
        const bool branch_taken_0x32194c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32194Cu;
        // 0x321950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32194c) {
            ctx->pc = 0x321984u;
            goto label_321984;
        }
    }
    ctx->pc = 0x321954u;
    // 0x321954: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x321954u;
    SET_GPR_U32(ctx, 31, 0x32195Cu);
    ctx->pc = 0x321958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321954u;
    // 0x321958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x321954u, 0x32195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32195Cu;
label_32195c:
    // 0x32195c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32195Cu;
    {
        const bool branch_taken_0x32195c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32195Cu;
        // 0x321960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32195c) {
            ctx->pc = 0x321978u;
            goto label_321978;
        }
    }
    ctx->pc = 0x321964u;
    // 0x321964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x321964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321968: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x321968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32196c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x32196cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321970: 0xc0be9b8  jal         func_2FA6E0
    ctx->pc = 0x321970u;
    SET_GPR_U32(ctx, 31, 0x321978u);
    ctx->pc = 0x321974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321970u;
    // 0x321974: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6E0u, 0x321970u, 0x321978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321978u;
label_321978:
    // 0x321978: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x321978u;
    {
        const bool branch_taken_0x321978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321978u;
        // 0x32197c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321978) {
            ctx->pc = 0x321984u;
            goto label_321984;
        }
    }
    ctx->pc = 0x321980u;
label_321980:
    // 0x321980: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321984:
    // 0x321984: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x321984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x321988: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x321988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32198c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32198cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321990: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x321990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321998: 0x3e00008  jr          $ra
    ctx->pc = 0x321998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321998u;
        // 0x32199c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3219A0u;
}
