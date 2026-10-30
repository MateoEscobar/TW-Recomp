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

// Function: sub_0022EF58
// Address: 0x22ef58 - 0x22f100
void sub_0022EF58_0x22ef58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EF58_0x22ef58");
#endif

    switch (ctx->pc) {
        case 0x22ef58u: goto label_22ef58;
        case 0x22ef5cu: goto label_22ef5c;
        case 0x22ef60u: goto label_22ef60;
        case 0x22ef64u: goto label_22ef64;
        case 0x22ef68u: goto label_22ef68;
        case 0x22ef6cu: goto label_22ef6c;
        case 0x22ef70u: goto label_22ef70;
        case 0x22ef74u: goto label_22ef74;
        case 0x22ef78u: goto label_22ef78;
        case 0x22ef7cu: goto label_22ef7c;
        case 0x22ef80u: goto label_22ef80;
        case 0x22ef84u: goto label_22ef84;
        case 0x22ef88u: goto label_22ef88;
        case 0x22ef8cu: goto label_22ef8c;
        case 0x22ef90u: goto label_22ef90;
        case 0x22ef94u: goto label_22ef94;
        case 0x22ef98u: goto label_22ef98;
        case 0x22ef9cu: goto label_22ef9c;
        case 0x22efa0u: goto label_22efa0;
        case 0x22efa4u: goto label_22efa4;
        case 0x22efa8u: goto label_22efa8;
        case 0x22efacu: goto label_22efac;
        case 0x22efb0u: goto label_22efb0;
        case 0x22efb4u: goto label_22efb4;
        case 0x22efb8u: goto label_22efb8;
        case 0x22efbcu: goto label_22efbc;
        case 0x22efc0u: goto label_22efc0;
        case 0x22efc4u: goto label_22efc4;
        case 0x22efc8u: goto label_22efc8;
        case 0x22efccu: goto label_22efcc;
        case 0x22efd0u: goto label_22efd0;
        case 0x22efd4u: goto label_22efd4;
        case 0x22efd8u: goto label_22efd8;
        case 0x22efdcu: goto label_22efdc;
        case 0x22efe0u: goto label_22efe0;
        case 0x22efe4u: goto label_22efe4;
        case 0x22efe8u: goto label_22efe8;
        case 0x22efecu: goto label_22efec;
        case 0x22eff0u: goto label_22eff0;
        case 0x22eff4u: goto label_22eff4;
        case 0x22eff8u: goto label_22eff8;
        case 0x22effcu: goto label_22effc;
        case 0x22f000u: goto label_22f000;
        case 0x22f004u: goto label_22f004;
        case 0x22f008u: goto label_22f008;
        case 0x22f00cu: goto label_22f00c;
        case 0x22f010u: goto label_22f010;
        case 0x22f014u: goto label_22f014;
        case 0x22f018u: goto label_22f018;
        case 0x22f01cu: goto label_22f01c;
        case 0x22f020u: goto label_22f020;
        case 0x22f024u: goto label_22f024;
        case 0x22f028u: goto label_22f028;
        case 0x22f02cu: goto label_22f02c;
        case 0x22f030u: goto label_22f030;
        case 0x22f034u: goto label_22f034;
        case 0x22f038u: goto label_22f038;
        case 0x22f03cu: goto label_22f03c;
        case 0x22f040u: goto label_22f040;
        case 0x22f044u: goto label_22f044;
        case 0x22f048u: goto label_22f048;
        case 0x22f04cu: goto label_22f04c;
        case 0x22f050u: goto label_22f050;
        case 0x22f054u: goto label_22f054;
        case 0x22f058u: goto label_22f058;
        case 0x22f05cu: goto label_22f05c;
        case 0x22f060u: goto label_22f060;
        case 0x22f064u: goto label_22f064;
        case 0x22f068u: goto label_22f068;
        case 0x22f06cu: goto label_22f06c;
        case 0x22f070u: goto label_22f070;
        case 0x22f074u: goto label_22f074;
        case 0x22f078u: goto label_22f078;
        case 0x22f07cu: goto label_22f07c;
        case 0x22f080u: goto label_22f080;
        case 0x22f084u: goto label_22f084;
        case 0x22f088u: goto label_22f088;
        case 0x22f08cu: goto label_22f08c;
        case 0x22f090u: goto label_22f090;
        case 0x22f094u: goto label_22f094;
        case 0x22f098u: goto label_22f098;
        case 0x22f09cu: goto label_22f09c;
        case 0x22f0a0u: goto label_22f0a0;
        case 0x22f0a4u: goto label_22f0a4;
        case 0x22f0a8u: goto label_22f0a8;
        case 0x22f0acu: goto label_22f0ac;
        case 0x22f0b0u: goto label_22f0b0;
        case 0x22f0b4u: goto label_22f0b4;
        case 0x22f0b8u: goto label_22f0b8;
        case 0x22f0bcu: goto label_22f0bc;
        case 0x22f0c0u: goto label_22f0c0;
        case 0x22f0c4u: goto label_22f0c4;
        case 0x22f0c8u: goto label_22f0c8;
        case 0x22f0ccu: goto label_22f0cc;
        case 0x22f0d0u: goto label_22f0d0;
        case 0x22f0d4u: goto label_22f0d4;
        case 0x22f0d8u: goto label_22f0d8;
        case 0x22f0dcu: goto label_22f0dc;
        case 0x22f0e0u: goto label_22f0e0;
        case 0x22f0e4u: goto label_22f0e4;
        case 0x22f0e8u: goto label_22f0e8;
        case 0x22f0ecu: goto label_22f0ec;
        case 0x22f0f0u: goto label_22f0f0;
        case 0x22f0f4u: goto label_22f0f4;
        case 0x22f0f8u: goto label_22f0f8;
        case 0x22f0fcu: goto label_22f0fc;
        default: break;
    }

    ctx->pc = 0x22ef58u;

