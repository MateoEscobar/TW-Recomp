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

// Function: sub_001ABE10
// Address: 0x1abe10 - 0x1abee8
void sub_001ABE10_0x1abe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABE10_0x1abe10");
#endif

    switch (ctx->pc) {
        case 0x1abe10u: goto label_1abe10;
        case 0x1abe14u: goto label_1abe14;
        case 0x1abe18u: goto label_1abe18;
        case 0x1abe1cu: goto label_1abe1c;
        case 0x1abe20u: goto label_1abe20;
        case 0x1abe24u: goto label_1abe24;
        case 0x1abe28u: goto label_1abe28;
        case 0x1abe2cu: goto label_1abe2c;
        case 0x1abe30u: goto label_1abe30;
        case 0x1abe34u: goto label_1abe34;
        case 0x1abe38u: goto label_1abe38;
        case 0x1abe3cu: goto label_1abe3c;
        case 0x1abe40u: goto label_1abe40;
        case 0x1abe44u: goto label_1abe44;
        case 0x1abe48u: goto label_1abe48;
        case 0x1abe4cu: goto label_1abe4c;
        case 0x1abe50u: goto label_1abe50;
        case 0x1abe54u: goto label_1abe54;
        case 0x1abe58u: goto label_1abe58;
        case 0x1abe5cu: goto label_1abe5c;
        case 0x1abe60u: goto label_1abe60;
        case 0x1abe64u: goto label_1abe64;
        case 0x1abe68u: goto label_1abe68;
        case 0x1abe6cu: goto label_1abe6c;
        case 0x1abe70u: goto label_1abe70;
        case 0x1abe74u: goto label_1abe74;
        case 0x1abe78u: goto label_1abe78;
        case 0x1abe7cu: goto label_1abe7c;
        case 0x1abe80u: goto label_1abe80;
        case 0x1abe84u: goto label_1abe84;
        case 0x1abe88u: goto label_1abe88;
        case 0x1abe8cu: goto label_1abe8c;
        case 0x1abe90u: goto label_1abe90;
        case 0x1abe94u: goto label_1abe94;
        case 0x1abe98u: goto label_1abe98;
        case 0x1abe9cu: goto label_1abe9c;
        case 0x1abea0u: goto label_1abea0;
        case 0x1abea4u: goto label_1abea4;
        case 0x1abea8u: goto label_1abea8;
        case 0x1abeacu: goto label_1abeac;
        case 0x1abeb0u: goto label_1abeb0;
        case 0x1abeb4u: goto label_1abeb4;
        case 0x1abeb8u: goto label_1abeb8;
        case 0x1abebcu: goto label_1abebc;
        case 0x1abec0u: goto label_1abec0;
        case 0x1abec4u: goto label_1abec4;
        case 0x1abec8u: goto label_1abec8;
        case 0x1abeccu: goto label_1abecc;
        case 0x1abed0u: goto label_1abed0;
        case 0x1abed4u: goto label_1abed4;
        case 0x1abed8u: goto label_1abed8;
        case 0x1abedcu: goto label_1abedc;
        case 0x1abee0u: goto label_1abee0;
        case 0x1abee4u: goto label_1abee4;
        default: break;
    }

    ctx->pc = 0x1abe10u;

label_1abe10:
    // 0x1abe10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1abe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1abe14:
    // 0x1abe14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1abe14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1abe18:
    // 0x1abe18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1abe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1abe1c:
    // 0x1abe1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1abe1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1abe20:
    // 0x1abe20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1abe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1abe24:
    // 0x1abe24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1abe24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1abe28:
    // 0x1abe28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1abe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1abe2c:
    // 0x1abe2c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x1abe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1abe30:
    // 0x1abe30: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1abe30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1abe34:
    // 0x1abe34: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1abe38:
    if (ctx->pc == 0x1ABE38u) {
        ctx->pc = 0x1ABE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE34u;
        // 0x1abe38: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABE3Cu;
        goto label_1abe3c;
    }
    ctx->pc = 0x1ABE34u;
    {
        const bool branch_taken_0x1abe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE34u;
        // 0x1abe38: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe34) {
            ctx->pc = 0x1ABED0u;
            goto label_1abed0;
        }
    }
    ctx->pc = 0x1ABE3Cu;
label_1abe3c:
    // 0x1abe3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1abe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1abe40:
    // 0x1abe40: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1abe40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1abe44:
    // 0x1abe44: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1abe44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1abe48:
    // 0x1abe48: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1abe48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1abe4c:
    // 0x1abe4c: 0x24a544f8  addiu       $a1, $a1, 0x44F8
    ctx->pc = 0x1abe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17656));
label_1abe50:
    // 0x1abe50: 0x250844c8  addiu       $t0, $t0, 0x44C8
    ctx->pc = 0x1abe50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17608));
label_1abe54:
    // 0x1abe54: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1abe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1abe58:
    // 0x1abe58: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1abe58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1abe5c:
    // 0x1abe5c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1abe5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1abe60:
    // 0x1abe60: 0x240900c5  addiu       $t1, $zero, 0xC5
    ctx->pc = 0x1abe60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
