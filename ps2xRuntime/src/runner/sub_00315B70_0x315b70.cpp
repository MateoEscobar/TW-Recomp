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

// Function: sub_00315B70
// Address: 0x315b70 - 0x315c30
void sub_00315B70_0x315b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315B70_0x315b70");
#endif

    switch (ctx->pc) {
        case 0x315b70u: goto label_315b70;
        case 0x315b74u: goto label_315b74;
        case 0x315b78u: goto label_315b78;
        case 0x315b7cu: goto label_315b7c;
        case 0x315b80u: goto label_315b80;
        case 0x315b84u: goto label_315b84;
        case 0x315b88u: goto label_315b88;
        case 0x315b8cu: goto label_315b8c;
        case 0x315b90u: goto label_315b90;
        case 0x315b94u: goto label_315b94;
        case 0x315b98u: goto label_315b98;
        case 0x315b9cu: goto label_315b9c;
        case 0x315ba0u: goto label_315ba0;
        case 0x315ba4u: goto label_315ba4;
        case 0x315ba8u: goto label_315ba8;
        case 0x315bacu: goto label_315bac;
        case 0x315bb0u: goto label_315bb0;
        case 0x315bb4u: goto label_315bb4;
        case 0x315bb8u: goto label_315bb8;
        case 0x315bbcu: goto label_315bbc;
        case 0x315bc0u: goto label_315bc0;
        case 0x315bc4u: goto label_315bc4;
        case 0x315bc8u: goto label_315bc8;
        case 0x315bccu: goto label_315bcc;
        case 0x315bd0u: goto label_315bd0;
        case 0x315bd4u: goto label_315bd4;
        case 0x315bd8u: goto label_315bd8;
        case 0x315bdcu: goto label_315bdc;
        case 0x315be0u: goto label_315be0;
        case 0x315be4u: goto label_315be4;
        case 0x315be8u: goto label_315be8;
        case 0x315becu: goto label_315bec;
        case 0x315bf0u: goto label_315bf0;
        case 0x315bf4u: goto label_315bf4;
        case 0x315bf8u: goto label_315bf8;
        case 0x315bfcu: goto label_315bfc;
        case 0x315c00u: goto label_315c00;
        case 0x315c04u: goto label_315c04;
        case 0x315c08u: goto label_315c08;
        case 0x315c0cu: goto label_315c0c;
        case 0x315c10u: goto label_315c10;
        case 0x315c14u: goto label_315c14;
        case 0x315c18u: goto label_315c18;
        case 0x315c1cu: goto label_315c1c;
        case 0x315c20u: goto label_315c20;
        case 0x315c24u: goto label_315c24;
        case 0x315c28u: goto label_315c28;
        case 0x315c2cu: goto label_315c2c;
        default: break;
    }

    ctx->pc = 0x315b70u;

label_315b70:
    // 0x315b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x315b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_315b74:
    // 0x315b74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x315b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_315b78:
    // 0x315b78: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x315b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_315b7c:
    // 0x315b7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x315b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_315b80:
    // 0x315b80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x315b80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_315b84:
    // 0x315b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x315b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_315b88:
    // 0x315b88: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x315b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_315b8c:
    // 0x315b8c: 0x2c620017  sltiu       $v0, $v1, 0x17
    ctx->pc = 0x315b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_315b90:
    // 0x315b90: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_315b94:
    if (ctx->pc == 0x315B94u) {
        ctx->pc = 0x315B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B90u;
        // 0x315b94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B98u;
        goto label_315b98;
    }
    ctx->pc = 0x315B90u;
    {
        const bool branch_taken_0x315b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B90u;
        // 0x315b94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b90) {
            ctx->pc = 0x315C38u;
            return;
        }
    }
    ctx->pc = 0x315B98u;
label_315b98:
    // 0x315b98: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x315b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_315b9c:
    // 0x315b9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x315b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_315ba0:
    // 0x315ba0: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x315ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
label_315ba4:
    // 0x315ba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x315ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_315ba8:
    // 0x315ba8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x315ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_315bac:
    // 0x315bac: 0x800008  jr          $a0
label_315bb0:
    if (ctx->pc == 0x315BB0u) {
        ctx->pc = 0x315BB4u;
        goto label_315bb4;
    }
    ctx->pc = 0x315BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x315BB4u: goto label_315bb4;
            case 0x315BC0u: goto label_315bc0;
            case 0x315BCCu: goto label_315bcc;
            case 0x315BDCu: goto label_315bdc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315BACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x315BB4u;
label_315bb4:
    // 0x315bb4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x315bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_315bb8:
    // 0x315bb8: 0x10000017  b           . + 4 + (0x17 << 2)
label_315bbc:
    if (ctx->pc == 0x315BBCu) {
        ctx->pc = 0x315BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BB8u;
        // 0x315bbc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BC0u;
        goto label_315bc0;
    }
    ctx->pc = 0x315BB8u;
    {
        const bool branch_taken_0x315bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BB8u;
        // 0x315bbc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bb8) {
            ctx->pc = 0x315C18u;
            goto label_315c18;
        }
    }
    ctx->pc = 0x315BC0u;
label_315bc0:
    // 0x315bc0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x315bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_315bc4:
    // 0x315bc4: 0x10000014  b           . + 4 + (0x14 << 2)
label_315bc8:
    if (ctx->pc == 0x315BC8u) {
        ctx->pc = 0x315BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BC4u;
        // 0x315bc8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BCCu;
        goto label_315bcc;
    }
    ctx->pc = 0x315BC4u;
    {
        const bool branch_taken_0x315bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BC4u;
        // 0x315bc8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bc4) {
            ctx->pc = 0x315C18u;
            goto label_315c18;
        }
    }
    ctx->pc = 0x315BCCu;