label_22ef58:
    // 0x22ef58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22ef58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22ef5c:
    // 0x22ef5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22ef5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22ef60:
    // 0x22ef60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_22ef64:
    // 0x22ef64: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22ef64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_22ef68:
    // 0x22ef68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22ef6c:
    // 0x22ef6c: 0xc088edc  jal         func_223B70
label_22ef70:
    if (ctx->pc == 0x22EF70u) {
        ctx->pc = 0x22EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF6Cu;
        // 0x22ef70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF74u;
        goto label_22ef74;
    }
    ctx->pc = 0x22EF6Cu;
    SET_GPR_U32(ctx, 31, 0x22EF74u);
    ctx->pc = 0x22EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EF6Cu;
    // 0x22ef70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x22EF6Cu, 0x22EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF74u;
label_22ef74:
    // 0x22ef74: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_22ef78:
    if (ctx->pc == 0x22EF78u) {
        ctx->pc = 0x22EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF74u;
        // 0x22ef78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF7Cu;
        goto label_22ef7c;
    }
    ctx->pc = 0x22EF74u;
    {
        const bool branch_taken_0x22ef74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF74u;
        // 0x22ef78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef74) {
            ctx->pc = 0x22F0ECu;
            goto label_22f0ec;
        }
    }
    ctx->pc = 0x22EF7Cu;
label_22ef7c:
    // 0x22ef7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22ef80:
    // 0x22ef80: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22ef80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22ef84:
    // 0x22ef84: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22ef88:
    // 0x22ef88: 0x40f809  jalr        $v0
label_22ef8c:
    if (ctx->pc == 0x22EF8Cu) {
        ctx->pc = 0x22EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF88u;
        // 0x22ef8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF90u;
        goto label_22ef90;
    }
    ctx->pc = 0x22EF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22EF90u);
        ctx->pc = 0x22EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF88u;
        // 0x22ef8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EF88u, 0x22EF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22EF90u;
label_22ef90:
    // 0x22ef90: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_22ef94:
    if (ctx->pc == 0x22EF94u) {
        ctx->pc = 0x22EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF90u;
        // 0x22ef94: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EF98u;
        goto label_22ef98;
    }
    ctx->pc = 0x22EF90u;
    {
        const bool branch_taken_0x22ef90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ef90) {
            ctx->pc = 0x22EF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EF90u;
            // 0x22ef94: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EFC4u;
            goto label_22efc4;
        }
    }
    ctx->pc = 0x22EF98u;
label_22ef98:
    // 0x22ef98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22ef9c:
    // 0x22ef9c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22ef9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22efa0:
    // 0x22efa0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22efa4:
    // 0x22efa4: 0x40f809  jalr        $v0
label_22efa8:
    if (ctx->pc == 0x22EFA8u) {
        ctx->pc = 0x22EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFA4u;
        // 0x22efa8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EFACu;
        goto label_22efac;
    }
    ctx->pc = 0x22EFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22EFACu);
        ctx->pc = 0x22EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFA4u;
        // 0x22efa8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EFA4u, 0x22EFACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22EFACu;