label_1abe64:
    // 0x1abe64: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1abe64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1abe68:
    // 0x1abe68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1abe68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abe6c:
    // 0x1abe6c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1abe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1abe70:
    // 0x1abe70: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1abe70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abe74:
    // 0x1abe74: 0x40f809  jalr        $v0
label_1abe78:
    if (ctx->pc == 0x1ABE78u) {
        ctx->pc = 0x1ABE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE74u;
        // 0x1abe78: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABE7Cu;
        goto label_1abe7c;
    }
    ctx->pc = 0x1ABE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ABE7Cu);
        ctx->pc = 0x1ABE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE74u;
        // 0x1abe78: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABE74u, 0x1ABE7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABE7Cu;
label_1abe7c:
    // 0x1abe7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1abe80:
    if (ctx->pc == 0x1ABE80u) {
        ctx->pc = 0x1ABE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE7Cu;
        // 0x1abe80: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABE84u;
        goto label_1abe84;
    }
    ctx->pc = 0x1ABE7Cu;
    {
        const bool branch_taken_0x1abe7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE7Cu;
        // 0x1abe80: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe7c) {
            ctx->pc = 0x1ABE98u;
            goto label_1abe98;
        }
    }
    ctx->pc = 0x1ABE84u;
label_1abe84:
    // 0x1abe84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1abe84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1abe88:
    // 0x1abe88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1abe88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1abe8c:
    // 0x1abe8c: 0xc06ad88  jal         func_1AB620
label_1abe90:
    if (ctx->pc == 0x1ABE90u) {
        ctx->pc = 0x1ABE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE8Cu;
        // 0x1abe90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABE94u;
        goto label_1abe94;
    }
    ctx->pc = 0x1ABE8Cu;
    SET_GPR_U32(ctx, 31, 0x1ABE94u);
    ctx->pc = 0x1ABE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABE8Cu;
    // 0x1abe90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB620u, 0x1ABE8Cu, 0x1ABE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABE94u;
label_1abe94:
    // 0x1abe94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1abe94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1abe98:
    // 0x1abe98: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x1abe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1abe9c:
    // 0x1abe9c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1abe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1abea0:
    // 0x1abea0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1abea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1abea4:
    // 0x1abea4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_1abea8:
    if (ctx->pc == 0x1ABEA8u) {
        ctx->pc = 0x1ABEACu;
        goto label_1abeac;
    }
    ctx->pc = 0x1ABEA4u;
    {
        const bool branch_taken_0x1abea4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1abea4) {
            ctx->pc = 0x1ABEC8u;
            goto label_1abec8;
        }
    }
    ctx->pc = 0x1ABEACu;
label_1abeac:
    // 0x1abeac: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1abeb0:
    if (ctx->pc == 0x1ABEB0u) {
        ctx->pc = 0x1ABEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEACu;
        // 0x1abeb0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABEB4u;
        goto label_1abeb4;
    }
    ctx->pc = 0x1ABEACu;
    {
        const bool branch_taken_0x1abeac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEACu;
        // 0x1abeb0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abeac) {
            ctx->pc = 0x1ABEB8u;
            goto label_1abeb8;
        }
    }
    ctx->pc = 0x1ABEB4u;
label_1abeb4:
    // 0x1abeb4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1abeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1abeb8:
    // 0x1abeb8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1abeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1abebc:
    // 0x1abebc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1abebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1abec0:
    // 0x1abec0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1abec4:
    if (ctx->pc == 0x1ABEC4u) {
        ctx->pc = 0x1ABEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEC0u;
        // 0x1abec4: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABEC8u;
        goto label_1abec8;
    }
    ctx->pc = 0x1ABEC0u;
    {
        const bool branch_taken_0x1abec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEC0u;
        // 0x1abec4: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abec0) {
            ctx->pc = 0x1ABED0u;
            goto label_1abed0;
        }
    }
    ctx->pc = 0x1ABEC8u;
label_1abec8:
    // 0x1abec8: 0xc13921a  jal         func_4E4868
label_1abecc:
    if (ctx->pc == 0x1ABECCu) {
        ctx->pc = 0x1ABECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEC8u;
        // 0x1abecc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABED0u;
        goto label_1abed0;
    }
    ctx->pc = 0x1ABEC8u;
    SET_GPR_U32(ctx, 31, 0x1ABED0u);
    ctx->pc = 0x1ABECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABEC8u;
    // 0x1abecc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4868u, 0x1ABEC8u, 0x1ABED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABED0u;
label_1abed0:
    // 0x1abed0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1abed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1abed4:
    // 0x1abed4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1abed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1abed8:
    // 0x1abed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1abed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1abedc:
    // 0x1abedc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1abedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1abee0:
    // 0x1abee0: 0x3e00008  jr          $ra
label_1abee4:
    if (ctx->pc == 0x1ABEE4u) {
        ctx->pc = 0x1ABEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEE0u;
        // 0x1abee4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABEE8u;
        goto label_fallthrough_0x1abee0;
    }
    ctx->pc = 0x1ABEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEE0u;
        // 0x1abee4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1abee0:
    ctx->pc = 0x1ABEE8u;
}
