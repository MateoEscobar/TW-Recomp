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

// Function: sub_001889D0
// Address: 0x1889d0 - 0x188aa8
void sub_001889D0_0x1889d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001889D0_0x1889d0");
#endif

    switch (ctx->pc) {
        case 0x1889d0u: goto label_1889d0;
        case 0x1889d4u: goto label_1889d4;
        case 0x1889d8u: goto label_1889d8;
        case 0x1889dcu: goto label_1889dc;
        case 0x1889e0u: goto label_1889e0;
        case 0x1889e4u: goto label_1889e4;
        case 0x1889e8u: goto label_1889e8;
        case 0x1889ecu: goto label_1889ec;
        case 0x1889f0u: goto label_1889f0;
        case 0x1889f4u: goto label_1889f4;
        case 0x1889f8u: goto label_1889f8;
        case 0x1889fcu: goto label_1889fc;
        case 0x188a00u: goto label_188a00;
        case 0x188a04u: goto label_188a04;
        case 0x188a08u: goto label_188a08;
        case 0x188a0cu: goto label_188a0c;
        case 0x188a10u: goto label_188a10;
        case 0x188a14u: goto label_188a14;
        case 0x188a18u: goto label_188a18;
        case 0x188a1cu: goto label_188a1c;
        case 0x188a20u: goto label_188a20;
        case 0x188a24u: goto label_188a24;
        case 0x188a28u: goto label_188a28;
        case 0x188a2cu: goto label_188a2c;
        case 0x188a30u: goto label_188a30;
        case 0x188a34u: goto label_188a34;
        case 0x188a38u: goto label_188a38;
        case 0x188a3cu: goto label_188a3c;
        case 0x188a40u: goto label_188a40;
        case 0x188a44u: goto label_188a44;
        case 0x188a48u: goto label_188a48;
        case 0x188a4cu: goto label_188a4c;
        case 0x188a50u: goto label_188a50;
        case 0x188a54u: goto label_188a54;
        case 0x188a58u: goto label_188a58;
        case 0x188a5cu: goto label_188a5c;
        case 0x188a60u: goto label_188a60;
        case 0x188a64u: goto label_188a64;
        case 0x188a68u: goto label_188a68;
        case 0x188a6cu: goto label_188a6c;
        case 0x188a70u: goto label_188a70;
        case 0x188a74u: goto label_188a74;
        case 0x188a78u: goto label_188a78;
        case 0x188a7cu: goto label_188a7c;
        case 0x188a80u: goto label_188a80;
        case 0x188a84u: goto label_188a84;
        case 0x188a88u: goto label_188a88;
        case 0x188a8cu: goto label_188a8c;
        case 0x188a90u: goto label_188a90;
        case 0x188a94u: goto label_188a94;
        case 0x188a98u: goto label_188a98;
        case 0x188a9cu: goto label_188a9c;
        case 0x188aa0u: goto label_188aa0;
        case 0x188aa4u: goto label_188aa4;
        default: break;
    }

    ctx->pc = 0x1889d0u;

label_1889d0:
    // 0x1889d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1889d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1889d4:
    // 0x1889d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1889d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1889d8:
    // 0x1889d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1889d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1889dc:
    // 0x1889dc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1889dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1889e0:
    // 0x1889e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1889e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1889e4:
    // 0x1889e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1889e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1889e8:
    // 0x1889e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1889e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1889ec:
    // 0x1889ec: 0x8c66cdb4  lw          $a2, -0x324C($v1)
    ctx->pc = 0x1889ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_1889f0:
    // 0x1889f0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1889f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1889f4:
    // 0x1889f4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1889f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1889f8:
    // 0x1889f8: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1889f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1889fc:
    // 0x1889fc: 0xa0f809  jalr        $a1
label_188a00:
    if (ctx->pc == 0x188A00u) {
        ctx->pc = 0x188A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889FCu;
        // 0x188a00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A04u;
        goto label_188a04;
    }
    ctx->pc = 0x1889FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x188A04u);
        ctx->pc = 0x188A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889FCu;
        // 0x188a00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1889FCu, 0x188A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188A04u;