label_22efac:
    // 0x22efac: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x22efacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22efb0:
    // 0x22efb0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22efb4:
    // 0x22efb4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x22efb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_22efb8:
    // 0x22efb8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22efb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_22efbc:
    // 0x22efbc: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x22efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_22efc0:
    // 0x22efc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22efc4:
    // 0x22efc4: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x22efc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_22efc8:
    // 0x22efc8: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x22efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_22efcc:
    // 0x22efcc: 0x60f809  jalr        $v1
label_22efd0:
    if (ctx->pc == 0x22EFD0u) {
        ctx->pc = 0x22EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFCCu;
        // 0x22efd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EFD4u;
        goto label_22efd4;
    }
    ctx->pc = 0x22EFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22EFD4u);
        ctx->pc = 0x22EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFCCu;
        // 0x22efd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EFCCu, 0x22EFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22EFD4u;
label_22efd4:
    // 0x22efd4: 0xc093390  jal         func_24CE40
label_22efd8:
    if (ctx->pc == 0x22EFD8u) {
        ctx->pc = 0x22EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFD4u;
        // 0x22efd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EFDCu;
        goto label_22efdc;
    }
    ctx->pc = 0x22EFD4u;
    SET_GPR_U32(ctx, 31, 0x22EFDCu);
    ctx->pc = 0x22EFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EFD4u;
    // 0x22efd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE40u, 0x22EFD4u, 0x22EFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EFDCu;
label_22efdc:
    // 0x22efdc: 0xc089ce2  jal         func_227388
label_22efe0:
    if (ctx->pc == 0x22EFE0u) {
        ctx->pc = 0x22EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFDCu;
        // 0x22efe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EFE4u;
        goto label_22efe4;
    }
    ctx->pc = 0x22EFDCu;
    SET_GPR_U32(ctx, 31, 0x22EFE4u);
    ctx->pc = 0x22EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EFDCu;
    // 0x22efe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x22EFDCu, 0x22EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EFE4u;
label_22efe4:
    // 0x22efe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22efe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22efe8:
    // 0x22efe8: 0xc094fde  jal         func_253F78
label_22efec:
    if (ctx->pc == 0x22EFECu) {
        ctx->pc = 0x22EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFE8u;
        // 0x22efec: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EFF0u;
        goto label_22eff0;
    }
    ctx->pc = 0x22EFE8u;
    SET_GPR_U32(ctx, 31, 0x22EFF0u);
    ctx->pc = 0x22EFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EFE8u;
    // 0x22efec: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x22EFE8u, 0x22EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EFF0u;
label_22eff0:
    // 0x22eff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22eff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22eff4:
    // 0x22eff4: 0xc089988  jal         func_226620
label_22eff8:
    if (ctx->pc == 0x22EFF8u) {
        ctx->pc = 0x22EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFF4u;
        // 0x22eff8: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EFFCu;
        goto label_22effc;
    }
    ctx->pc = 0x22EFF4u;
    SET_GPR_U32(ctx, 31, 0x22EFFCu);
    ctx->pc = 0x22EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EFF4u;
    // 0x22eff8: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22EFF4u, 0x22EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EFFCu;
label_22effc:
    // 0x22effc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22f000:
    // 0x22f000: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22f000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22f004:
    // 0x22f004: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22f004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22f008:
    // 0x22f008: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22f008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22f00c:
    // 0x22f00c: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22f00cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22f010:
    // 0x22f010: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22f014:
    // 0x22f014: 0x40f809  jalr        $v0
label_22f018:
    if (ctx->pc == 0x22F018u) {
        ctx->pc = 0x22F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F014u;
        // 0x22f018: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F01Cu;
        goto label_22f01c;
    }
    ctx->pc = 0x22F014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22F01Cu);
        ctx->pc = 0x22F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F014u;
        // 0x22f018: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F014u, 0x22F01Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22F01Cu;
label_22f01c:
    // 0x22f01c: 0xc087502  jal         func_21D408
label_22f020:
    if (ctx->pc == 0x22F020u) {
        ctx->pc = 0x22F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F01Cu;
        // 0x22f020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F024u;
        goto label_22f024;
    }
    ctx->pc = 0x22F01Cu;
    SET_GPR_U32(ctx, 31, 0x22F024u);
    ctx->pc = 0x22F020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F01Cu;
    // 0x22f020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22F01Cu, 0x22F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F024u;
label_22f024:
    // 0x22f024: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x22f024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_22f028:
    // 0x22f028: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x22f028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_22f02c:
    // 0x22f02c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_22f030:
    if (ctx->pc == 0x22F030u) {
        ctx->pc = 0x22F034u;
        goto label_22f034;
    }
    ctx->pc = 0x22F02Cu;
    {
        const bool branch_taken_0x22f02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f02c) {
            ctx->pc = 0x22F0D4u;
            goto label_22f0d4;
        }
    }
    ctx->pc = 0x22F034u;
