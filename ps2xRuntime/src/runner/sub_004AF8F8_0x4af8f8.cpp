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

// Function: sub_004AF8F8
// Address: 0x4af8f8 - 0x4af9d8
void sub_004AF8F8_0x4af8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF8F8_0x4af8f8");
#endif

    switch (ctx->pc) {
        case 0x4af8f8u: goto label_4af8f8;
        case 0x4af8fcu: goto label_4af8fc;
        case 0x4af900u: goto label_4af900;
        case 0x4af904u: goto label_4af904;
        case 0x4af908u: goto label_4af908;
        case 0x4af90cu: goto label_4af90c;
        case 0x4af910u: goto label_4af910;
        case 0x4af914u: goto label_4af914;
        case 0x4af918u: goto label_4af918;
        case 0x4af91cu: goto label_4af91c;
        case 0x4af920u: goto label_4af920;
        case 0x4af924u: goto label_4af924;
        case 0x4af928u: goto label_4af928;
        case 0x4af92cu: goto label_4af92c;
        case 0x4af930u: goto label_4af930;
        case 0x4af934u: goto label_4af934;
        case 0x4af938u: goto label_4af938;
        case 0x4af93cu: goto label_4af93c;
        case 0x4af940u: goto label_4af940;
        case 0x4af944u: goto label_4af944;
        case 0x4af948u: goto label_4af948;
        case 0x4af94cu: goto label_4af94c;
        case 0x4af950u: goto label_4af950;
        case 0x4af954u: goto label_4af954;
        case 0x4af958u: goto label_4af958;
        case 0x4af95cu: goto label_4af95c;
        case 0x4af960u: goto label_4af960;
        case 0x4af964u: goto label_4af964;
        case 0x4af968u: goto label_4af968;
        case 0x4af96cu: goto label_4af96c;
        case 0x4af970u: goto label_4af970;
        case 0x4af974u: goto label_4af974;
        case 0x4af978u: goto label_4af978;
        case 0x4af97cu: goto label_4af97c;
        case 0x4af980u: goto label_4af980;
        case 0x4af984u: goto label_4af984;
        case 0x4af988u: goto label_4af988;
        case 0x4af98cu: goto label_4af98c;
        case 0x4af990u: goto label_4af990;
        case 0x4af994u: goto label_4af994;
        case 0x4af998u: goto label_4af998;
        case 0x4af99cu: goto label_4af99c;
        case 0x4af9a0u: goto label_4af9a0;
        case 0x4af9a4u: goto label_4af9a4;
        case 0x4af9a8u: goto label_4af9a8;
        case 0x4af9acu: goto label_4af9ac;
        case 0x4af9b0u: goto label_4af9b0;
        case 0x4af9b4u: goto label_4af9b4;
        case 0x4af9b8u: goto label_4af9b8;
        case 0x4af9bcu: goto label_4af9bc;
        case 0x4af9c0u: goto label_4af9c0;
        case 0x4af9c4u: goto label_4af9c4;
        case 0x4af9c8u: goto label_4af9c8;
        case 0x4af9ccu: goto label_4af9cc;
        case 0x4af9d0u: goto label_4af9d0;
        case 0x4af9d4u: goto label_4af9d4;
        default: break;
    }

    ctx->pc = 0x4af8f8u;

label_4af8f8:
    // 0x4af8f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4af8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4af8fc:
    // 0x4af8fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4af8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4af900:
    // 0x4af900: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4af900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4af904:
    // 0x4af904: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4af904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4af908:
    // 0x4af908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4af908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4af90c:
    // 0x4af90c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4af90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4af910:
    // 0x4af910: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4af910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4af914:
    // 0x4af914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4af914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4af918:
    // 0x4af918: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4af918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4af91c:
    // 0x4af91c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4af91cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4af920:
    // 0x4af920: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4af920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4af924:
    // 0x4af924: 0x40f809  jalr        $v0
label_4af928:
    if (ctx->pc == 0x4AF928u) {
        ctx->pc = 0x4AF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF924u;
        // 0x4af928: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AF92Cu;
        goto label_4af92c;
    }
    ctx->pc = 0x4AF924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4AF92Cu);
        ctx->pc = 0x4AF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF924u;
        // 0x4af928: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF924u, 0x4AF92Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AF92Cu;
label_4af92c:
    // 0x4af92c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4af92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4af930:
    // 0x4af930: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
label_4af934:
    if (ctx->pc == 0x4AF934u) {
        ctx->pc = 0x4AF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF930u;
        // 0x4af934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AF938u;
        goto label_4af938;
    }
    ctx->pc = 0x4AF930u;
    {
        const bool branch_taken_0x4af930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4AF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF930u;
        // 0x4af934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af930) {
            ctx->pc = 0x4AF9BCu;
            goto label_4af9bc;
        }
    }
    ctx->pc = 0x4AF938u;
label_4af938:
    // 0x4af938: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_4af93c:
    if (ctx->pc == 0x4AF93Cu) {
        ctx->pc = 0x4AF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF938u;
        // 0x4af93c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AF940u;
        goto label_4af940;
    }
    ctx->pc = 0x4AF938u;
    {
        const bool branch_taken_0x4af938 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF938u;
        // 0x4af93c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af938) {
            ctx->pc = 0x4AF948u;
            goto label_4af948;
        }
    }
    ctx->pc = 0x4AF940u;