label_188a04:
    // 0x188a04: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x188a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_188a08:
    // 0x188a08: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x188a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18372)));
label_188a0c:
    // 0x188a0c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x188a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_188a10:
    // 0x188a10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_188a14:
    if (ctx->pc == 0x188A14u) {
        ctx->pc = 0x188A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A10u;
        // 0x188a14: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A18u;
        goto label_188a18;
    }
    ctx->pc = 0x188A10u;
    {
        const bool branch_taken_0x188a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A10u;
        // 0x188a14: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a10) {
            ctx->pc = 0x188A20u;
            goto label_188a20;
        }
    }
    ctx->pc = 0x188A18u;
label_188a18:
    // 0x188a18: 0xc10382e  jal         func_40E0B8
label_188a1c:
    if (ctx->pc == 0x188A1Cu) {
        ctx->pc = 0x188A20u;
        goto label_188a20;
    }
    ctx->pc = 0x188A18u;
    SET_GPR_U32(ctx, 31, 0x188A20u);
    ctx->pc = 0x40E0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E0B8u, 0x188A18u, 0x188A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A20u;
label_188a20:
    // 0x188a20: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x188a20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_188a24:
    // 0x188a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x188a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188a28:
    // 0x188a28: 0xc0552b8  jal         func_154AE0
label_188a2c:
    if (ctx->pc == 0x188A2Cu) {
        ctx->pc = 0x188A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A28u;
        // 0x188a2c: 0x8e045340  lw          $a0, 0x5340($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A30u;
        goto label_188a30;
    }
    ctx->pc = 0x188A28u;
    SET_GPR_U32(ctx, 31, 0x188A30u);
    ctx->pc = 0x188A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A28u;
    // 0x188a2c: 0x8e045340  lw          $a0, 0x5340($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x188A28u, 0x188A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A30u;
label_188a30:
    // 0x188a30: 0x10000008  b           . + 4 + (0x8 << 2)
label_188a34:
    if (ctx->pc == 0x188A34u) {
        ctx->pc = 0x188A38u;
        goto label_188a38;
    }
    ctx->pc = 0x188A30u;
    {
        const bool branch_taken_0x188a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a30) {
            ctx->pc = 0x188A54u;
            goto label_188a54;
        }
    }
    ctx->pc = 0x188A38u;
label_188a38:
    // 0x188a38: 0xc062a60  jal         func_18A980
label_188a3c:
    if (ctx->pc == 0x188A3Cu) {
        ctx->pc = 0x188A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A38u;
        // 0x188a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A40u;
        goto label_188a40;
    }
    ctx->pc = 0x188A38u;
    SET_GPR_U32(ctx, 31, 0x188A40u);
    ctx->pc = 0x188A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A38u;
    // 0x188a3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x188A38u, 0x188A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A40u;
label_188a40:
    // 0x188a40: 0xc103e28  jal         func_40F8A0
label_188a44:
    if (ctx->pc == 0x188A44u) {
        ctx->pc = 0x188A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A40u;
        // 0x188a44: 0x8e4447c4  lw          $a0, 0x47C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A48u;
        goto label_188a48;
    }
    ctx->pc = 0x188A40u;
    SET_GPR_U32(ctx, 31, 0x188A48u);
    ctx->pc = 0x188A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A40u;
    // 0x188a44: 0x8e4447c4  lw          $a0, 0x47C4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x188A40u, 0x188A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A48u;
label_188a48:
    // 0x188a48: 0x8e045340  lw          $a0, 0x5340($s0)
    ctx->pc = 0x188a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 21312)));
label_188a4c:
    // 0x188a4c: 0xc0552b8  jal         func_154AE0
label_188a50:
    if (ctx->pc == 0x188A50u) {
        ctx->pc = 0x188A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A4Cu;
        // 0x188a50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A54u;
        goto label_188a54;
    }
    ctx->pc = 0x188A4Cu;
    SET_GPR_U32(ctx, 31, 0x188A54u);
    ctx->pc = 0x188A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A4Cu;
    // 0x188a50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x188A4Cu, 0x188A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A54u;
label_188a54:
    // 0x188a54: 0xc0621ee  jal         func_1887B8