label_22f034:
    // 0x22f034: 0xc087502  jal         func_21D408
label_22f038:
    if (ctx->pc == 0x22F038u) {
        ctx->pc = 0x22F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F034u;
        // 0x22f038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F03Cu;
        goto label_22f03c;
    }
    ctx->pc = 0x22F034u;
    SET_GPR_U32(ctx, 31, 0x22F03Cu);
    ctx->pc = 0x22F038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F034u;
    // 0x22f038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22F034u, 0x22F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F03Cu;
label_22f03c:
    // 0x22f03c: 0xc05959e  jal         func_165678
label_22f040:
    if (ctx->pc == 0x22F040u) {
        ctx->pc = 0x22F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F03Cu;
        // 0x22f040: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F044u;
        goto label_22f044;
    }
    ctx->pc = 0x22F03Cu;
    SET_GPR_U32(ctx, 31, 0x22F044u);
    ctx->pc = 0x22F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F03Cu;
    // 0x22f040: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x22F03Cu, 0x22F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F044u;
label_22f044:
    // 0x22f044: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22f044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f048:
    // 0x22f048: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
label_22f04c:
    if (ctx->pc == 0x22F04Cu) {
        ctx->pc = 0x22F050u;
        goto label_22f050;
    }
    ctx->pc = 0x22F048u;
    {
        const bool branch_taken_0x22f048 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f048) {
            ctx->pc = 0x22F0D4u;
            goto label_22f0d4;
        }
    }
    ctx->pc = 0x22F050u;
label_22f050:
    // 0x22f050: 0x12510020  beq         $s2, $s1, . + 4 + (0x20 << 2)
label_22f054:
    if (ctx->pc == 0x22F054u) {
        ctx->pc = 0x22F058u;
        goto label_22f058;
    }
    ctx->pc = 0x22F050u;
    {
        const bool branch_taken_0x22f050 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x22f050) {
            ctx->pc = 0x22F0D4u;
            goto label_22f0d4;
        }
    }
    ctx->pc = 0x22F058u;
label_22f058:
    // 0x22f058: 0xc087502  jal         func_21D408
label_22f05c:
    if (ctx->pc == 0x22F05Cu) {
        ctx->pc = 0x22F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F058u;
        // 0x22f05c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F060u;
        goto label_22f060;
    }
    ctx->pc = 0x22F058u;
    SET_GPR_U32(ctx, 31, 0x22F060u);
    ctx->pc = 0x22F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F058u;
    // 0x22f05c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22F058u, 0x22F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F060u;
label_22f060:
    // 0x22f060: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22f060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_22f064:
    // 0x22f064: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22f064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22f068:
    // 0x22f068: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_22f06c:
    if (ctx->pc == 0x22F06Cu) {
        ctx->pc = 0x22F070u;
        goto label_22f070;
    }
    ctx->pc = 0x22F068u;
    {
        const bool branch_taken_0x22f068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22f068) {
            ctx->pc = 0x22F0D4u;
            goto label_22f0d4;
        }
    }
    ctx->pc = 0x22F070u;
label_22f070:
    // 0x22f070: 0xc087502  jal         func_21D408
label_22f074:
    if (ctx->pc == 0x22F074u) {
        ctx->pc = 0x22F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F070u;
        // 0x22f074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F078u;
        goto label_22f078;
    }
    ctx->pc = 0x22F070u;
    SET_GPR_U32(ctx, 31, 0x22F078u);
    ctx->pc = 0x22F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F070u;
    // 0x22f074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22F070u, 0x22F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F078u;
label_22f078:
    // 0x22f078: 0xc0a36c8  jal         func_28DB20
label_22f07c:
    if (ctx->pc == 0x22F07Cu) {
        ctx->pc = 0x22F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F078u;
        // 0x22f07c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F080u;
        goto label_22f080;
    }
    ctx->pc = 0x22F078u;
    SET_GPR_U32(ctx, 31, 0x22F080u);
    ctx->pc = 0x22F07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F078u;
    // 0x22f07c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x22F078u, 0x22F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F080u;
label_22f080:
    // 0x22f080: 0xc087502  jal         func_21D408
label_22f084:
    if (ctx->pc == 0x22F084u) {
        ctx->pc = 0x22F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F080u;
        // 0x22f084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F088u;
        goto label_22f088;
    }
    ctx->pc = 0x22F080u;
    SET_GPR_U32(ctx, 31, 0x22F088u);
    ctx->pc = 0x22F084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F080u;
    // 0x22f084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22F080u, 0x22F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F088u;
