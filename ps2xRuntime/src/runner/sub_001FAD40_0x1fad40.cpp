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

// Function: sub_001FAD40
// Address: 0x1fad40 - 0x1faf18
void sub_001FAD40_0x1fad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAD40_0x1fad40");
#endif

    switch (ctx->pc) {
        case 0x1fad40u: goto label_1fad40;
        case 0x1fad44u: goto label_1fad44;
        case 0x1fad48u: goto label_1fad48;
        case 0x1fad4cu: goto label_1fad4c;
        case 0x1fad50u: goto label_1fad50;
        case 0x1fad54u: goto label_1fad54;
        case 0x1fad58u: goto label_1fad58;
        case 0x1fad5cu: goto label_1fad5c;
        case 0x1fad60u: goto label_1fad60;
        case 0x1fad64u: goto label_1fad64;
        case 0x1fad68u: goto label_1fad68;
        case 0x1fad6cu: goto label_1fad6c;
        case 0x1fad70u: goto label_1fad70;
        case 0x1fad74u: goto label_1fad74;
        case 0x1fad78u: goto label_1fad78;
        case 0x1fad7cu: goto label_1fad7c;
        case 0x1fad80u: goto label_1fad80;
        case 0x1fad84u: goto label_1fad84;
        case 0x1fad88u: goto label_1fad88;
        case 0x1fad8cu: goto label_1fad8c;
        case 0x1fad90u: goto label_1fad90;
        case 0x1fad94u: goto label_1fad94;
        case 0x1fad98u: goto label_1fad98;
        case 0x1fad9cu: goto label_1fad9c;
        case 0x1fada0u: goto label_1fada0;
        case 0x1fada4u: goto label_1fada4;
        case 0x1fada8u: goto label_1fada8;
        case 0x1fadacu: goto label_1fadac;
        case 0x1fadb0u: goto label_1fadb0;
        case 0x1fadb4u: goto label_1fadb4;
        case 0x1fadb8u: goto label_1fadb8;
        case 0x1fadbcu: goto label_1fadbc;
        case 0x1fadc0u: goto label_1fadc0;
        case 0x1fadc4u: goto label_1fadc4;
        case 0x1fadc8u: goto label_1fadc8;
        case 0x1fadccu: goto label_1fadcc;
        case 0x1fadd0u: goto label_1fadd0;
        case 0x1fadd4u: goto label_1fadd4;
        case 0x1fadd8u: goto label_1fadd8;
        case 0x1faddcu: goto label_1faddc;
        case 0x1fade0u: goto label_1fade0;
        case 0x1fade4u: goto label_1fade4;
        case 0x1fade8u: goto label_1fade8;
        case 0x1fadecu: goto label_1fadec;
        case 0x1fadf0u: goto label_1fadf0;
        case 0x1fadf4u: goto label_1fadf4;
        case 0x1fadf8u: goto label_1fadf8;
        case 0x1fadfcu: goto label_1fadfc;
        case 0x1fae00u: goto label_1fae00;
        case 0x1fae04u: goto label_1fae04;
        case 0x1fae08u: goto label_1fae08;
        case 0x1fae0cu: goto label_1fae0c;
        case 0x1fae10u: goto label_1fae10;
        case 0x1fae14u: goto label_1fae14;
        case 0x1fae18u: goto label_1fae18;
        case 0x1fae1cu: goto label_1fae1c;
        case 0x1fae20u: goto label_1fae20;
        case 0x1fae24u: goto label_1fae24;
        case 0x1fae28u: goto label_1fae28;
        case 0x1fae2cu: goto label_1fae2c;
        case 0x1fae30u: goto label_1fae30;
        case 0x1fae34u: goto label_1fae34;
        case 0x1fae38u: goto label_1fae38;
        case 0x1fae3cu: goto label_1fae3c;
        case 0x1fae40u: goto label_1fae40;
        case 0x1fae44u: goto label_1fae44;
        case 0x1fae48u: goto label_1fae48;
        case 0x1fae4cu: goto label_1fae4c;
        case 0x1fae50u: goto label_1fae50;
        case 0x1fae54u: goto label_1fae54;
        case 0x1fae58u: goto label_1fae58;
        case 0x1fae5cu: goto label_1fae5c;
        case 0x1fae60u: goto label_1fae60;
        case 0x1fae64u: goto label_1fae64;
        case 0x1fae68u: goto label_1fae68;
        case 0x1fae6cu: goto label_1fae6c;
        case 0x1fae70u: goto label_1fae70;
        case 0x1fae74u: goto label_1fae74;
        case 0x1fae78u: goto label_1fae78;
        case 0x1fae7cu: goto label_1fae7c;
        case 0x1fae80u: goto label_1fae80;
        case 0x1fae84u: goto label_1fae84;
        case 0x1fae88u: goto label_1fae88;
        case 0x1fae8cu: goto label_1fae8c;
        case 0x1fae90u: goto label_1fae90;
        case 0x1fae94u: goto label_1fae94;
        case 0x1fae98u: goto label_1fae98;
        case 0x1fae9cu: goto label_1fae9c;
        case 0x1faea0u: goto label_1faea0;
        case 0x1faea4u: goto label_1faea4;
        case 0x1faea8u: goto label_1faea8;
        case 0x1faeacu: goto label_1faeac;
        case 0x1faeb0u: goto label_1faeb0;
        case 0x1faeb4u: goto label_1faeb4;
        case 0x1faeb8u: goto label_1faeb8;
        case 0x1faebcu: goto label_1faebc;
        case 0x1faec0u: goto label_1faec0;
        case 0x1faec4u: goto label_1faec4;
        case 0x1faec8u: goto label_1faec8;
        case 0x1faeccu: goto label_1faecc;
        case 0x1faed0u: goto label_1faed0;
        case 0x1faed4u: goto label_1faed4;
        case 0x1faed8u: goto label_1faed8;
        case 0x1faedcu: goto label_1faedc;
        case 0x1faee0u: goto label_1faee0;
        case 0x1faee4u: goto label_1faee4;
        case 0x1faee8u: goto label_1faee8;
        case 0x1faeecu: goto label_1faeec;
        case 0x1faef0u: goto label_1faef0;
        case 0x1faef4u: goto label_1faef4;
        case 0x1faef8u: goto label_1faef8;
        case 0x1faefcu: goto label_1faefc;
        case 0x1faf00u: goto label_1faf00;
        case 0x1faf04u: goto label_1faf04;
        case 0x1faf08u: goto label_1faf08;
        case 0x1faf0cu: goto label_1faf0c;
        case 0x1faf10u: goto label_1faf10;
        case 0x1faf14u: goto label_1faf14;
        default: break;
    }

    ctx->pc = 0x1fad40u;

