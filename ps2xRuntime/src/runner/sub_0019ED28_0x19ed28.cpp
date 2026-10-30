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

// Function: sub_0019ED28
// Address: 0x19ed28 - 0x19ee10
void sub_0019ED28_0x19ed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ED28_0x19ed28");
#endif

    switch (ctx->pc) {
        case 0x19ed28u: goto label_19ed28;
        case 0x19ed2cu: goto label_19ed2c;
        case 0x19ed30u: goto label_19ed30;
        case 0x19ed34u: goto label_19ed34;
        case 0x19ed38u: goto label_19ed38;
        case 0x19ed3cu: goto label_19ed3c;
        case 0x19ed40u: goto label_19ed40;
        case 0x19ed44u: goto label_19ed44;
        case 0x19ed48u: goto label_19ed48;
        case 0x19ed4cu: goto label_19ed4c;
        case 0x19ed50u: goto label_19ed50;
        case 0x19ed54u: goto label_19ed54;
        case 0x19ed58u: goto label_19ed58;
        case 0x19ed5cu: goto label_19ed5c;
        case 0x19ed60u: goto label_19ed60;
        case 0x19ed64u: goto label_19ed64;
        case 0x19ed68u: goto label_19ed68;
        case 0x19ed6cu: goto label_19ed6c;
        case 0x19ed70u: goto label_19ed70;
        case 0x19ed74u: goto label_19ed74;
        case 0x19ed78u: goto label_19ed78;
        case 0x19ed7cu: goto label_19ed7c;
        case 0x19ed80u: goto label_19ed80;
        case 0x19ed84u: goto label_19ed84;
        case 0x19ed88u: goto label_19ed88;
        case 0x19ed8cu: goto label_19ed8c;
        case 0x19ed90u: goto label_19ed90;
        case 0x19ed94u: goto label_19ed94;
        case 0x19ed98u: goto label_19ed98;
        case 0x19ed9cu: goto label_19ed9c;
        case 0x19eda0u: goto label_19eda0;
        case 0x19eda4u: goto label_19eda4;
        case 0x19eda8u: goto label_19eda8;
        case 0x19edacu: goto label_19edac;
        case 0x19edb0u: goto label_19edb0;
        case 0x19edb4u: goto label_19edb4;
        case 0x19edb8u: goto label_19edb8;
        case 0x19edbcu: goto label_19edbc;
        case 0x19edc0u: goto label_19edc0;
        case 0x19edc4u: goto label_19edc4;
        case 0x19edc8u: goto label_19edc8;
        case 0x19edccu: goto label_19edcc;
        case 0x19edd0u: goto label_19edd0;
        case 0x19edd4u: goto label_19edd4;
        case 0x19edd8u: goto label_19edd8;
        case 0x19eddcu: goto label_19eddc;
        case 0x19ede0u: goto label_19ede0;
        case 0x19ede4u: goto label_19ede4;
        case 0x19ede8u: goto label_19ede8;
        case 0x19edecu: goto label_19edec;
        case 0x19edf0u: goto label_19edf0;
        case 0x19edf4u: goto label_19edf4;
        case 0x19edf8u: goto label_19edf8;
        case 0x19edfcu: goto label_19edfc;
        case 0x19ee00u: goto label_19ee00;
        case 0x19ee04u: goto label_19ee04;
        case 0x19ee08u: goto label_19ee08;
        case 0x19ee0cu: goto label_19ee0c;
        default: break;
    }

    ctx->pc = 0x19ed28u;

label_19ed28:
    // 0x19ed28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19ed28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19ed2c:
    // 0x19ed2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ed30:
    // 0x19ed30: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19ed30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_19ed34:
    // 0x19ed34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19ed34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_19ed38:
    // 0x19ed38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19ed38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ed3c:
    // 0x19ed3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19ed3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_19ed40:
    // 0x19ed40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ed40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19ed44:
    // 0x19ed44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19ed48:
    // 0x19ed48: 0x926203d0  lbu         $v0, 0x3D0($s3)
    ctx->pc = 0x19ed48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 976)));