label_4af940:
    // 0x4af940: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_4af944:
    if (ctx->pc == 0x4AF944u) {
        ctx->pc = 0x4AF948u;
        goto label_4af948;
    }
    ctx->pc = 0x4AF940u;
    {
        const bool branch_taken_0x4af940 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4af940) {
            ctx->pc = 0x4AF96Cu;
            goto label_4af96c;
        }
    }
    ctx->pc = 0x4AF948u;
label_4af948:
    // 0x4af948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4af948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4af94c:
    // 0x4af94c: 0x2605004b  addiu       $a1, $s0, 0x4B
    ctx->pc = 0x4af94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 75));
label_4af950:
    // 0x4af950: 0x2606004c  addiu       $a2, $s0, 0x4C
    ctx->pc = 0x4af950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_4af954:
    // 0x4af954: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4af954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_4af958:
    // 0x4af958: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4af958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af95c:
    // 0x4af95c: 0xc12be8a  jal         func_4AFA28
label_4af960:
    if (ctx->pc == 0x4AF960u) {
        ctx->pc = 0x4AF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF95Cu;
        // 0x4af960: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AF964u;
        goto label_4af964;
    }
    ctx->pc = 0x4AF95Cu;
    SET_GPR_U32(ctx, 31, 0x4AF964u);
    ctx->pc = 0x4AF960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF95Cu;
    // 0x4af960: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFA28u, 0x4AF95Cu, 0x4AF964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF964u;
label_4af964:
    // 0x4af964: 0x1000000a  b           . + 4 + (0xA << 2)
label_4af968:
    if (ctx->pc == 0x4AF968u) {
        ctx->pc = 0x4AF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF964u;
        // 0x4af968: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AF96Cu;
        goto label_4af96c;
    }
    ctx->pc = 0x4AF964u;
    {
        const bool branch_taken_0x4af964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF964u;
        // 0x4af968: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af964) {
            ctx->pc = 0x4AF990u;
            goto label_4af990;
        }
    }
    ctx->pc = 0x4AF96Cu;
label_4af96c:
    // 0x4af96c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x4af96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_4af970:
    // 0x4af970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4af970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4af974:
    // 0x4af974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4af974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4af978:
    // 0x4af978: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4af978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4af97c:
    // 0x4af97c: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x4af97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_4af980:
    // 0x4af980: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4af980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4af984:
    // 0x4af984: 0xc12be8a  jal         func_4AFA28
label_4af988:
    if (ctx->pc == 0x4AF988u) {
        ctx->pc = 0x4AF988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF984u;
        // 0x4af988: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AF98Cu;
        goto label_4af98c;
    }
    ctx->pc = 0x4AF984u;
    SET_GPR_U32(ctx, 31, 0x4AF98Cu);
    ctx->pc = 0x4AF988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF984u;
    // 0x4af988: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFA28u, 0x4AF984u, 0x4AF98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF98Cu;
label_4af98c:
    // 0x4af98c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4af98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4af990:
    // 0x4af990: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4af990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_4af994:
    // 0x4af994: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4af994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_4af998:
    // 0x4af998: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4af998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_4af99c:
    // 0x4af99c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4af9a0:
    if (ctx->pc == 0x4AF9A0u) {
        ctx->pc = 0x4AF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF99Cu;
        // 0x4af9a0: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AF9A4u;
        goto label_4af9a4;
    }
    ctx->pc = 0x4AF99Cu;
    {
        const bool branch_taken_0x4af99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF99Cu;
        // 0x4af9a0: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af99c) {
            ctx->pc = 0x4AF9ACu;
            goto label_4af9ac;
        }
    }
    ctx->pc = 0x4AF9A4u;
label_4af9a4:
    // 0x4af9a4: 0xc12c2a0  jal         func_4B0A80
label_4af9a8:
    if (ctx->pc == 0x4AF9A8u) {
        ctx->pc = 0x4AF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF9A4u;
        // 0x4af9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AF9ACu;
        goto label_4af9ac;
    }
    ctx->pc = 0x4AF9A4u;
    SET_GPR_U32(ctx, 31, 0x4AF9ACu);
    ctx->pc = 0x4AF9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF9A4u;
    // 0x4af9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0A80u, 0x4AF9A4u, 0x4AF9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF9ACu;
label_4af9ac:
    // 0x4af9ac: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4af9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4af9b0:
    // 0x4af9b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4af9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4af9b4:
    // 0x4af9b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4af9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4af9b8:
    // 0x4af9b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4af9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4af9bc:
    // 0x4af9bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4af9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4af9c0:
    // 0x4af9c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4af9c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4af9c4:
    // 0x4af9c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4af9c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4af9c8:
    // 0x4af9c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4af9c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4af9cc:
    // 0x4af9cc: 0x3e00008  jr          $ra
label_4af9d0:
    if (ctx->pc == 0x4AF9D0u) {
        ctx->pc = 0x4AF9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF9CCu;
        // 0x4af9d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AF9D4u;
        goto label_4af9d4;
    }
    ctx->pc = 0x4AF9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF9CCu;
        // 0x4af9d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF9D4u;
label_4af9d4:
    // 0x4af9d4: 0x0  nop
    ctx->pc = 0x4af9d4u;
    // NOP
    ctx->pc = 0x4af9d8u;
}