label_1fad40:
    // 0x1fad40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fad44:
    // 0x1fad44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fad44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fad48:
    // 0x1fad48: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fad48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1fad4c:
    // 0x1fad4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fad4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fad50:
    // 0x1fad50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fad50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1fad54:
    // 0x1fad54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fad58:
    // 0x1fad58: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1fad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1fad5c:
    // 0x1fad5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fad60:
    if (ctx->pc == 0x1FAD60u) {
        ctx->pc = 0x1FAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD5Cu;
        // 0x1fad60: 0x3c030063  lui         $v1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD64u;
        goto label_1fad64;
    }
    ctx->pc = 0x1FAD5Cu;
    {
        const bool branch_taken_0x1fad5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD5Cu;
        // 0x1fad60: 0x3c030063  lui         $v1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad5c) {
            ctx->pc = 0x1FAD6Cu;
            goto label_1fad6c;
        }
    }
    ctx->pc = 0x1FAD64u;
label_1fad64:
    // 0x1fad64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fad68:
    // 0x1fad68: 0xac62083c  sw          $v0, 0x83C($v1)
    ctx->pc = 0x1fad68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2108), GPR_U32(ctx, 2));
label_1fad6c:
    // 0x1fad6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fad70:
    // 0x1fad70: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1fad70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1fad74:
    // 0x1fad74: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1fad74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1fad78:
    // 0x1fad78: 0x40f809  jalr        $v0
label_1fad7c:
    if (ctx->pc == 0x1FAD7Cu) {
        ctx->pc = 0x1FAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD78u;
        // 0x1fad7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD80u;
        goto label_1fad80;
    }
    ctx->pc = 0x1FAD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FAD80u);
        ctx->pc = 0x1FAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD78u;
        // 0x1fad7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAD78u, 0x1FAD80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAD80u;