label_188a58:
    if (ctx->pc == 0x188A58u) {
        ctx->pc = 0x188A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A54u;
        // 0x188a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A5Cu;
        goto label_188a5c;
    }
    ctx->pc = 0x188A54u;
    SET_GPR_U32(ctx, 31, 0x188A5Cu);
    ctx->pc = 0x188A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A54u;
    // 0x188a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B8u, 0x188A54u, 0x188A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A5Cu;
label_188a5c:
    // 0x188a5c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_188a60:
    if (ctx->pc == 0x188A60u) {
        ctx->pc = 0x188A64u;
        goto label_188a64;
    }
    ctx->pc = 0x188A5Cu;
    {
        const bool branch_taken_0x188a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a5c) {
            ctx->pc = 0x188A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188a38;
        }
    }
    ctx->pc = 0x188A64u;
label_188a64:
    // 0x188a64: 0x10000004  b           . + 4 + (0x4 << 2)
label_188a68:
    if (ctx->pc == 0x188A68u) {
        ctx->pc = 0x188A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A64u;
        // 0x188a68: 0x3c11005e  lui         $s1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A6Cu;
        goto label_188a6c;
    }
    ctx->pc = 0x188A64u;
    {
        const bool branch_taken_0x188a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A64u;
        // 0x188a68: 0x3c11005e  lui         $s1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a64) {
            ctx->pc = 0x188A78u;
            goto label_188a78;
        }
    }
    ctx->pc = 0x188A6Cu;
label_188a6c:
    // 0x188a6c: 0x0  nop
    ctx->pc = 0x188a6cu;
    // NOP
label_188a70:
    // 0x188a70: 0xc0552b8  jal         func_154AE0
label_188a74:
    if (ctx->pc == 0x188A74u) {
        ctx->pc = 0x188A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A70u;
        // 0x188a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A78u;
        goto label_188a78;
    }
    ctx->pc = 0x188A70u;
    SET_GPR_U32(ctx, 31, 0x188A78u);
    ctx->pc = 0x188A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A70u;
    // 0x188a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x188A70u, 0x188A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A78u;
label_188a78:
    // 0x188a78: 0xc05529a  jal         func_154A68
label_188a7c:
    if (ctx->pc == 0x188A7Cu) {
        ctx->pc = 0x188A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A78u;
        // 0x188a7c: 0x8e245340  lw          $a0, 0x5340($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A80u;
        goto label_188a80;
    }
    ctx->pc = 0x188A78u;
    SET_GPR_U32(ctx, 31, 0x188A80u);
    ctx->pc = 0x188A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A78u;
    // 0x188a7c: 0x8e245340  lw          $a0, 0x5340($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A68u, 0x188A78u, 0x188A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A80u;
label_188a80:
    // 0x188a80: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_188a84:
    if (ctx->pc == 0x188A84u) {
        ctx->pc = 0x188A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A80u;
        // 0x188a84: 0x8e045340  lw          $a0, 0x5340($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A88u;
        goto label_188a88;
    }
    ctx->pc = 0x188A80u;
    {
        const bool branch_taken_0x188a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188a80) {
            ctx->pc = 0x188A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188A80u;
            // 0x188a84: 0x8e045340  lw          $a0, 0x5340($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 21312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188a70;
        }
    }
    ctx->pc = 0x188A88u;
label_188a88:
    // 0x188a88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x188a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_188a8c:
    // 0x188a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188a90:
    // 0x188a90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x188a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_188a94:
    // 0x188a94: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x188a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_188a98:
    // 0x188a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188a9c:
    // 0x188a9c: 0x3e00008  jr          $ra
label_188aa0:
    if (ctx->pc == 0x188AA0u) {
        ctx->pc = 0x188AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A9Cu;
        // 0x188aa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AA4u;
        goto label_188aa4;
    }
    ctx->pc = 0x188A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A9Cu;
        // 0x188aa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188AA4u;
label_188aa4:
    // 0x188aa4: 0x0  nop
    ctx->pc = 0x188aa4u;
    // NOP
    ctx->pc = 0x188aa8u;
}