label_19ed4c:
    // 0x19ed4c: 0x1043002a  beq         $v0, $v1, . + 4 + (0x2A << 2)
label_19ed50:
    if (ctx->pc == 0x19ED50u) {
        ctx->pc = 0x19ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED4Cu;
        // 0x19ed50: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED54u;
        goto label_19ed54;
    }
    ctx->pc = 0x19ED4Cu;
    {
        const bool branch_taken_0x19ed4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED4Cu;
        // 0x19ed50: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed4c) {
            ctx->pc = 0x19EDF8u;
            goto label_19edf8;
        }
    }
    ctx->pc = 0x19ED54u;
label_19ed54:
    // 0x19ed54: 0xc0734a2  jal         func_1CD288
label_19ed58:
    if (ctx->pc == 0x19ED58u) {
        ctx->pc = 0x19ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED54u;
        // 0x19ed58: 0x267000d0  addiu       $s0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED5Cu;
        goto label_19ed5c;
    }
    ctx->pc = 0x19ED54u;
    SET_GPR_U32(ctx, 31, 0x19ED5Cu);
    ctx->pc = 0x19ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED54u;
    // 0x19ed58: 0x267000d0  addiu       $s0, $s3, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x19ED54u, 0x19ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED5Cu;
label_19ed5c:
    // 0x19ed5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19ed5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ed60:
    // 0x19ed60: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x19ed60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ed64:
    // 0x19ed64: 0x0  nop
    ctx->pc = 0x19ed64u;
    // NOP
label_19ed68:
    // 0x19ed68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ed6c:
    // 0x19ed6c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19ed6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19ed70:
    // 0x19ed70: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x19ed70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_19ed74:
    // 0x19ed74: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x19ed74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_19ed78:
    // 0x19ed78: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x19ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_19ed7c:
    // 0x19ed7c: 0x40f809  jalr        $v0
label_19ed80:
    if (ctx->pc == 0x19ED80u) {
        ctx->pc = 0x19ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED7Cu;
        // 0x19ed80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED84u;
        goto label_19ed84;
    }
    ctx->pc = 0x19ED7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19ED84u);
        ctx->pc = 0x19ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED7Cu;
        // 0x19ed80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ED7Cu, 0x19ED84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19ED84u;
label_19ed84:
    // 0x19ed84: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x19ed84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_19ed88:
    // 0x19ed88: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_19ed8c:
    if (ctx->pc == 0x19ED8Cu) {
        ctx->pc = 0x19ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED88u;
        // 0x19ed8c: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED90u;
        goto label_19ed90;
    }
    ctx->pc = 0x19ED88u;
    {
        const bool branch_taken_0x19ed88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED88u;
        // 0x19ed8c: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed88) {
            ctx->pc = 0x19ED68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ed68;
        }
    }
    ctx->pc = 0x19ED90u;
label_19ed90:
    // 0x19ed90: 0xc0579d2  jal         func_15E748
label_19ed94:
    if (ctx->pc == 0x19ED94u) {
        ctx->pc = 0x19ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED90u;
        // 0x19ed94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ED98u;
        goto label_19ed98;
    }
    ctx->pc = 0x19ED90u;
    SET_GPR_U32(ctx, 31, 0x19ED98u);
    ctx->pc = 0x19ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED90u;
    // 0x19ed94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x19ED90u, 0x19ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED98u;
label_19ed98:
    // 0x19ed98: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x19ed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_19ed9c:
    // 0x19ed9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_19eda0:
    if (ctx->pc == 0x19EDA0u) {
        ctx->pc = 0x19EDA4u;
        goto label_19eda4;
    }
    ctx->pc = 0x19ED9Cu;
    {
        const bool branch_taken_0x19ed9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed9c) {
            ctx->pc = 0x19EDCCu;
            goto label_19edcc;
        }
    }
    ctx->pc = 0x19EDA4u;
label_19eda4:
    // 0x19eda4: 0xc043d5e  jal         func_10F578