label_315bcc:
    // 0x315bcc: 0xc0c55b0  jal         func_3156C0
label_315bd0:
    if (ctx->pc == 0x315BD0u) {
        ctx->pc = 0x315BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BCCu;
        // 0x315bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BD4u;
        goto label_315bd4;
    }
    ctx->pc = 0x315BCCu;
    SET_GPR_U32(ctx, 31, 0x315BD4u);
    ctx->pc = 0x315BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315BCCu;
    // 0x315bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3156C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3156C0u, 0x315BCCu, 0x315BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315BD4u;
label_315bd4:
    // 0x315bd4: 0x10000019  b           . + 4 + (0x19 << 2)
label_315bd8:
    if (ctx->pc == 0x315BD8u) {
        ctx->pc = 0x315BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BD4u;
        // 0x315bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BDCu;
        goto label_315bdc;
    }
    ctx->pc = 0x315BD4u;
    {
        const bool branch_taken_0x315bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BD4u;
        // 0x315bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bd4) {
            ctx->pc = 0x315C3Cu;
            return;
        }
    }
    ctx->pc = 0x315BDCu;
label_315bdc:
    // 0x315bdc: 0xc05959e  jal         func_165678
label_315be0:
    if (ctx->pc == 0x315BE0u) {
        ctx->pc = 0x315BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BDCu;
        // 0x315be0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BE4u;
        goto label_315be4;
    }
    ctx->pc = 0x315BDCu;
    SET_GPR_U32(ctx, 31, 0x315BE4u);
    ctx->pc = 0x315BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315BDCu;
    // 0x315be0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x315BDCu, 0x315BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315BE4u;
label_315be4:
    // 0x315be4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x315be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315be8:
    // 0x315be8: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_315bec:
    if (ctx->pc == 0x315BECu) {
        ctx->pc = 0x315BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BE8u;
        // 0x315bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BF0u;
        goto label_315bf0;
    }
    ctx->pc = 0x315BE8u;
    {
        const bool branch_taken_0x315be8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BE8u;
        // 0x315bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315be8) {
            ctx->pc = 0x315C3Cu;
            return;
        }
    }
    ctx->pc = 0x315BF0u;
label_315bf0:
    // 0x315bf0: 0xc08a61a  jal         func_229868
label_315bf4:
    if (ctx->pc == 0x315BF4u) {
        ctx->pc = 0x315BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BF0u;
        // 0x315bf4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BF8u;
        goto label_315bf8;
    }
    ctx->pc = 0x315BF0u;
    SET_GPR_U32(ctx, 31, 0x315BF8u);
    ctx->pc = 0x315BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315BF0u;
    // 0x315bf4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x315BF0u, 0x315BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315BF8u;
label_315bf8:
    // 0x315bf8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_315bfc:
    if (ctx->pc == 0x315BFCu) {
        ctx->pc = 0x315BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BF8u;
        // 0x315bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C00u;
        goto label_315c00;
    }
    ctx->pc = 0x315BF8u;
    {
        const bool branch_taken_0x315bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315bf8) {
            ctx->pc = 0x315BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315BF8u;
            // 0x315bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315C3Cu;
            return;
        }
    }
    ctx->pc = 0x315C00u;
label_315c00:
    // 0x315c00: 0x1451000e  bne         $v0, $s1, . + 4 + (0xE << 2)
label_315c04:
    if (ctx->pc == 0x315C04u) {
        ctx->pc = 0x315C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C00u;
        // 0x315c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C08u;
        goto label_315c08;
    }
    ctx->pc = 0x315C00u;
    {
        const bool branch_taken_0x315c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x315C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C00u;
        // 0x315c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c00) {
            ctx->pc = 0x315C3Cu;
            return;
        }
    }
    ctx->pc = 0x315C08u;
label_315c08:
    // 0x315c08: 0xc0c5608  jal         func_315820
label_315c0c:
    if (ctx->pc == 0x315C0Cu) {
        ctx->pc = 0x315C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C08u;
        // 0x315c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C10u;
        goto label_315c10;
    }
    ctx->pc = 0x315C08u;
    SET_GPR_U32(ctx, 31, 0x315C10u);
    ctx->pc = 0x315C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315C08u;
    // 0x315c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315820u, 0x315C08u, 0x315C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315C10u;
label_315c10:
    // 0x315c10: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x315c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_315c14:
    // 0x315c14: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x315c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_315c18:
    // 0x315c18: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x315c18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_315c1c:
    // 0x315c1c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x315c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_315c20:
    // 0x315c20: 0x60f809  jalr        $v1
label_315c24:
    if (ctx->pc == 0x315C24u) {
        ctx->pc = 0x315C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C20u;
        // 0x315c24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C28u;
        goto label_315c28;
    }
    ctx->pc = 0x315C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x315C28u);
        ctx->pc = 0x315C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C20u;
        // 0x315c24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315C20u, 0x315C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315C28u;
label_315c28:
    // 0x315c28: 0x10000004  b           . + 4 + (0x4 << 2)
label_315c2c:
    if (ctx->pc == 0x315C2Cu) {
        ctx->pc = 0x315C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C28u;
        // 0x315c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C30u;
        goto label_fallthrough_0x315c28;
    }
    ctx->pc = 0x315C28u;
    {
        const bool branch_taken_0x315c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C28u;
        // 0x315c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c28) {
            ctx->pc = 0x315C3Cu;
            return;
        }
    }
label_fallthrough_0x315c28:
    ctx->pc = 0x315C30u;
}