label_22f088:
    // 0x22f088: 0xc0a3644  jal         func_28D910
label_22f08c:
    if (ctx->pc == 0x22F08Cu) {
        ctx->pc = 0x22F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F088u;
        // 0x22f08c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F090u;
        goto label_22f090;
    }
    ctx->pc = 0x22F088u;
    SET_GPR_U32(ctx, 31, 0x22F090u);
    ctx->pc = 0x22F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F088u;
    // 0x22f08c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D910u, 0x22F088u, 0x22F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F090u;
label_22f090:
    // 0x22f090: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22f090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22f094:
    // 0x22f094: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22f094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22f098:
    // 0x22f098: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22f09c:
    // 0x22f09c: 0x40f809  jalr        $v0
label_22f0a0:
    if (ctx->pc == 0x22F0A0u) {
        ctx->pc = 0x22F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F09Cu;
        // 0x22f0a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F0A4u;
        goto label_22f0a4;
    }
    ctx->pc = 0x22F09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22F0A4u);
        ctx->pc = 0x22F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F09Cu;
        // 0x22f0a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F09Cu, 0x22F0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22F0A4u;
label_22f0a4:
    // 0x22f0a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22f0a8:
    // 0x22f0a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22f0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f0ac:
    // 0x22f0ac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22f0acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22f0b0:
    // 0x22f0b0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22f0b4:
    // 0x22f0b4: 0x40f809  jalr        $v0
label_22f0b8:
    if (ctx->pc == 0x22F0B8u) {
        ctx->pc = 0x22F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0B4u;
        // 0x22f0b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F0BCu;
        goto label_22f0bc;
    }
    ctx->pc = 0x22F0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22F0BCu);
        ctx->pc = 0x22F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0B4u;
        // 0x22f0b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F0B4u, 0x22F0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22F0BCu;
label_22f0bc:
    // 0x22f0bc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22f0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_22f0c0:
    // 0x22f0c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22f0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22f0c4:
    // 0x22f0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f0c8:
    // 0x22f0c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22f0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f0cc:
    // 0x22f0cc: 0xc0b78b2  jal         func_2DE2C8
label_22f0d0:
    if (ctx->pc == 0x22F0D0u) {
        ctx->pc = 0x22F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0CCu;
        // 0x22f0d0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F0D4u;
        goto label_22f0d4;
    }
    ctx->pc = 0x22F0CCu;
    SET_GPR_U32(ctx, 31, 0x22F0D4u);
    ctx->pc = 0x22F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F0CCu;
    // 0x22f0d0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2C8u, 0x22F0CCu, 0x22F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F0D4u;
label_22f0d4:
    // 0x22f0d4: 0xc087502  jal         func_21D408
label_22f0d8:
    if (ctx->pc == 0x22F0D8u) {
        ctx->pc = 0x22F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0D4u;
        // 0x22f0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F0DCu;
        goto label_22f0dc;
    }
    ctx->pc = 0x22F0D4u;
    SET_GPR_U32(ctx, 31, 0x22F0DCu);
    ctx->pc = 0x22F0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F0D4u;
    // 0x22f0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22F0D4u, 0x22F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F0DCu;
label_22f0dc:
    // 0x22f0dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22f0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f0e0:
    // 0x22f0e0: 0xc0a3176  jal         func_28C5D8
label_22f0e4:
    if (ctx->pc == 0x22F0E4u) {
        ctx->pc = 0x22F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0E0u;
        // 0x22f0e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F0E8u;
        goto label_22f0e8;
    }
    ctx->pc = 0x22F0E0u;
    SET_GPR_U32(ctx, 31, 0x22F0E8u);
    ctx->pc = 0x22F0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F0E0u;
    // 0x22f0e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C5D8u, 0x22F0E0u, 0x22F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F0E8u;
label_22f0e8:
    // 0x22f0e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22f0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22f0ec:
    // 0x22f0ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22f0ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22f0f0:
    // 0x22f0f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22f0f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22f0f4:
    // 0x22f0f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22f0f8:
    // 0x22f0f8: 0x3e00008  jr          $ra
label_22f0fc:
    if (ctx->pc == 0x22F0FCu) {
        ctx->pc = 0x22F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0F8u;
        // 0x22f0fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F100u;
        goto label_fallthrough_0x22f0f8;
    }
    ctx->pc = 0x22F0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0F8u;
        // 0x22f0fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22f0f8:
    ctx->pc = 0x22F100u;
}