label_1fad80:
    // 0x1fad80: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_1fad84:
    if (ctx->pc == 0x1FAD84u) {
        ctx->pc = 0x1FAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD80u;
        // 0x1fad84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD88u;
        goto label_1fad88;
    }
    ctx->pc = 0x1FAD80u;
    {
        const bool branch_taken_0x1fad80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD80u;
        // 0x1fad84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad80) {
            ctx->pc = 0x1FAF00u;
            goto label_1faf00;
        }
    }
    ctx->pc = 0x1FAD88u;
label_1fad88:
    // 0x1fad88: 0x922300e4  lbu         $v1, 0xE4($s1)
    ctx->pc = 0x1fad88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
label_1fad8c:
    // 0x1fad8c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1fad90:
    if (ctx->pc == 0x1FAD90u) {
        ctx->pc = 0x1FAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD8Cu;
        // 0x1fad90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD94u;
        goto label_1fad94;
    }
    ctx->pc = 0x1FAD8Cu;
    {
        const bool branch_taken_0x1fad8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD8Cu;
        // 0x1fad90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad8c) {
            ctx->pc = 0x1FADA4u;
            goto label_1fada4;
        }
    }
    ctx->pc = 0x1FAD94u;
label_1fad94:
    // 0x1fad94: 0xc07e85c  jal         func_1FA170
label_1fad98:
    if (ctx->pc == 0x1FAD98u) {
        ctx->pc = 0x1FAD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD94u;
        // 0x1fad98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD9Cu;
        goto label_1fad9c;
    }
    ctx->pc = 0x1FAD94u;
    SET_GPR_U32(ctx, 31, 0x1FAD9Cu);
    ctx->pc = 0x1FAD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAD94u;
    // 0x1fad98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA170u, 0x1FAD94u, 0x1FAD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD9Cu;
label_1fad9c:
    // 0x1fad9c: 0x10000023  b           . + 4 + (0x23 << 2)
label_1fada0:
    if (ctx->pc == 0x1FADA0u) {
        ctx->pc = 0x1FADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD9Cu;
        // 0x1fada0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FADA4u;
        goto label_1fada4;
    }
    ctx->pc = 0x1FAD9Cu;
    {
        const bool branch_taken_0x1fad9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD9Cu;
        // 0x1fada0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad9c) {
            ctx->pc = 0x1FAE2Cu;
            goto label_1fae2c;
        }
    }
    ctx->pc = 0x1FADA4u;
label_1fada4:
    // 0x1fada4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1fada8:
    if (ctx->pc == 0x1FADA8u) {
        ctx->pc = 0x1FADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADA4u;
        // 0x1fada8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FADACu;
        goto label_1fadac;
    }
    ctx->pc = 0x1FADA4u;
    {
        const bool branch_taken_0x1fada4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADA4u;
        // 0x1fada8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fada4) {
            ctx->pc = 0x1FADBCu;
            goto label_1fadbc;
        }
    }
    ctx->pc = 0x1FADACu;
label_1fadac:
    // 0x1fadac: 0xc07e9d0  jal         func_1FA740
label_1fadb0:
    if (ctx->pc == 0x1FADB0u) {
        ctx->pc = 0x1FADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADACu;
        // 0x1fadb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FADB4u;
        goto label_1fadb4;
    }
    ctx->pc = 0x1FADACu;
    SET_GPR_U32(ctx, 31, 0x1FADB4u);
    ctx->pc = 0x1FADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FADACu;
    // 0x1fadb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA740u, 0x1FADACu, 0x1FADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FADB4u;
label_1fadb4:
    // 0x1fadb4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1fadb8:
    if (ctx->pc == 0x1FADB8u) {
        ctx->pc = 0x1FADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADB4u;
        // 0x1fadb8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FADBCu;
        goto label_1fadbc;
    }
    ctx->pc = 0x1FADB4u;
    {
        const bool branch_taken_0x1fadb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADB4u;
        // 0x1fadb8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fadb4) {
            ctx->pc = 0x1FAE2Cu;
            goto label_1fae2c;
        }
    }
    ctx->pc = 0x1FADBCu;