label_19eda8:
    if (ctx->pc == 0x19EDA8u) {
        ctx->pc = 0x19EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDA4u;
        // 0x19eda8: 0x266403d8  addiu       $a0, $s3, 0x3D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDACu;
        goto label_19edac;
    }
    ctx->pc = 0x19EDA4u;
    SET_GPR_U32(ctx, 31, 0x19EDACu);
    ctx->pc = 0x19EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EDA4u;
    // 0x19eda8: 0x266403d8  addiu       $a0, $s3, 0x3D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x19EDA4u, 0x19EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EDACu;
label_19edac:
    // 0x19edac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_19edb0:
    if (ctx->pc == 0x19EDB0u) {
        ctx->pc = 0x19EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDACu;
        // 0x19edb0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDB4u;
        goto label_19edb4;
    }
    ctx->pc = 0x19EDACu;
    {
        const bool branch_taken_0x19edac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDACu;
        // 0x19edb0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19edac) {
            ctx->pc = 0x19EDCCu;
            goto label_19edcc;
        }
    }
    ctx->pc = 0x19EDB4u;
label_19edb4:
    // 0x19edb4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x19edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_19edb8:
    // 0x19edb8: 0x8c83aa84  lw          $v1, -0x557C($a0)
    ctx->pc = 0x19edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945412)));
label_19edbc:
    // 0x19edbc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x19edbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_19edc0:
    // 0x19edc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19edc4:
    // 0x19edc4: 0x8c647a24  lw          $a0, 0x7A24($v1)
    ctx->pc = 0x19edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
label_19edc8:
    // 0x19edc8: 0x2c900001  sltiu       $s0, $a0, 0x1
    ctx->pc = 0x19edc8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19edcc:
    // 0x19edcc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_19edd0:
    if (ctx->pc == 0x19EDD0u) {
        ctx->pc = 0x19EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDCCu;
        // 0x19edd0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDD4u;
        goto label_19edd4;
    }
    ctx->pc = 0x19EDCCu;
    {
        const bool branch_taken_0x19edcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDCCu;
        // 0x19edd0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19edcc) {
            ctx->pc = 0x19EDF4u;
            goto label_19edf4;
        }
    }
    ctx->pc = 0x19EDD4u;
label_19edd4:
    // 0x19edd4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x19edd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_19edd8:
    // 0x19edd8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x19edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_19eddc:
    // 0x19eddc: 0x24a53af0  addiu       $a1, $a1, 0x3AF0
    ctx->pc = 0x19eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15088));
label_19ede0:
    // 0x19ede0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19ede0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ede4:
    // 0x19ede4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19ede4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ede8:
    // 0x19ede8: 0xc043f1c  jal         func_10FC70
label_19edec:
    if (ctx->pc == 0x19EDECu) {
        ctx->pc = 0x19EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDE8u;
        // 0x19edec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EDF0u;
        goto label_19edf0;
    }
    ctx->pc = 0x19EDE8u;
    SET_GPR_U32(ctx, 31, 0x19EDF0u);
    ctx->pc = 0x19EDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EDE8u;
    // 0x19edec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x19EDE8u, 0x19EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EDF0u;
label_19edf0:
    // 0x19edf0: 0xae6203d8  sw          $v0, 0x3D8($s3)
    ctx->pc = 0x19edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 984), GPR_U32(ctx, 2));
label_19edf4:
    // 0x19edf4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19edf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19edf8:
    // 0x19edf8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19edf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19edfc:
    // 0x19edfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19edfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19ee00:
    // 0x19ee00: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19ee00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19ee04:
    // 0x19ee04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ee04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ee08:
    // 0x19ee08: 0x3e00008  jr          $ra
label_19ee0c:
    if (ctx->pc == 0x19EE0Cu) {
        ctx->pc = 0x19EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE08u;
        // 0x19ee0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EE10u;
        goto label_fallthrough_0x19ee08;
    }
    ctx->pc = 0x19EE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE08u;
        // 0x19ee0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19ee08:
    ctx->pc = 0x19EE10u;
}
