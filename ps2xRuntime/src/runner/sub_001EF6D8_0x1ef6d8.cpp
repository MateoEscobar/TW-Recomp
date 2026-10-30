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

// Function: sub_001EF6D8
// Address: 0x1ef6d8 - 0x1ef7c0
void sub_001EF6D8_0x1ef6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF6D8_0x1ef6d8");
#endif

    switch (ctx->pc) {
        case 0x1ef774u: goto label_1ef774;
        case 0x1ef784u: goto label_1ef784;
        case 0x1ef79cu: goto label_1ef79c;
        default: break;
    }

    ctx->pc = 0x1ef6d8u;

    // 0x1ef6d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ef6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ef6dc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ef6dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef6e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ef6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ef6e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ef6e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef6f0: 0x26090158  addiu       $t1, $s0, 0x158
    ctx->pc = 0x1ef6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x1ef6f4: 0x78880  sll         $s1, $a3, 2
    ctx->pc = 0x1ef6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1ef6f8: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x1ef6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1ef6fc: 0x1311021  addu        $v0, $t1, $s1
    ctx->pc = 0x1ef6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x1ef700: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ef700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef704: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1ef704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ef708: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ef708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ef70c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1ef70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ef710: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x1ef710u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1ef714: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1ef714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ef718: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1ef718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ef71c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EF71Cu;
    {
        const bool branch_taken_0x1ef71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF71Cu;
        // 0x1ef720: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef71c) {
            ctx->pc = 0x1EF790u;
            goto label_1ef790;
        }
    }
    ctx->pc = 0x1EF724u;
    // 0x1ef724: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x1ef724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1ef728: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF728u;
    {
        const bool branch_taken_0x1ef728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF728u;
        // 0x1ef72c: 0x24c80001  addiu       $t0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef728) {
            ctx->pc = 0x1EF748u;
            goto label_1ef748;
        }
    }
    ctx->pc = 0x1EF730u;
    // 0x1ef730: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ef730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ef734: 0x7100b  movn        $v0, $zero, $a3
    ctx->pc = 0x1ef734u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1ef738: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1ef738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1ef73c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ef73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef740: 0x10680005  beq         $v1, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF740u;
    {
        const bool branch_taken_0x1ef740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1EF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF740u;
        // 0x1ef744: 0x2482fffe  addiu       $v0, $a0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef740) {
            ctx->pc = 0x1EF758u;
            goto label_1ef758;
        }
    }
    ctx->pc = 0x1EF748u;
label_1ef748:
    // 0x1ef748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef74c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1ef74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef750: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF750u;
    {
        const bool branch_taken_0x1ef750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF750u;
        // 0x1ef754: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef750) {
            ctx->pc = 0x1EF76Cu;
            goto label_1ef76c;
        }
    }
    ctx->pc = 0x1EF758u;
label_1ef758:
    // 0x1ef758: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1ef758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ef75c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF75Cu;
    {
        const bool branch_taken_0x1ef75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF75Cu;
        // 0x1ef760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef75c) {
            ctx->pc = 0x1EF78Cu;
            goto label_1ef78c;
        }
    }
    ctx->pc = 0x1EF764u;
    // 0x1ef764: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1ef764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef768: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1ef768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1ef76c:
    // 0x1ef76c: 0xc07bd24  jal         func_1EF490
    ctx->pc = 0x1EF76Cu;
    SET_GPR_U32(ctx, 31, 0x1EF774u);
    ctx->pc = 0x1EF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF490u, 0x1EF76Cu, 0x1EF774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF774u;
label_1ef774:
    // 0x1ef774: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ef774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1ef778: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ef778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ef77c: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1EF77Cu;
    SET_GPR_U32(ctx, 31, 0x1EF784u);
    ctx->pc = 0x1EF780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF77Cu;
    // 0x1ef780: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1EF77Cu, 0x1EF784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF784u;
label_1ef784:
    // 0x1ef784: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF784u;
    {
        const bool branch_taken_0x1ef784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF784u;
        // 0x1ef788: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef784) {
            ctx->pc = 0x1EF7ACu;
            goto label_1ef7ac;
        }
    }
    ctx->pc = 0x1EF78Cu;
label_1ef78c:
    // 0x1ef78c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ef78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ef790:
    // 0x1ef790: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1ef790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ef794: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1EF794u;
    SET_GPR_U32(ctx, 31, 0x1EF79Cu);
    ctx->pc = 0x1EF798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF794u;
    // 0x1ef798: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1EF794u, 0x1EF79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF79Cu;
label_1ef79c:
    // 0x1ef79c: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1ef79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1ef7a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef7a4: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x1ef7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x1ef7a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ef7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ef7ac:
    // 0x1ef7ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef7acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7B4u;
        // 0x1ef7b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF7BCu;
    // 0x1ef7bc: 0x0  nop
    ctx->pc = 0x1ef7bcu;
    // NOP
    ctx->pc = 0x1ef7c0u;
}