label_1fadbc:
    // 0x1fadbc: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1fadc0:
    if (ctx->pc == 0x1FADC0u) {
        ctx->pc = 0x1FADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADBCu;
        // 0x1fadc0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FADC4u;
        goto label_1fadc4;
    }
    ctx->pc = 0x1FADBCu;
    {
        const bool branch_taken_0x1fadbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADBCu;
        // 0x1fadc0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fadbc) {
            ctx->pc = 0x1FAE18u;
            goto label_1fae18;
        }
    }
    ctx->pc = 0x1FADC4u;
label_1fadc4:
    // 0x1fadc4: 0xc043d5e  jal         func_10F578
label_1fadc8:
    if (ctx->pc == 0x1FADC8u) {
        ctx->pc = 0x1FADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADC4u;
        // 0x1fadc8: 0x262400f8  addiu       $a0, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FADCCu;
        goto label_1fadcc;
    }
    ctx->pc = 0x1FADC4u;
    SET_GPR_U32(ctx, 31, 0x1FADCCu);
    ctx->pc = 0x1FADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FADC4u;
    // 0x1fadc8: 0x262400f8  addiu       $a0, $s1, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x1FADC4u, 0x1FADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FADCCu;
label_1fadcc:
    // 0x1fadcc: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_1fadd0:
    if (ctx->pc == 0x1FADD0u) {
        ctx->pc = 0x1FADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADCCu;
        // 0x1fadd0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FADD4u;
        goto label_1fadd4;
    }
    ctx->pc = 0x1FADCCu;
    {
        const bool branch_taken_0x1fadcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fadcc) {
            ctx->pc = 0x1FADD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FADCCu;
            // 0x1fadd0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAE2Cu;
            goto label_1fae2c;
        }
    }
    ctx->pc = 0x1FADD4u;
label_1fadd4:
    // 0x1fadd4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1fadd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1fadd8:
    // 0x1fadd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fadd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1faddc:
    // 0x1faddc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1faddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fade0:
    // 0x1fade0: 0xc062c5a  jal         func_18B168
label_1fade4:
    if (ctx->pc == 0x1FADE4u) {
        ctx->pc = 0x1FADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADE0u;
        // 0x1fade4: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FADE8u;
        goto label_1fade8;
    }
    ctx->pc = 0x1FADE0u;
    SET_GPR_U32(ctx, 31, 0x1FADE8u);
    ctx->pc = 0x1FADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FADE0u;
    // 0x1fade4: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x1FADE0u, 0x1FADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FADE8u;
label_1fade8:
    // 0x1fade8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fade8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1fadec:
    // 0x1fadec: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1fadecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1fadf0:
    // 0x1fadf0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fadf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fadf4:
    // 0x1fadf4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fadf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fadf8:
    // 0x1fadf8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1fadf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fadfc:
    // 0x1fadfc: 0x40f809  jalr        $v0
label_1fae00:
    if (ctx->pc == 0x1FAE00u) {
        ctx->pc = 0x1FAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADFCu;
        // 0x1fae00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE04u;
        goto label_1fae04;
    }
    ctx->pc = 0x1FADFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FAE04u);
        ctx->pc = 0x1FAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADFCu;
        // 0x1fae00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FADFCu, 0x1FAE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAE04u;
label_1fae04:
    // 0x1fae04: 0x922300e4  lbu         $v1, 0xE4($s1)
    ctx->pc = 0x1fae04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
label_1fae08:
    // 0x1fae08: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x1fae08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_1fae0c:
    // 0x1fae0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fae10:
    // 0x1fae10: 0x10000005  b           . + 4 + (0x5 << 2)
label_1fae14:
    if (ctx->pc == 0x1FAE14u) {
        ctx->pc = 0x1FAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE10u;
        // 0x1fae14: 0xa22300e4  sb          $v1, 0xE4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 228), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE18u;
        goto label_1fae18;
    }
    ctx->pc = 0x1FAE10u;
    {
        const bool branch_taken_0x1fae10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE10u;
        // 0x1fae14: 0xa22300e4  sb          $v1, 0xE4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 228), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae10) {
            ctx->pc = 0x1FAE28u;
            goto label_1fae28;
        }
    }
    ctx->pc = 0x1FAE18u;
label_1fae18:
    // 0x1fae18: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_1fae1c:
    if (ctx->pc == 0x1FAE1Cu) {
        ctx->pc = 0x1FAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE18u;
        // 0x1fae1c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE20u;
        goto label_1fae20;
    }
    ctx->pc = 0x1FAE18u;
    {
        const bool branch_taken_0x1fae18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fae18) {
            ctx->pc = 0x1FAE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAE18u;
            // 0x1fae1c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAE2Cu;
            goto label_1fae2c;
        }
    }
    ctx->pc = 0x1FAE20u;
label_1fae20:
    // 0x1fae20: 0xc07ea6c  jal         func_1FA9B0
label_1fae24:
    if (ctx->pc == 0x1FAE24u) {
        ctx->pc = 0x1FAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE20u;
        // 0x1fae24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE28u;
        goto label_1fae28;
    }
    ctx->pc = 0x1FAE20u;
    SET_GPR_U32(ctx, 31, 0x1FAE28u);
    ctx->pc = 0x1FAE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE20u;
    // 0x1fae24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA9B0u, 0x1FAE20u, 0x1FAE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAE28u;
label_1fae28:
    // 0x1fae28: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1fae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1fae2c:
    // 0x1fae2c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_1fae30:
    if (ctx->pc == 0x1FAE30u) {
        ctx->pc = 0x1FAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE2Cu;
        // 0x1fae30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE34u;
        goto label_1fae34;
    }
    ctx->pc = 0x1FAE2Cu;
    {
        const bool branch_taken_0x1fae2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE2Cu;
        // 0x1fae30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae2c) {
            ctx->pc = 0x1FAF04u;
            goto label_1faf04;
        }
    }
    ctx->pc = 0x1FAE34u;
label_1fae34:
    // 0x1fae34: 0x922200e5  lbu         $v0, 0xE5($s1)
    ctx->pc = 0x1fae34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1fae38:
    // 0x1fae38: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1fae3c:
    if (ctx->pc == 0x1FAE3Cu) {
        ctx->pc = 0x1FAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE38u;
        // 0x1fae3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE40u;
        goto label_1fae40;
    }
    ctx->pc = 0x1FAE38u;
    {
        const bool branch_taken_0x1fae38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE38u;
        // 0x1fae3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae38) {
            ctx->pc = 0x1FAE7Cu;
            goto label_1fae7c;
        }
    }
    ctx->pc = 0x1FAE40u;
label_1fae40:
    // 0x1fae40: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x1fae40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_1fae44:
    // 0x1fae44: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1fae44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1fae48:
    // 0x1fae48: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1fae4c:
    // 0x1fae4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fae50:
    // 0x1fae50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fae50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fae54:
    // 0x1fae54: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fae54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fae58:
    // 0x1fae58: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1fae58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fae5c:
    // 0x1fae5c: 0x40f809  jalr        $v0
label_1fae60:
    if (ctx->pc == 0x1FAE60u) {
        ctx->pc = 0x1FAE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE5Cu;
        // 0x1fae60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE64u;
        goto label_1fae64;
    }
    ctx->pc = 0x1FAE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FAE64u);
        ctx->pc = 0x1FAE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE5Cu;
        // 0x1fae60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE5Cu, 0x1FAE64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAE64u;
label_1fae64:
    // 0x1fae64: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fae68:
    // 0x1fae68: 0x922200e5  lbu         $v0, 0xE5($s1)
    ctx->pc = 0x1fae68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1fae6c:
    // 0x1fae6c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fae6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1fae70:
    // 0x1fae70: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fae70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fae74:
    // 0x1fae74: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1fae78:
    if (ctx->pc == 0x1FAE78u) {
        ctx->pc = 0x1FAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE74u;
        // 0x1fae78: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE7Cu;
        goto label_1fae7c;
    }
    ctx->pc = 0x1FAE74u;
    {
        const bool branch_taken_0x1fae74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE74u;
        // 0x1fae78: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae74) {
            ctx->pc = 0x1FAE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fae48;
        }
    }
    ctx->pc = 0x1FAE7Cu;
label_1fae7c:
    // 0x1fae7c: 0x922300e5  lbu         $v1, 0xE5($s1)
    ctx->pc = 0x1fae7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1fae80:
    // 0x1fae80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fae84:
    // 0x1fae84: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fae84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fae88:
    // 0x1fae88: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1fae8c:
    if (ctx->pc == 0x1FAE8Cu) {
        ctx->pc = 0x1FAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE88u;
        // 0x1fae8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE90u;
        goto label_1fae90;
    }
    ctx->pc = 0x1FAE88u;
    {
        const bool branch_taken_0x1fae88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE88u;
        // 0x1fae8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae88) {
            ctx->pc = 0x1FAED0u;
            goto label_1faed0;
        }
    }
    ctx->pc = 0x1FAE90u;
label_1fae90:
    // 0x1fae90: 0x263200b8  addiu       $s2, $s1, 0xB8
    ctx->pc = 0x1fae90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
label_1fae94:
    // 0x1fae94: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1fae94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1fae98:
    // 0x1fae98: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1fae9c:
    // 0x1fae9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1faea0:
    // 0x1faea0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1faea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1faea4:
    // 0x1faea4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1faea4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1faea8:
    // 0x1faea8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1faea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1faeac:
    // 0x1faeac: 0x40f809  jalr        $v0
label_1faeb0:
    if (ctx->pc == 0x1FAEB0u) {
        ctx->pc = 0x1FAEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEACu;
        // 0x1faeb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAEB4u;
        goto label_1faeb4;
    }
    ctx->pc = 0x1FAEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FAEB4u);
        ctx->pc = 0x1FAEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEACu;
        // 0x1faeb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAEACu, 0x1FAEB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAEB4u;
label_1faeb4:
    // 0x1faeb4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1faeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1faeb8:
    // 0x1faeb8: 0x922400e5  lbu         $a0, 0xE5($s1)
    ctx->pc = 0x1faeb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1faebc:
    // 0x1faebc: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1faebcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1faec0:
    // 0x1faec0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1faec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1faec4:
    // 0x1faec4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1faec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1faec8:
    // 0x1faec8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1faecc:
    if (ctx->pc == 0x1FAECCu) {
        ctx->pc = 0x1FAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEC8u;
        // 0x1faecc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAED0u;
        goto label_1faed0;
    }
    ctx->pc = 0x1FAEC8u;
    {
        const bool branch_taken_0x1faec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEC8u;
        // 0x1faecc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faec8) {
            ctx->pc = 0x1FAE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fae98;
        }
    }
    ctx->pc = 0x1FAED0u;
label_1faed0:
    // 0x1faed0: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x1faed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_1faed4:
    // 0x1faed4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1faed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1faed8:
    // 0x1faed8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1faed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1faedc:
    // 0x1faedc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1faedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1faee0:
    // 0x1faee0: 0x60f809  jalr        $v1
label_1faee4:
    if (ctx->pc == 0x1FAEE4u) {
        ctx->pc = 0x1FAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEE0u;
        // 0x1faee4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAEE8u;
        goto label_1faee8;
    }
    ctx->pc = 0x1FAEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FAEE8u);
        ctx->pc = 0x1FAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEE0u;
        // 0x1faee4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAEE0u, 0x1FAEE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAEE8u;
label_1faee8:
    // 0x1faee8: 0x8e2500e0  lw          $a1, 0xE0($s1)
    ctx->pc = 0x1faee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_1faeec:
    // 0x1faeec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1faeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1faef0:
    // 0x1faef0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1faef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1faef4:
    // 0x1faef4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1faef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1faef8:
    // 0x1faef8: 0x60f809  jalr        $v1
label_1faefc:
    if (ctx->pc == 0x1FAEFCu) {
        ctx->pc = 0x1FAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEF8u;
        // 0x1faefc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAF00u;
        goto label_1faf00;
    }
    ctx->pc = 0x1FAEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FAF00u);
        ctx->pc = 0x1FAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEF8u;
        // 0x1faefc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAEF8u, 0x1FAF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAF00u;
label_1faf00:
    // 0x1faf00: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1faf00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1faf04:
    // 0x1faf04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1faf04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1faf08:
    // 0x1faf08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1faf08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1faf0c:
    // 0x1faf0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1faf0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1faf10:
    // 0x1faf10: 0x3e00008  jr          $ra
label_1faf14:
    if (ctx->pc == 0x1FAF14u) {
        ctx->pc = 0x1FAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF10u;
        // 0x1faf14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAF18u;
        goto label_fallthrough_0x1faf10;
    }
    ctx->pc = 0x1FAF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF10u;
        // 0x1faf14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1faf10:
    ctx->pc = 0x1FAF18u;
}
