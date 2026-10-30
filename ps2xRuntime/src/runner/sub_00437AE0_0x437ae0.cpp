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

// Function: sub_00437AE0
// Address: 0x437ae0 - 0x4389e8
void sub_00437AE0_0x437ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00437AE0_0x437ae0");
#endif

    switch (ctx->pc) {
        case 0x437b30u: goto label_437b30;
        case 0x437b38u: goto label_437b38;
        case 0x437b58u: goto label_437b58;
        case 0x437ba8u: goto label_437ba8;
        case 0x437bd0u: goto label_437bd0;
        case 0x437c0cu: goto label_437c0c;
        case 0x437c54u: goto label_437c54;
        case 0x437c58u: goto label_437c58;
        case 0x437c5cu: goto label_437c5c;
        case 0x437d18u: goto label_437d18;
        case 0x437d60u: goto label_437d60;
        case 0x437f24u: goto label_437f24;
        case 0x437f48u: goto label_437f48;
        case 0x438070u: goto label_438070;
        case 0x4380c0u: goto label_4380c0;
        case 0x4380c8u: goto label_4380c8;
        case 0x4380e4u: goto label_4380e4;
        case 0x438118u: goto label_438118;
        case 0x43815cu: goto label_43815c;
        case 0x43818cu: goto label_43818c;
        case 0x438230u: goto label_438230;
        case 0x438298u: goto label_438298;
        case 0x4382d4u: goto label_4382d4;
        case 0x438310u: goto label_438310;
        case 0x438338u: goto label_438338;
        case 0x438374u: goto label_438374;
        case 0x4383e8u: goto label_4383e8;
        case 0x43845cu: goto label_43845c;
        case 0x43849cu: goto label_43849c;
        case 0x4384d0u: goto label_4384d0;
        case 0x438538u: goto label_438538;
        case 0x43856cu: goto label_43856c;
        case 0x4385a8u: goto label_4385a8;
        case 0x4385d0u: goto label_4385d0;
        case 0x43860cu: goto label_43860c;
        case 0x438630u: goto label_438630;
        case 0x438698u: goto label_438698;
        case 0x4386ccu: goto label_4386cc;
        case 0x438708u: goto label_438708;
        case 0x438730u: goto label_438730;
        case 0x43876cu: goto label_43876c;
        case 0x438794u: goto label_438794;
        case 0x4387c0u: goto label_4387c0;
        case 0x438800u: goto label_438800;
        case 0x438830u: goto label_438830;
        case 0x438898u: goto label_438898;
        case 0x4388ccu: goto label_4388cc;
        case 0x438908u: goto label_438908;
        case 0x438930u: goto label_438930;
        case 0x43896cu: goto label_43896c;
        case 0x4389b0u: goto label_4389b0;
        default: break;
    }

    ctx->pc = 0x437ae0u;

    // 0x437ae0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x437ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x437ae4: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x437ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x437ae8: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x437ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x437aec: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x437aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x437af0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x437af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x437af4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x437af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437af8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x437af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x437afc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x437afcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437b00: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x437b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x437b04: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x437b04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437b08: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x437b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x437b0c: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x437b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x437b10: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x437b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x437b14: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x437b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x437b18: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x437b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x437b1c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x437b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x437b20: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x437b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x437b24: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x437b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x437b28: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x437b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x437b2c: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x437b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_437b30:
    // 0x437b30: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x437b30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437b34: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x437b34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_437b38:
    // 0x437b38: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x437b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x437b3c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x437b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x437b40: 0x8ca469ec  lw          $a0, 0x69EC($a1)
    ctx->pc = 0x437b40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5169ECu));
    // 0x437b44: 0x8cc771e8  lw          $a3, 0x71E8($a2)
    ctx->pc = 0x437b44u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5171E8u));
    // 0x437b48: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x437b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x437b4c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x437b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437b50: 0xc10cefe  jal         func_433BF8
    ctx->pc = 0x437B50u;
    SET_GPR_U32(ctx, 31, 0x437B58u);
    ctx->pc = 0x437B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437B50u;
    // 0x437b54: 0x8fa8006c  lw          $t0, 0x6C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433BF8u, 0x437B50u, 0x437B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437B58u;
label_437b58:
    // 0x437b58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x437b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437b5c: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x437B5Cu;
    {
        const bool branch_taken_0x437b5c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x437B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437B5Cu;
        // 0x437b60: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437b5c) {
            ctx->pc = 0x437B70u;
            goto label_437b70;
        }
    }
    ctx->pc = 0x437B64u;
    // 0x437b64: 0x1452fff4  bne         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x437B64u;
    {
        const bool branch_taken_0x437b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x437B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437B64u;
        // 0x437b68: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437b64) {
            ctx->pc = 0x437B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437b38;
        }
    }
    ctx->pc = 0x437B6Cu;
    // 0x437b6c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x437b6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_437b70:
    // 0x437b70: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x437b70u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x437b74: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x437B74u;
    {
        const bool branch_taken_0x437b74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x437b74) {
            ctx->pc = 0x437C18u;
            goto label_437c18;
        }
    }
    ctx->pc = 0x437B7Cu;
    // 0x437b7c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x437b7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x437b80: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x437b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x437b84: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x437B84u;
    {
        const bool branch_taken_0x437b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x437b84) {
            ctx->pc = 0x437B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437B84u;
            // 0x437b88: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437BE8u;
            goto label_437be8;
        }
    }
    ctx->pc = 0x437B8Cu;
    // 0x437b8c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x437b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437b90: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x437b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x437b94: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x437B94u;
    {
        const bool branch_taken_0x437b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437B94u;
        // 0x437b98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437b94) {
            ctx->pc = 0x437BC4u;
            goto label_437bc4;
        }
    }
    ctx->pc = 0x437B9Cu;
    // 0x437b9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x437b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437ba0: 0xc10c190  jal         func_430640
    ctx->pc = 0x437BA0u;
    SET_GPR_U32(ctx, 31, 0x437BA8u);
    ctx->pc = 0x437BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437BA0u;
    // 0x437ba4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x437BA0u, 0x437BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437BA8u;
label_437ba8:
    // 0x437ba8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x437ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437bac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x437bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437bb0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x437bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x437bb4: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x437bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x437bb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x437bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x437bbc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x437BBCu;
    {
        const bool branch_taken_0x437bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437BBCu;
        // 0x437bc0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437bbc) {
            ctx->pc = 0x437C0Cu;
            goto label_437c0c;
        }
    }
    ctx->pc = 0x437BC4u;
label_437bc4:
    // 0x437bc4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x437bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437bc8: 0xc10c190  jal         func_430640
    ctx->pc = 0x437BC8u;
    SET_GPR_U32(ctx, 31, 0x437BD0u);
    ctx->pc = 0x437BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437BC8u;
    // 0x437bcc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x437BC8u, 0x437BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437BD0u;
label_437bd0:
    // 0x437bd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x437bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x437bd4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x437bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437bd8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x437bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x437bdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x437bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x437be0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x437BE0u;
    {
        const bool branch_taken_0x437be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437BE0u;
        // 0x437be4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437be0) {
            ctx->pc = 0x437C0Cu;
            goto label_437c0c;
        }
    }
    ctx->pc = 0x437BE8u;
label_437be8:
    // 0x437be8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x437BE8u;
    {
        const bool branch_taken_0x437be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437be8) {
            ctx->pc = 0x437BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437BE8u;
            // 0x437bec: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437BFCu;
            goto label_437bfc;
        }
    }
    ctx->pc = 0x437BF0u;
    // 0x437bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x437bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x437bf4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x437bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x437bf8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x437bf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_437bfc:
    // 0x437bfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x437bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437c00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x437c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437c04: 0xc10de76  jal         func_4379D8
    ctx->pc = 0x437C04u;
    SET_GPR_U32(ctx, 31, 0x437C0Cu);
    ctx->pc = 0x437C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437C04u;
    // 0x437c08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4379D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4379D8u, 0x437C04u, 0x437C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437C0Cu;
label_437c0c:
    // 0x437c0c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x437c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x437c10: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x437c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x437c14: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x437c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_437c18:
    // 0x437c18: 0x5a00035d  blezl       $s0, . + 4 + (0x35D << 2)
    ctx->pc = 0x437C18u;
    {
        const bool branch_taken_0x437c18 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x437c18) {
            ctx->pc = 0x437C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437C18u;
            // 0x437c1c: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438990u;
            goto label_438990;
        }
    }
    ctx->pc = 0x437C20u;
    // 0x437c20: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x437c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x437c24: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x437C24u;
    {
        const bool branch_taken_0x437c24 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x437c24) {
            ctx->pc = 0x437C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437C24u;
            // 0x437c28: 0xa3a00040  sb          $zero, 0x40($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437C40u;
            goto label_437c40;
        }
    }
    ctx->pc = 0x437C2Cu;
    // 0x437c2c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x437c2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x437c30: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x437c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x437c34: 0x1440035f  bnez        $v0, . + 4 + (0x35F << 2)
    ctx->pc = 0x437C34u;
    {
        const bool branch_taken_0x437c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x437C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437C34u;
        // 0x437c38: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437c34) {
            ctx->pc = 0x4389B4u;
            goto label_4389b4;
        }
    }
    ctx->pc = 0x437C3Cu;
    // 0x437c3c: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x437c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_437c40:
    // 0x437c40: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x437c40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x437c44: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x437c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x437c48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x437c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437c4c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x437c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x437c50: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x437c50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_437c54:
    // 0x437c54: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x437c54u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_437c58:
    // 0x437c58: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x437c58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_437c5c:
    // 0x437c5c: 0x26a3ffe0  addiu       $v1, $s5, -0x20
    ctx->pc = 0x437c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967264));
    // 0x437c60: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x437c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x437c64: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x437C64u;
    {
        const bool branch_taken_0x437c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437C64u;
        // 0x437c68: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437c64) {
            ctx->pc = 0x4381A4u;
            goto label_4381a4;
        }
    }
    ctx->pc = 0x437C6Cu;
    // 0x437c6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x437c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x437c70: 0x2442cf20  addiu       $v0, $v0, -0x30E0
    ctx->pc = 0x437c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x437c74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x437c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x437c78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x437c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x437c7c: 0x800008  jr          $a0
    ctx->pc = 0x437C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x437C84u: goto label_437c84;
            case 0x437C9Cu: goto label_437c9c;
            case 0x437CA4u: goto label_437ca4;
            case 0x437CACu: goto label_437cac;
            case 0x437CC4u: goto label_437cc4;
            case 0x437CCCu: goto label_437ccc;
            case 0x437CD8u: goto label_437cd8;
            case 0x437D4Cu: goto label_437d4c;
            case 0x437D54u: goto label_437d54;
            case 0x437D88u: goto label_437d88;
            case 0x437D90u: goto label_437d90;
            case 0x437DA4u: goto label_437da4;
            case 0x437DACu: goto label_437dac;
            case 0x437DD8u: goto label_437dd8;
            case 0x437DDCu: goto label_437ddc;
            case 0x437E2Cu: goto label_437e2c;
            case 0x437E94u: goto label_437e94;
            case 0x437E98u: goto label_437e98;
            case 0x437ED8u: goto label_437ed8;
            case 0x437EFCu: goto label_437efc;
            case 0x437F5Cu: goto label_437f5c;
            case 0x437F60u: goto label_437f60;
            case 0x437FA0u: goto label_437fa0;
            case 0x437FACu: goto label_437fac;
            case 0x4381A4u: goto label_4381a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x437C7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x437C84u;
label_437c84:
    // 0x437c84: 0x83a20040  lb          $v0, 0x40($sp)
    ctx->pc = 0x437c84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x437c88: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x437C88u;
    {
        const bool branch_taken_0x437c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437c88) {
            ctx->pc = 0x437C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437C88u;
            // 0x437c8c: 0x82f50000  lb          $s5, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c58;
        }
    }
    ctx->pc = 0x437C90u;
    // 0x437c90: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x437c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x437c94: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x437C94u;
    {
        const bool branch_taken_0x437c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437C94u;
        // 0x437c98: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437c94) {
            ctx->pc = 0x437C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c54;
        }
    }
    ctx->pc = 0x437C9Cu;
label_437c9c:
    // 0x437c9c: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x437C9Cu;
    {
        const bool branch_taken_0x437c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437C9Cu;
        // 0x437ca0: 0x36520001  ori         $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437c9c) {
            ctx->pc = 0x437C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c54;
        }
    }
    ctx->pc = 0x437CA4u;
label_437ca4:
    // 0x437ca4: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x437CA4u;
    {
        const bool branch_taken_0x437ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437CA4u;
        // 0x437ca8: 0x36520200  ori         $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437ca4) {
            ctx->pc = 0x437C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c54;
        }
    }
    ctx->pc = 0x437CACu;
label_437cac:
    // 0x437cac: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x437cacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x437cb0: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x437cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x437cb4: 0x461ffe7  bgez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x437CB4u;
    {
        const bool branch_taken_0x437cb4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x437CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437CB4u;
        // 0x437cb8: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437cb4) {
            ctx->pc = 0x437C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c54;
        }
    }
    ctx->pc = 0x437CBCu;
    // 0x437cbc: 0x31823  negu        $v1, $v1
    ctx->pc = 0x437cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x437cc0: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x437cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_437cc4:
    // 0x437cc4: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x437CC4u;
    {
        const bool branch_taken_0x437cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437CC4u;
        // 0x437cc8: 0x36520004  ori         $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437cc4) {
            ctx->pc = 0x437C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c54;
        }
    }
    ctx->pc = 0x437CCCu;
label_437ccc:
    // 0x437ccc: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x437cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x437cd0: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x437CD0u;
    {
        const bool branch_taken_0x437cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437CD0u;
        // 0x437cd4: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437cd0) {
            ctx->pc = 0x437C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c54;
        }
    }
    ctx->pc = 0x437CD8u;
label_437cd8:
    // 0x437cd8: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x437cd8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x437cdc: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x437cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x437ce0: 0x16a20008  bne         $s5, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x437CE0u;
    {
        const bool branch_taken_0x437ce0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x437CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437CE0u;
        // 0x437ce4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437ce0) {
            ctx->pc = 0x437D04u;
            goto label_437d04;
        }
    }
    ctx->pc = 0x437CE8u;
    // 0x437ce8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x437ce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x437cec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x437cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x437cf0: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x437cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x437cf4: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x437cf4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x437cf8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x437cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x437cfc: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x437CFCu;
    {
        const bool branch_taken_0x437cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437CFCu;
        // 0x437d00: 0x202f00b  movn        $fp, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437cfc) {
            ctx->pc = 0x437C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c54;
        }
    }
    ctx->pc = 0x437D04u;
label_437d04:
    // 0x437d04: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x437d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x437d08: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x437d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x437d0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x437D0Cu;
    {
        const bool branch_taken_0x437d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437D0Cu;
        // 0x437d10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437d0c) {
            ctx->pc = 0x437D38u;
            goto label_437d38;
        }
    }
    ctx->pc = 0x437D14u;
    // 0x437d14: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x437d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_437d18:
    // 0x437d18: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x437d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x437d1c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x437d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x437d20: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x437d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x437d24: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x437d24u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x437d28: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x437d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x437d2c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x437d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x437d30: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x437D30u;
    {
        const bool branch_taken_0x437d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x437D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437D30u;
        // 0x437d34: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437d30) {
            ctx->pc = 0x437D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437d18;
        }
    }
    ctx->pc = 0x437D38u;
label_437d38:
    // 0x437d38: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x437d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x437d3c: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x437d3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x437d40: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x437d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x437d44: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x437D44u;
    {
        const bool branch_taken_0x437d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437D44u;
        // 0x437d48: 0x202f00b  movn        $fp, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437d44) {
            ctx->pc = 0x437C5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c5c;
        }
    }
    ctx->pc = 0x437D4Cu;
label_437d4c:
    // 0x437d4c: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x437D4Cu;
    {
        const bool branch_taken_0x437d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437D4Cu;
        // 0x437d50: 0x36520080  ori         $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437d4c) {
            ctx->pc = 0x437C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c54;
        }
    }
    ctx->pc = 0x437D54u;
label_437d54:
    // 0x437d54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x437d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437d58: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x437d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x437d5c: 0x0  nop
    ctx->pc = 0x437d5cu;
    // NOP
label_437d60:
    // 0x437d60: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x437d60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x437d64: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x437d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x437d68: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x437d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x437d6c: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x437d6cu;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x437d70: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x437d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x437d74: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x437d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x437d78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x437D78u;
    {
        const bool branch_taken_0x437d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x437D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437D78u;
        // 0x437d7c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437d78) {
            ctx->pc = 0x437D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437d60;
        }
    }
    ctx->pc = 0x437D80u;
    // 0x437d80: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x437D80u;
    {
        const bool branch_taken_0x437d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437D80u;
        // 0x437d84: 0xafb00054  sw          $s0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437d80) {
            ctx->pc = 0x437C5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c5c;
        }
    }
    ctx->pc = 0x437D88u;
label_437d88:
    // 0x437d88: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x437D88u;
    {
        const bool branch_taken_0x437d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437D88u;
        // 0x437d8c: 0x36520040  ori         $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437d88) {
            ctx->pc = 0x437C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c54;
        }
    }
    ctx->pc = 0x437D90u;
label_437d90:
    // 0x437d90: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x437d90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x437d94: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x437d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x437d98: 0x5462ffae  bnel        $v1, $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x437D98u;
    {
        const bool branch_taken_0x437d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x437d98) {
            ctx->pc = 0x437D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437D98u;
            // 0x437d9c: 0x36520010  ori         $s2, $s2, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x437C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c54;
        }
    }
    ctx->pc = 0x437DA0u;
    // 0x437da0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x437da0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_437da4:
    // 0x437da4: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x437DA4u;
    {
        const bool branch_taken_0x437da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437DA4u;
        // 0x437da8: 0x36520020  ori         $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437da4) {
            ctx->pc = 0x437C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437c54;
        }
    }
    ctx->pc = 0x437DACu;
label_437dac:
    // 0x437dac: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x437dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x437db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x437db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x437db4: 0x9263fff8  lbu         $v1, -0x8($s3)
    ctx->pc = 0x437db4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x437db8: 0x32440004  andi        $a0, $s2, 0x4
    ctx->pc = 0x437db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x437dbc: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x437dbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437dc0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x437dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x437dc4: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x437dc4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x437dc8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x437dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x437dcc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x437dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x437dd0: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x437DD0u;
    {
        const bool branch_taken_0x437dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437DD0u;
        // 0x437dd4: 0xa3a00040  sb          $zero, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437dd0) {
            ctx->pc = 0x4381C8u;
            goto label_4381c8;
        }
    }
    ctx->pc = 0x437DD8u;
label_437dd8:
    // 0x437dd8: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x437dd8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_437ddc:
    // 0x437ddc: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x437ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x437de0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x437DE0u;
    {
        const bool branch_taken_0x437de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437de0) {
            ctx->pc = 0x437DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437DE0u;
            // 0x437de4: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437DF8u;
            goto label_437df8;
        }
    }
    ctx->pc = 0x437DE8u;
    // 0x437de8: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x437de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x437dec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x437DECu;
    {
        const bool branch_taken_0x437dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437DECu;
        // 0x437df0: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437dec) {
            ctx->pc = 0x437E00u;
            goto label_437e00;
        }
    }
    ctx->pc = 0x437DF4u;
    // 0x437df4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x437df4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_437df8:
    // 0x437df8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x437DF8u;
    {
        const bool branch_taken_0x437df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437DF8u;
        // 0x437dfc: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437df8) {
            ctx->pc = 0x437E14u;
            goto label_437e14;
        }
    }
    ctx->pc = 0x437E00u;
label_437e00:
    // 0x437e00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x437E00u;
    {
        const bool branch_taken_0x437e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437E00u;
        // 0x437e04: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437e00) {
            ctx->pc = 0x437E10u;
            goto label_437e10;
        }
    }
    ctx->pc = 0x437E08u;
    // 0x437e08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x437E08u;
    {
        const bool branch_taken_0x437e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437E08u;
        // 0x437e0c: 0x8670fff8  lh          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437e08) {
            ctx->pc = 0x437E14u;
            goto label_437e14;
        }
    }
    ctx->pc = 0x437E10u;
label_437e10:
    // 0x437e10: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x437e10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_437e14:
    // 0x437e14: 0x601007c  bgez        $s0, . + 4 + (0x7C << 2)
    ctx->pc = 0x437E14u;
    {
        const bool branch_taken_0x437e14 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x437E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437E14u;
        // 0x437e18: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437e14) {
            ctx->pc = 0x438008u;
            goto label_438008;
        }
    }
    ctx->pc = 0x437E1Cu;
    // 0x437e1c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x437e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x437e20: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x437e20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x437e24: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x437E24u;
    {
        const bool branch_taken_0x437e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437E24u;
        // 0x437e28: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437e24) {
            ctx->pc = 0x438008u;
            goto label_438008;
        }
    }
    ctx->pc = 0x437E2Cu;
label_437e2c:
    // 0x437e2c: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x437e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x437e30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x437E30u;
    {
        const bool branch_taken_0x437e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437E30u;
        // 0x437e34: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437e30) {
            ctx->pc = 0x437E48u;
            goto label_437e48;
        }
    }
    ctx->pc = 0x437E38u;
    // 0x437e38: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x437e38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x437e3c: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x437e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x437e40: 0x1000ff3b  b           . + 4 + (-0xC5 << 2)
    ctx->pc = 0x437E40u;
    {
        const bool branch_taken_0x437e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437E40u;
        // 0x437e44: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437e40) {
            ctx->pc = 0x437B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437b30;
        }
    }
    ctx->pc = 0x437E48u;
label_437e48:
    // 0x437e48: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x437e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x437e4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x437E4Cu;
    {
        const bool branch_taken_0x437e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437E4Cu;
        // 0x437e50: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437e4c) {
            ctx->pc = 0x437E64u;
            goto label_437e64;
        }
    }
    ctx->pc = 0x437E54u;
    // 0x437e54: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x437e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x437e58: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x437e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x437e5c: 0x1000ff34  b           . + 4 + (-0xCC << 2)
    ctx->pc = 0x437E5Cu;
    {
        const bool branch_taken_0x437e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437E5Cu;
        // 0x437e60: 0xfc460000  sd          $a2, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437e5c) {
            ctx->pc = 0x437B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437b30;
        }
    }
    ctx->pc = 0x437E64u;
label_437e64:
    // 0x437e64: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x437e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x437e68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x437E68u;
    {
        const bool branch_taken_0x437e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437E68u;
        // 0x437e6c: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437e68) {
            ctx->pc = 0x437E80u;
            goto label_437e80;
        }
    }
    ctx->pc = 0x437E70u;
    // 0x437e70: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x437e70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x437e74: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x437e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x437e78: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x437E78u;
    {
        const bool branch_taken_0x437e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437E78u;
        // 0x437e7c: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437e78) {
            ctx->pc = 0x437B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437b30;
        }
    }
    ctx->pc = 0x437E80u;
label_437e80:
    // 0x437e80: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x437e80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x437e84: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x437e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x437e88: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x437e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x437e8c: 0x1000ff28  b           . + 4 + (-0xD8 << 2)
    ctx->pc = 0x437E8Cu;
    {
        const bool branch_taken_0x437e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437E8Cu;
        // 0x437e90: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437e8c) {
            ctx->pc = 0x437B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437b30;
        }
    }
    ctx->pc = 0x437E94u;
label_437e94:
    // 0x437e94: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x437e94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_437e98:
    // 0x437e98: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x437e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x437e9c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x437E9Cu;
    {
        const bool branch_taken_0x437e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437e9c) {
            ctx->pc = 0x437EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437E9Cu;
            // 0x437ea0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437EB4u;
            goto label_437eb4;
        }
    }
    ctx->pc = 0x437EA4u;
    // 0x437ea4: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x437ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x437ea8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x437EA8u;
    {
        const bool branch_taken_0x437ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437EA8u;
        // 0x437eac: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437ea8) {
            ctx->pc = 0x437EBCu;
            goto label_437ebc;
        }
    }
    ctx->pc = 0x437EB0u;
    // 0x437eb0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x437eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_437eb4:
    // 0x437eb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x437EB4u;
    {
        const bool branch_taken_0x437eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437EB4u;
        // 0x437eb8: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437eb4) {
            ctx->pc = 0x437ED0u;
            goto label_437ed0;
        }
    }
    ctx->pc = 0x437EBCu;
label_437ebc:
    // 0x437ebc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x437EBCu;
    {
        const bool branch_taken_0x437ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437EBCu;
        // 0x437ec0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437ebc) {
            ctx->pc = 0x437ECCu;
            goto label_437ecc;
        }
    }
    ctx->pc = 0x437EC4u;
    // 0x437ec4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x437EC4u;
    {
        const bool branch_taken_0x437ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437EC4u;
        // 0x437ec8: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437ec4) {
            ctx->pc = 0x437ED0u;
            goto label_437ed0;
        }
    }
    ctx->pc = 0x437ECCu;
label_437ecc:
    // 0x437ecc: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x437eccu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_437ed0:
    // 0x437ed0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x437ED0u;
    {
        const bool branch_taken_0x437ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437ED0u;
        // 0x437ed4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437ed0) {
            ctx->pc = 0x438004u;
            goto label_438004;
        }
    }
    ctx->pc = 0x437ED8u;
label_437ed8:
    // 0x437ed8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x437ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x437edc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x437edcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x437ee0: 0x2442cec0  addiu       $v0, $v0, -0x3140
    ctx->pc = 0x437ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954688));
    // 0x437ee4: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x437ee4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x437ee8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x437ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x437eec: 0x36520002  ori         $s2, $s2, 0x2
    ctx->pc = 0x437eecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x437ef0: 0x24150078  addiu       $s5, $zero, 0x78
    ctx->pc = 0x437ef0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x437ef4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x437EF4u;
    {
        const bool branch_taken_0x437ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437EF4u;
        // 0x437ef8: 0x8e70fff8  lw          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437ef4) {
            ctx->pc = 0x438004u;
            goto label_438004;
        }
    }
    ctx->pc = 0x437EFCu;
label_437efc:
    // 0x437efc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x437efcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x437f00: 0x8e74fff8  lw          $s4, -0x8($s3)
    ctx->pc = 0x437f00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x437f04: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x437F04u;
    {
        const bool branch_taken_0x437f04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x437F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437F04u;
        // 0x437f08: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437f04) {
            ctx->pc = 0x437F10u;
            goto label_437f10;
        }
    }
    ctx->pc = 0x437F0Cu;
    // 0x437f0c: 0x2454ced8  addiu       $s4, $v0, -0x3128
    ctx->pc = 0x437f0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954712));
label_437f10:
    // 0x437f10: 0x7c0000b  bltz        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x437F10u;
    {
        const bool branch_taken_0x437f10 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x437F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437F10u;
        // 0x437f14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437f10) {
            ctx->pc = 0x437F40u;
            goto label_437f40;
        }
    }
    ctx->pc = 0x437F18u;
    // 0x437f18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x437f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437f1c: 0xc10c130  jal         func_4304C0
    ctx->pc = 0x437F1Cu;
    SET_GPR_U32(ctx, 31, 0x437F24u);
    ctx->pc = 0x437F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437F1Cu;
    // 0x437f20: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4304C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4304C0u, 0x437F1Cu, 0x437F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437F24u;
label_437f24:
    // 0x437f24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x437F24u;
    {
        const bool branch_taken_0x437f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437F24u;
        // 0x437f28: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437f24) {
            ctx->pc = 0x437F38u;
            goto label_437f38;
        }
    }
    ctx->pc = 0x437F2Cu;
    // 0x437f2c: 0x3c2182a  slt         $v1, $fp, $v0
    ctx->pc = 0x437f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x437f30: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x437F30u;
    {
        const bool branch_taken_0x437f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x437F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437F30u;
        // 0x437f34: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437f30) {
            ctx->pc = 0x437F4Cu;
            goto label_437f4c;
        }
    }
    ctx->pc = 0x437F38u;
label_437f38:
    // 0x437f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x437F38u;
    {
        const bool branch_taken_0x437f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437F38u;
        // 0x437f3c: 0xafbe004c  sw          $fp, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437f38) {
            ctx->pc = 0x437F4Cu;
            goto label_437f4c;
        }
    }
    ctx->pc = 0x437F40u;
label_437f40:
    // 0x437f40: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x437F40u;
    SET_GPR_U32(ctx, 31, 0x437F48u);
    ctx->pc = 0x437F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437F40u;
    // 0x437f44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x437F40u, 0x437F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437F48u;
label_437f48:
    // 0x437f48: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x437f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_437f4c:
    // 0x437f4c: 0x32450004  andi        $a1, $s2, 0x4
    ctx->pc = 0x437f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x437f50: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x437f50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x437f54: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x437F54u;
    {
        const bool branch_taken_0x437f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437F54u;
        // 0x437f58: 0x325e0084  andi        $fp, $s2, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437f54) {
            ctx->pc = 0x4381C4u;
            goto label_4381c4;
        }
    }
    ctx->pc = 0x437F5Cu;
label_437f5c:
    // 0x437f5c: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x437f5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_437f60:
    // 0x437f60: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x437f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x437f64: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x437F64u;
    {
        const bool branch_taken_0x437f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437f64) {
            ctx->pc = 0x437F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437F64u;
            // 0x437f68: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437F7Cu;
            goto label_437f7c;
        }
    }
    ctx->pc = 0x437F6Cu;
    // 0x437f6c: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x437f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x437f70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x437F70u;
    {
        const bool branch_taken_0x437f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437F70u;
        // 0x437f74: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437f70) {
            ctx->pc = 0x437F84u;
            goto label_437f84;
        }
    }
    ctx->pc = 0x437F78u;
    // 0x437f78: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x437f78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_437f7c:
    // 0x437f7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x437F7Cu;
    {
        const bool branch_taken_0x437f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437F7Cu;
        // 0x437f80: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437f7c) {
            ctx->pc = 0x437F98u;
            goto label_437f98;
        }
    }
    ctx->pc = 0x437F84u;
label_437f84:
    // 0x437f84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x437F84u;
    {
        const bool branch_taken_0x437f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437F84u;
        // 0x437f88: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437f84) {
            ctx->pc = 0x437F94u;
            goto label_437f94;
        }
    }
    ctx->pc = 0x437F8Cu;
    // 0x437f8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x437F8Cu;
    {
        const bool branch_taken_0x437f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437F8Cu;
        // 0x437f90: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437f8c) {
            ctx->pc = 0x437F98u;
            goto label_437f98;
        }
    }
    ctx->pc = 0x437F94u;
label_437f94:
    // 0x437f94: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x437f94u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_437f98:
    // 0x437f98: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x437F98u;
    {
        const bool branch_taken_0x437f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437F98u;
        // 0x437f9c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437f98) {
            ctx->pc = 0x438004u;
            goto label_438004;
        }
    }
    ctx->pc = 0x437FA0u;
label_437fa0:
    // 0x437fa0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x437fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x437fa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x437FA4u;
    {
        const bool branch_taken_0x437fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437FA4u;
        // 0x437fa8: 0x2442cee0  addiu       $v0, $v0, -0x3120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437fa4) {
            ctx->pc = 0x437FB4u;
            goto label_437fb4;
        }
    }
    ctx->pc = 0x437FACu;
label_437fac:
    // 0x437fac: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x437facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x437fb0: 0x2442cec0  addiu       $v0, $v0, -0x3140
    ctx->pc = 0x437fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954688));
label_437fb4:
    // 0x437fb4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x437fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x437fb8: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x437fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x437fbc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x437FBCu;
    {
        const bool branch_taken_0x437fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437fbc) {
            ctx->pc = 0x437FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x437FBCu;
            // 0x437fc0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x437FD4u;
            goto label_437fd4;
        }
    }
    ctx->pc = 0x437FC4u;
    // 0x437fc4: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x437fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x437fc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x437FC8u;
    {
        const bool branch_taken_0x437fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437FC8u;
        // 0x437fcc: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437fc8) {
            ctx->pc = 0x437FDCu;
            goto label_437fdc;
        }
    }
    ctx->pc = 0x437FD0u;
    // 0x437fd0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x437fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_437fd4:
    // 0x437fd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x437FD4u;
    {
        const bool branch_taken_0x437fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437FD4u;
        // 0x437fd8: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437fd4) {
            ctx->pc = 0x437FF0u;
            goto label_437ff0;
        }
    }
    ctx->pc = 0x437FDCu;
label_437fdc:
    // 0x437fdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x437FDCu;
    {
        const bool branch_taken_0x437fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437FDCu;
        // 0x437fe0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437fdc) {
            ctx->pc = 0x437FECu;
            goto label_437fec;
        }
    }
    ctx->pc = 0x437FE4u;
    // 0x437fe4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x437FE4u;
    {
        const bool branch_taken_0x437fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437FE4u;
        // 0x437fe8: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437fe4) {
            ctx->pc = 0x437FF0u;
            goto label_437ff0;
        }
    }
    ctx->pc = 0x437FECu;
label_437fec:
    // 0x437fec: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x437fecu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_437ff0:
    // 0x437ff0: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x437ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x437ff4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x437FF4u;
    {
        const bool branch_taken_0x437ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x437FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437FF4u;
        // 0x437ff8: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437ff4) {
            ctx->pc = 0x438004u;
            goto label_438004;
        }
    }
    ctx->pc = 0x437FFCu;
    // 0x437ffc: 0x36420002  ori         $v0, $s2, 0x2
    ctx->pc = 0x437ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x438000: 0x50900b  movn        $s2, $v0, $s0
    ctx->pc = 0x438000u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_438004:
    // 0x438004: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x438004u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_438008:
    // 0x438008: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x438008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43800c: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x43800Cu;
    {
        const bool branch_taken_0x43800c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x438010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43800Cu;
        // 0x438010: 0xafbe0058  sw          $fp, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43800c) {
            ctx->pc = 0x43801Cu;
            goto label_43801c;
        }
    }
    ctx->pc = 0x438014u;
    // 0x438014: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x438014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x438018: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x438018u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_43801c:
    // 0x43801c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43801Cu;
    {
        const bool branch_taken_0x43801c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x438020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43801Cu;
        // 0x438020: 0x27b40028  addiu       $s4, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43801c) {
            ctx->pc = 0x438038u;
            goto label_438038;
        }
    }
    ctx->pc = 0x438024u;
    // 0x438024: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x438024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x438028: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x438028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x43802c: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x43802cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x438030: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x438030u;
    {
        const bool branch_taken_0x438030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x438034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438030u;
        // 0x438034: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438030) {
            ctx->pc = 0x438164u;
            goto label_438164;
        }
    }
    ctx->pc = 0x438038u;
label_438038:
    // 0x438038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x438038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43803c: 0x12c2001a  beq         $s6, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x43803Cu;
    {
        const bool branch_taken_0x43803c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x438040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43803Cu;
        // 0x438040: 0x32450004  andi        $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43803c) {
            ctx->pc = 0x4380A8u;
            goto label_4380a8;
        }
    }
    ctx->pc = 0x438044u;
    // 0x438044: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x438044u;
    {
        const bool branch_taken_0x438044 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x438048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438044u;
        // 0x438048: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438044) {
            ctx->pc = 0x43805Cu;
            goto label_43805c;
        }
    }
    ctx->pc = 0x43804Cu;
    // 0x43804c: 0x12c2002e  beq         $s6, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x43804Cu;
    {
        const bool branch_taken_0x43804c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x438050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43804Cu;
        // 0x438050: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43804c) {
            ctx->pc = 0x438108u;
            goto label_438108;
        }
    }
    ctx->pc = 0x438054u;
    // 0x438054: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x438054u;
    {
        const bool branch_taken_0x438054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438054u;
        // 0x438058: 0x32440004  andi        $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x438054) {
            ctx->pc = 0x438148u;
            goto label_438148;
        }
    }
    ctx->pc = 0x43805Cu;
label_43805c:
    // 0x43805c: 0x32440004  andi        $a0, $s2, 0x4
    ctx->pc = 0x43805cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x438060: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x438060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x438064: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x438064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x438068: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x438068u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x43806c: 0x0  nop
    ctx->pc = 0x43806cu;
    // NOP
label_438070:
    // 0x438070: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x438070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x438074: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x438074u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x438078: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x438078u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x43807c: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x43807cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x438080: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x438080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x438084: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x438084u;
    {
        const bool branch_taken_0x438084 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x438088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438084u;
        // 0x438088: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438084) {
            ctx->pc = 0x438070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_438070;
        }
    }
    ctx->pc = 0x43808Cu;
    // 0x43808c: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x43808Cu;
    {
        const bool branch_taken_0x43808c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x438090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43808Cu;
        // 0x438090: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43808c) {
            ctx->pc = 0x438164u;
            goto label_438164;
        }
    }
    ctx->pc = 0x438094u;
    // 0x438094: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x438094u;
    {
        const bool branch_taken_0x438094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x438098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438094u;
        // 0x438098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438094) {
            ctx->pc = 0x438168u;
            goto label_438168;
        }
    }
    ctx->pc = 0x43809Cu;
    // 0x43809c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x43809cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x4380a0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x4380A0u;
    {
        const bool branch_taken_0x4380a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4380A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4380A0u;
        // 0x4380a4: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4380a0) {
            ctx->pc = 0x438168u;
            goto label_438168;
        }
    }
    ctx->pc = 0x4380A8u;
label_4380a8:
    // 0x4380a8: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x4380a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x4380ac: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x4380acu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x4380b0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4380B0u;
    {
        const bool branch_taken_0x4380b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4380B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4380B0u;
        // 0x4380b4: 0xafa50070  sw          $a1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4380b0) {
            ctx->pc = 0x4380F4u;
            goto label_4380f4;
        }
    }
    ctx->pc = 0x4380B8u;
    // 0x4380b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4380b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4380bc: 0x0  nop
    ctx->pc = 0x4380bcu;
    // NOP
label_4380c0:
    // 0x4380c0: 0xc10f1c0  jal         func_43C700
    ctx->pc = 0x4380C0u;
    SET_GPR_U32(ctx, 31, 0x4380C8u);
    ctx->pc = 0x4380C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4380C0u;
    // 0x4380c4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C700u, 0x4380C0u, 0x4380C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4380C8u;
label_4380c8:
    // 0x4380c8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4380c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x4380cc: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x4380ccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x4380d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4380d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4380d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4380d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4380d8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4380d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4380dc: 0xc10acae  jal         func_42B2B8
    ctx->pc = 0x4380DCu;
    SET_GPR_U32(ctx, 31, 0x4380E4u);
    ctx->pc = 0x4380E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4380DCu;
    // 0x4380e0: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x4380DCu, 0x4380E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4380E4u;
label_4380e4:
    // 0x4380e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4380e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4380e8: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x4380e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x4380ec: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4380ECu;
    {
        const bool branch_taken_0x4380ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4380F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4380ECu;
        // 0x4380f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4380ec) {
            ctx->pc = 0x4380C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4380c0;
        }
    }
    ctx->pc = 0x4380F4u;
label_4380f4:
    // 0x4380f4: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x4380f4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x4380f8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4380f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x4380fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4380fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x438100: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x438100u;
    {
        const bool branch_taken_0x438100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438100u;
        // 0x438104: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438100) {
            ctx->pc = 0x438164u;
            goto label_438164;
        }
    }
    ctx->pc = 0x438108u;
label_438108:
    // 0x438108: 0x32460004  andi        $a2, $s2, 0x4
    ctx->pc = 0x438108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x43810c: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x43810cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x438110: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x438110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x438114: 0x0  nop
    ctx->pc = 0x438114u;
    // NOP
label_438118:
    // 0x438118: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x438118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x43811c: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x43811cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x438120: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x438120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x438124: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x438124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x438128: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x438128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x43812c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x43812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x438130: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x438130u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x438134: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x438134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x438138: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x438138u;
    {
        const bool branch_taken_0x438138 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438138u;
        // 0x43813c: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438138) {
            ctx->pc = 0x438118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_438118;
        }
    }
    ctx->pc = 0x438140u;
    // 0x438140: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x438140u;
    {
        const bool branch_taken_0x438140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438140u;
        // 0x438144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438140) {
            ctx->pc = 0x438168u;
            goto label_438168;
        }
    }
    ctx->pc = 0x438148u;
label_438148:
    // 0x438148: 0x2454cef8  addiu       $s4, $v0, -0x3108
    ctx->pc = 0x438148u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954744));
    // 0x43814c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x43814cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x438150: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x438150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438154: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x438154u;
    SET_GPR_U32(ctx, 31, 0x43815Cu);
    ctx->pc = 0x438158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438154u;
    // 0x438158: 0x325e0084  andi        $fp, $s2, 0x84 (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x438154u, 0x43815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43815Cu;
label_43815c:
    // 0x43815c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x43815Cu;
    {
        const bool branch_taken_0x43815c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43815Cu;
        // 0x438160: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43815c) {
            ctx->pc = 0x4381C8u;
            goto label_4381c8;
        }
    }
    ctx->pc = 0x438164u;
label_438164:
    // 0x438164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x438164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_438168:
    // 0x438168: 0x16c2000b  bne         $s6, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x438168u;
    {
        const bool branch_taken_0x438168 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x43816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438168u;
        // 0x43816c: 0x2682ffd8  addiu       $v0, $s4, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438168) {
            ctx->pc = 0x438198u;
            goto label_438198;
        }
    }
    ctx->pc = 0x438170u;
    // 0x438170: 0x32420200  andi        $v0, $s2, 0x200
    ctx->pc = 0x438170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
    // 0x438174: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x438174u;
    {
        const bool branch_taken_0x438174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438174u;
        // 0x438178: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438174) {
            ctx->pc = 0x438194u;
            goto label_438194;
        }
    }
    ctx->pc = 0x43817Cu;
    // 0x43817c: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x43817cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x438180: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x438180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438184: 0xc10de0a  jal         func_437828
    ctx->pc = 0x438184u;
    SET_GPR_U32(ctx, 31, 0x43818Cu);
    ctx->pc = 0x438188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438184u;
    // 0x438188: 0x27a7004c  addiu       $a3, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x437828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x437828u, 0x438184u, 0x43818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43818Cu;
label_43818c:
    // 0x43818c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x43818Cu;
    {
        const bool branch_taken_0x43818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43818Cu;
        // 0x438190: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43818c) {
            ctx->pc = 0x4381C8u;
            goto label_4381c8;
        }
    }
    ctx->pc = 0x438194u;
label_438194:
    // 0x438194: 0x2682ffd8  addiu       $v0, $s4, -0x28
    ctx->pc = 0x438194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
label_438198:
    // 0x438198: 0x3a21823  subu        $v1, $sp, $v0
    ctx->pc = 0x438198u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x43819c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x43819Cu;
    {
        const bool branch_taken_0x43819c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4381A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43819Cu;
        // 0x4381a0: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43819c) {
            ctx->pc = 0x4381C8u;
            goto label_4381c8;
        }
    }
    ctx->pc = 0x4381A4u;
label_4381a4:
    // 0x4381a4: 0x12a001f9  beqz        $s5, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x4381A4u;
    {
        const bool branch_taken_0x4381a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4381A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4381A4u;
        // 0x4381a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4381a4) {
            ctx->pc = 0x43898Cu;
            goto label_43898c;
        }
    }
    ctx->pc = 0x4381ACu;
    // 0x4381ac: 0x32450004  andi        $a1, $s2, 0x4
    ctx->pc = 0x4381acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x4381b0: 0xa3b50000  sb          $s5, 0x0($sp)
    ctx->pc = 0x4381b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x4381b4: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x4381b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4381b8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x4381b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x4381bc: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x4381bcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x4381c0: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x4381c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_4381c4:
    // 0x4381c4: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x4381c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_4381c8:
    // 0x4381c8: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x4381c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x4381cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x4381ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4381d0: 0x83a30040  lb          $v1, 0x40($sp)
    ctx->pc = 0x4381d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4381d4: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x4381d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4381d8: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x4381d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x4381dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4381DCu;
    {
        const bool branch_taken_0x4381dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4381E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4381DCu;
        // 0x4381e0: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4381dc) {
            ctx->pc = 0x4381F0u;
            goto label_4381f0;
        }
    }
    ctx->pc = 0x4381E4u;
    // 0x4381e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4381e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4381e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4381E8u;
    {
        const bool branch_taken_0x4381e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4381ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4381E8u;
        // 0x4381ec: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4381e8) {
            ctx->pc = 0x438200u;
            goto label_438200;
        }
    }
    ctx->pc = 0x4381F0u;
label_4381f0:
    // 0x4381f0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x4381f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x4381f4: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x4381f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x4381f8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x4381f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4381fc: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x4381fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_438200:
    // 0x438200: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x438200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x438204: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x438204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x438208: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x438208u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x43820c: 0x17c00059  bnez        $fp, . + 4 + (0x59 << 2)
    ctx->pc = 0x43820Cu;
    {
        const bool branch_taken_0x43820c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x438210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43820Cu;
        // 0x438210: 0xafa60064  sw          $a2, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43820c) {
            ctx->pc = 0x438374u;
            goto label_438374;
        }
    }
    ctx->pc = 0x438214u;
    // 0x438214: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x438214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x438218: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x438218u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x43821c: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x43821Cu;
    {
        const bool branch_taken_0x43821c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x438220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43821Cu;
        // 0x438220: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43821c) {
            ctx->pc = 0x438374u;
            goto label_438374;
        }
    }
    ctx->pc = 0x438224u;
    // 0x438224: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x438224u;
    {
        const bool branch_taken_0x438224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x438228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438224u;
        // 0x438228: 0x3c160059  lui         $s6, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438224) {
            ctx->pc = 0x4382E4u;
            goto label_4382e4;
        }
    }
    ctx->pc = 0x43822Cu;
    // 0x43822c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x43822cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_438230:
    // 0x438230: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x438230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x438234: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x438234u;
    {
        const bool branch_taken_0x438234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x438234) {
            ctx->pc = 0x438238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438234u;
            // 0x438238: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4382B0u;
            goto label_4382b0;
        }
    }
    ctx->pc = 0x43823Cu;
    // 0x43823c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x43823cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438240: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x438240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x438244: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x438244u;
    {
        const bool branch_taken_0x438244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x438244) {
            ctx->pc = 0x438248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438244u;
            // 0x438248: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438290u;
            goto label_438290;
        }
    }
    ctx->pc = 0x43824Cu;
    // 0x43824c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x43824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438250: 0x26c3cea0  addiu       $v1, $s6, -0x3160
    ctx->pc = 0x438250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954656));
    // 0x438254: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x438254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x438258: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x438258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x43825c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x43825cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x438260: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x438260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x438264: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x438264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x438268: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x438268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x43826c: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x43826cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x438270: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x438270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x438274: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438278: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x438278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43827c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x43827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x438280: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x438280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x438284: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x438284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x438288: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x438288u;
    {
        const bool branch_taken_0x438288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438288u;
        // 0x43828c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438288) {
            ctx->pc = 0x4382D4u;
            goto label_4382d4;
        }
    }
    ctx->pc = 0x438290u;
label_438290:
    // 0x438290: 0xc10c190  jal         func_430640
    ctx->pc = 0x438290u;
    SET_GPR_U32(ctx, 31, 0x438298u);
    ctx->pc = 0x438294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438290u;
    // 0x438294: 0x26c5cea0  addiu       $a1, $s6, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x438290u, 0x438298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438298u;
label_438298:
    // 0x438298: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43829c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4382a0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4382a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x4382a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4382a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4382a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4382A8u;
    {
        const bool branch_taken_0x4382a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4382ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4382A8u;
        // 0x4382ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4382a8) {
            ctx->pc = 0x4382D4u;
            goto label_4382d4;
        }
    }
    ctx->pc = 0x4382B0u;
label_4382b0:
    // 0x4382b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4382B0u;
    {
        const bool branch_taken_0x4382b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4382b0) {
            ctx->pc = 0x4382B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4382B0u;
            // 0x4382b4: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4382C4u;
            goto label_4382c4;
        }
    }
    ctx->pc = 0x4382B8u;
    // 0x4382b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4382b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4382bc: 0xa624000e  sh          $a0, 0xE($s1)
    ctx->pc = 0x4382bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x4382c0: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x4382c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_4382c4:
    // 0x4382c4: 0x26c5cea0  addiu       $a1, $s6, -0x3160
    ctx->pc = 0x4382c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954656));
    // 0x4382c8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4382c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4382cc: 0xc10de76  jal         func_4379D8
    ctx->pc = 0x4382CCu;
    SET_GPR_U32(ctx, 31, 0x4382D4u);
    ctx->pc = 0x4382D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4382CCu;
    // 0x4382d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4379D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4379D8u, 0x4382CCu, 0x4382D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4382D4u;
label_4382d4:
    // 0x4382d4: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x4382d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x4382d8: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x4382d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4382dc: 0x5040ffd4  beql        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x4382DCu;
    {
        const bool branch_taken_0x4382dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4382dc) {
            ctx->pc = 0x4382E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4382DCu;
            // 0x4382e0: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_438230;
        }
    }
    ctx->pc = 0x4382E4u;
label_4382e4:
    // 0x4382e4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x4382e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4382e8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x4382e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x4382ec: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x4382ECu;
    {
        const bool branch_taken_0x4382ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4382ec) {
            ctx->pc = 0x4382F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4382ECu;
            // 0x4382f0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438350u;
            goto label_438350;
        }
    }
    ctx->pc = 0x4382F4u;
    // 0x4382f4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4382f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4382f8: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x4382f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4382fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4382FCu;
    {
        const bool branch_taken_0x4382fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4382FCu;
        // 0x438300: 0x26c5cea0  addiu       $a1, $s6, -0x3160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4382fc) {
            ctx->pc = 0x43832Cu;
            goto label_43832c;
        }
    }
    ctx->pc = 0x438304u;
    // 0x438304: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x438304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438308: 0xc10c190  jal         func_430640
    ctx->pc = 0x438308u;
    SET_GPR_U32(ctx, 31, 0x438310u);
    ctx->pc = 0x43830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438308u;
    // 0x43830c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x438308u, 0x438310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438310u;
label_438310:
    // 0x438310: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438314: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x438314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438318: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x438318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x43831c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x43831cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x438320: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x438320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x438324: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x438324u;
    {
        const bool branch_taken_0x438324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438324u;
        // 0x438328: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438324) {
            ctx->pc = 0x438374u;
            goto label_438374;
        }
    }
    ctx->pc = 0x43832Cu;
label_43832c:
    // 0x43832c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x43832cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438330: 0xc10c190  jal         func_430640
    ctx->pc = 0x438330u;
    SET_GPR_U32(ctx, 31, 0x438338u);
    ctx->pc = 0x438334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438330u;
    // 0x438334: 0x26c5cea0  addiu       $a1, $s6, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x438330u, 0x438338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438338u;
label_438338:
    // 0x438338: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43833c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438340: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x438340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x438344: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x438344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x438348: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x438348u;
    {
        const bool branch_taken_0x438348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438348u;
        // 0x43834c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438348) {
            ctx->pc = 0x438374u;
            goto label_438374;
        }
    }
    ctx->pc = 0x438350u;
label_438350:
    // 0x438350: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x438350u;
    {
        const bool branch_taken_0x438350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x438350) {
            ctx->pc = 0x438354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438350u;
            // 0x438354: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438364u;
            goto label_438364;
        }
    }
    ctx->pc = 0x438358u;
    // 0x438358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x438358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43835c: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x43835cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x438360: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x438360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_438364:
    // 0x438364: 0x26c5cea0  addiu       $a1, $s6, -0x3160
    ctx->pc = 0x438364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954656));
    // 0x438368: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x438368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43836c: 0xc10de76  jal         func_4379D8
    ctx->pc = 0x43836Cu;
    SET_GPR_U32(ctx, 31, 0x438374u);
    ctx->pc = 0x438370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43836Cu;
    // 0x438370: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4379D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4379D8u, 0x43836Cu, 0x438374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438374u;
label_438374:
    // 0x438374: 0x83a20040  lb          $v0, 0x40($sp)
    ctx->pc = 0x438374u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x438378: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x438378u;
    {
        const bool branch_taken_0x438378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438378u;
        // 0x43837c: 0x93a30040  lbu         $v1, 0x40($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438378) {
            ctx->pc = 0x4383F0u;
            goto label_4383f0;
        }
    }
    ctx->pc = 0x438380u;
    // 0x438380: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x438380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x438384: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x438384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x438388: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x438388u;
    {
        const bool branch_taken_0x438388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x438388) {
            ctx->pc = 0x43838Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438388u;
            // 0x43838c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4383C4u;
            goto label_4383c4;
        }
    }
    ctx->pc = 0x438390u;
    // 0x438390: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x438390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438394: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x438394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x438398: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x438398u;
    {
        const bool branch_taken_0x438398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x438398) {
            ctx->pc = 0x43839Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438398u;
            // 0x43839c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4383BCu;
            goto label_4383bc;
        }
    }
    ctx->pc = 0x4383A0u;
    // 0x4383a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4383a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4383a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x4383a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4383a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4383a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4383ac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4383acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4383b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4383b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4383b4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4383B4u;
    {
        const bool branch_taken_0x4383b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4383B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4383B4u;
        // 0x4383b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4383b4) {
            ctx->pc = 0x438444u;
            goto label_438444;
        }
    }
    ctx->pc = 0x4383BCu;
label_4383bc:
    // 0x4383bc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x4383BCu;
    {
        const bool branch_taken_0x4383bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4383C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4383BCu;
        // 0x4383c0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4383bc) {
            ctx->pc = 0x438454u;
            goto label_438454;
        }
    }
    ctx->pc = 0x4383C4u;
label_4383c4:
    // 0x4383c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4383C4u;
    {
        const bool branch_taken_0x4383c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4383c4) {
            ctx->pc = 0x4383C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4383C4u;
            // 0x4383c8: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4383D8u;
            goto label_4383d8;
        }
    }
    ctx->pc = 0x4383CCu;
    // 0x4383cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4383ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4383d0: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x4383d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4383d4: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x4383d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_4383d8:
    // 0x4383d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4383d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4383dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4383dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4383e0: 0xc10de76  jal         func_4379D8
    ctx->pc = 0x4383E0u;
    SET_GPR_U32(ctx, 31, 0x4383E8u);
    ctx->pc = 0x4383E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4383E0u;
    // 0x4383e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4379D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4379D8u, 0x4383E0u, 0x4383E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4383E8u;
label_4383e8:
    // 0x4383e8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x4383E8u;
    {
        const bool branch_taken_0x4383e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4383ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4383E8u;
        // 0x4383ec: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4383e8) {
            ctx->pc = 0x4384A0u;
            goto label_4384a0;
        }
    }
    ctx->pc = 0x4383F0u;
label_4383f0:
    // 0x4383f0: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x4383f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x4383f4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x4383F4u;
    {
        const bool branch_taken_0x4383f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4383F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4383F4u;
        // 0x4383f8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4383f4) {
            ctx->pc = 0x43849Cu;
            goto label_43849c;
        }
    }
    ctx->pc = 0x4383FCu;
    // 0x4383fc: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x4383fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x438400: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x438400u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x438404: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x438404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x438408: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x438408u;
    {
        const bool branch_taken_0x438408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438408u;
        // 0x43840c: 0xa3b50031  sb          $s5, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438408) {
            ctx->pc = 0x438474u;
            goto label_438474;
        }
    }
    ctx->pc = 0x438410u;
    // 0x438410: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x438410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438414: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x438414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x438418: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x438418u;
    {
        const bool branch_taken_0x438418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x438418) {
            ctx->pc = 0x43841Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438418u;
            // 0x43841c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438450u;
            goto label_438450;
        }
    }
    ctx->pc = 0x438420u;
    // 0x438420: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x438420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438424: 0x83a50030  lb          $a1, 0x30($sp)
    ctx->pc = 0x438424u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x438428: 0x83a60031  lb          $a2, 0x31($sp)
    ctx->pc = 0x438428u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 49)));
    // 0x43842c: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x43842cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x438430: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x438430u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x438434: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438438: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x438438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43843c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x43843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x438440: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x438440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_438444:
    // 0x438444: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x438444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x438448: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x438448u;
    {
        const bool branch_taken_0x438448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438448u;
        // 0x43844c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438448) {
            ctx->pc = 0x43849Cu;
            goto label_43849c;
        }
    }
    ctx->pc = 0x438450u;
label_438450:
    // 0x438450: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x438450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_438454:
    // 0x438454: 0xc10c190  jal         func_430640
    ctx->pc = 0x438454u;
    SET_GPR_U32(ctx, 31, 0x43845Cu);
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x438454u, 0x43845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43845Cu;
label_43845c:
    // 0x43845c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x43845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438460: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x438460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438464: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x438464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x438468: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x438468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x43846c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x43846Cu;
    {
        const bool branch_taken_0x43846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43846Cu;
        // 0x438470: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43846c) {
            ctx->pc = 0x43849Cu;
            goto label_43849c;
        }
    }
    ctx->pc = 0x438474u;
label_438474:
    // 0x438474: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x438474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x438478: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x438478u;
    {
        const bool branch_taken_0x438478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x438478) {
            ctx->pc = 0x43847Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438478u;
            // 0x43847c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43848Cu;
            goto label_43848c;
        }
    }
    ctx->pc = 0x438480u;
    // 0x438480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x438480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x438484: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x438484u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x438488: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x438488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_43848c:
    // 0x43848c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x43848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x438490: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x438490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x438494: 0xc10de76  jal         func_4379D8
    ctx->pc = 0x438494u;
    SET_GPR_U32(ctx, 31, 0x43849Cu);
    ctx->pc = 0x438498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438494u;
    // 0x438498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4379D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4379D8u, 0x438494u, 0x43849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43849Cu;
label_43849c:
    // 0x43849c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x43849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4384a0:
    // 0x4384a0: 0x17c2005b  bne         $fp, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x4384A0u;
    {
        const bool branch_taken_0x4384a0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x4384A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4384A0u;
        // 0x4384a4: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4384a0) {
            ctx->pc = 0x438610u;
            goto label_438610;
        }
    }
    ctx->pc = 0x4384A8u;
    // 0x4384a8: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x4384a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4384ac: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x4384acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x4384b0: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x4384b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4384b4: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x4384B4u;
    {
        const bool branch_taken_0x4384b4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4384B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4384B4u;
        // 0x4384b8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4384b4) {
            ctx->pc = 0x43860Cu;
            goto label_43860c;
        }
    }
    ctx->pc = 0x4384BCu;
    // 0x4384bc: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x4384BCu;
    {
        const bool branch_taken_0x4384bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4384C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4384BCu;
        // 0x4384c0: 0x3c120059  lui         $s2, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4384bc) {
            ctx->pc = 0x43857Cu;
            goto label_43857c;
        }
    }
    ctx->pc = 0x4384C4u;
    // 0x4384c4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x4384c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4384c8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x4384c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4384cc: 0x0  nop
    ctx->pc = 0x4384ccu;
    // NOP
label_4384d0:
    // 0x4384d0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x4384d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x4384d4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x4384D4u;
    {
        const bool branch_taken_0x4384d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4384d4) {
            ctx->pc = 0x4384D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4384D4u;
            // 0x4384d8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438550u;
            goto label_438550;
        }
    }
    ctx->pc = 0x4384DCu;
    // 0x4384dc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4384dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4384e0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x4384e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4384e4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x4384E4u;
    {
        const bool branch_taken_0x4384e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4384e4) {
            ctx->pc = 0x4384E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4384E4u;
            // 0x4384e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438530u;
            goto label_438530;
        }
    }
    ctx->pc = 0x4384ECu;
    // 0x4384ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4384ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4384f0: 0x2646ceb0  addiu       $a2, $s2, -0x3150
    ctx->pc = 0x4384f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954672));
    // 0x4384f4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x4384f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4384f8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x4384f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4384fc: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x4384fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x438500: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x438500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x438504: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x438504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x438508: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x438508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x43850c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x43850cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x438510: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x438510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x438514: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438518: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x438518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43851c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x43851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x438520: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x438520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x438524: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x438524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x438528: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x438528u;
    {
        const bool branch_taken_0x438528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438528u;
        // 0x43852c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438528) {
            ctx->pc = 0x43856Cu;
            goto label_43856c;
        }
    }
    ctx->pc = 0x438530u;
label_438530:
    // 0x438530: 0xc10c190  jal         func_430640
    ctx->pc = 0x438530u;
    SET_GPR_U32(ctx, 31, 0x438538u);
    ctx->pc = 0x438534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438530u;
    // 0x438534: 0x2645ceb0  addiu       $a1, $s2, -0x3150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x438530u, 0x438538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438538u;
label_438538:
    // 0x438538: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43853c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438540: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x438540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x438544: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x438544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x438548: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x438548u;
    {
        const bool branch_taken_0x438548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438548u;
        // 0x43854c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438548) {
            ctx->pc = 0x43856Cu;
            goto label_43856c;
        }
    }
    ctx->pc = 0x438550u;
label_438550:
    // 0x438550: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x438550u;
    {
        const bool branch_taken_0x438550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x438550) {
            ctx->pc = 0x438554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438550u;
            // 0x438554: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438558u;
            goto label_438558;
        }
    }
    ctx->pc = 0x438558u;
label_438558:
    // 0x438558: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x438558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x43855c: 0x2645ceb0  addiu       $a1, $s2, -0x3150
    ctx->pc = 0x43855cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954672));
    // 0x438560: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x438560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x438564: 0xc10de76  jal         func_4379D8
    ctx->pc = 0x438564u;
    SET_GPR_U32(ctx, 31, 0x43856Cu);
    ctx->pc = 0x438568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438564u;
    // 0x438568: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4379D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4379D8u, 0x438564u, 0x43856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43856Cu;
label_43856c:
    // 0x43856c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x43856cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x438570: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x438570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x438574: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x438574u;
    {
        const bool branch_taken_0x438574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x438574) {
            ctx->pc = 0x438578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438574u;
            // 0x438578: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4384D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4384d0;
        }
    }
    ctx->pc = 0x43857Cu;
label_43857c:
    // 0x43857c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x43857cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x438580: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x438580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x438584: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x438584u;
    {
        const bool branch_taken_0x438584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x438584) {
            ctx->pc = 0x438588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438584u;
            // 0x438588: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4385E8u;
            goto label_4385e8;
        }
    }
    ctx->pc = 0x43858Cu;
    // 0x43858c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x43858cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438590: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x438590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x438594: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x438594u;
    {
        const bool branch_taken_0x438594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438594u;
        // 0x438598: 0x2645ceb0  addiu       $a1, $s2, -0x3150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438594) {
            ctx->pc = 0x4385C4u;
            goto label_4385c4;
        }
    }
    ctx->pc = 0x43859Cu;
    // 0x43859c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x43859cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4385a0: 0xc10c190  jal         func_430640
    ctx->pc = 0x4385A0u;
    SET_GPR_U32(ctx, 31, 0x4385A8u);
    ctx->pc = 0x4385A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4385A0u;
    // 0x4385a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4385A0u, 0x4385A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4385A8u;
label_4385a8:
    // 0x4385a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4385a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4385ac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4385acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4385b0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4385b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4385b4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4385b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4385b8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4385b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4385bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4385BCu;
    {
        const bool branch_taken_0x4385bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4385C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4385BCu;
        // 0x4385c0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4385bc) {
            ctx->pc = 0x43860Cu;
            goto label_43860c;
        }
    }
    ctx->pc = 0x4385C4u;
label_4385c4:
    // 0x4385c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4385c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4385c8: 0xc10c190  jal         func_430640
    ctx->pc = 0x4385C8u;
    SET_GPR_U32(ctx, 31, 0x4385D0u);
    ctx->pc = 0x4385CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4385C8u;
    // 0x4385cc: 0x2645ceb0  addiu       $a1, $s2, -0x3150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4385C8u, 0x4385D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4385D0u;
label_4385d0:
    // 0x4385d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4385d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4385d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4385d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4385d8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4385d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x4385dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4385dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4385e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4385E0u;
    {
        const bool branch_taken_0x4385e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4385E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4385E0u;
        // 0x4385e4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4385e0) {
            ctx->pc = 0x43860Cu;
            goto label_43860c;
        }
    }
    ctx->pc = 0x4385E8u;
label_4385e8:
    // 0x4385e8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4385E8u;
    {
        const bool branch_taken_0x4385e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4385e8) {
            ctx->pc = 0x4385ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4385E8u;
            // 0x4385ec: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4385FCu;
            goto label_4385fc;
        }
    }
    ctx->pc = 0x4385F0u;
    // 0x4385f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4385f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4385f4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x4385f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4385f8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x4385f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_4385fc:
    // 0x4385fc: 0x2645ceb0  addiu       $a1, $s2, -0x3150
    ctx->pc = 0x4385fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954672));
    // 0x438600: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x438600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438604: 0xc10de76  jal         func_4379D8
    ctx->pc = 0x438604u;
    SET_GPR_U32(ctx, 31, 0x43860Cu);
    ctx->pc = 0x438608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438604u;
    // 0x438608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4379D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4379D8u, 0x438604u, 0x43860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43860Cu;
label_43860c:
    // 0x43860c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x43860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_438610:
    // 0x438610: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x438610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x438614: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x438614u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x438618: 0x1a000054  blez        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x438618u;
    {
        const bool branch_taken_0x438618 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x43861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438618u;
        // 0x43861c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x438618) {
            ctx->pc = 0x43876Cu;
            goto label_43876c;
        }
    }
    ctx->pc = 0x438620u;
    // 0x438620: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x438620u;
    {
        const bool branch_taken_0x438620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x438624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438620u;
        // 0x438624: 0x3c120059  lui         $s2, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438620) {
            ctx->pc = 0x4386DCu;
            goto label_4386dc;
        }
    }
    ctx->pc = 0x438628u;
    // 0x438628: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x438628u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43862c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x43862cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_438630:
    // 0x438630: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x438630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x438634: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x438634u;
    {
        const bool branch_taken_0x438634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x438634) {
            ctx->pc = 0x438638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438634u;
            // 0x438638: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4386B0u;
            goto label_4386b0;
        }
    }
    ctx->pc = 0x43863Cu;
    // 0x43863c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x43863cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438640: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x438640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x438644: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x438644u;
    {
        const bool branch_taken_0x438644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x438644) {
            ctx->pc = 0x438648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438644u;
            // 0x438648: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438690u;
            goto label_438690;
        }
    }
    ctx->pc = 0x43864Cu;
    // 0x43864c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x43864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438650: 0x2643ceb0  addiu       $v1, $s2, -0x3150
    ctx->pc = 0x438650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954672));
    // 0x438654: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x438654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x438658: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x438658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x43865c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x43865cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x438660: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x438660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x438664: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x438664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x438668: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x438668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x43866c: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x43866cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x438670: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x438670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x438674: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438678: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x438678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43867c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x43867cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x438680: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x438680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x438684: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x438684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x438688: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x438688u;
    {
        const bool branch_taken_0x438688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438688u;
        // 0x43868c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438688) {
            ctx->pc = 0x4386CCu;
            goto label_4386cc;
        }
    }
    ctx->pc = 0x438690u;
label_438690:
    // 0x438690: 0xc10c190  jal         func_430640
    ctx->pc = 0x438690u;
    SET_GPR_U32(ctx, 31, 0x438698u);
    ctx->pc = 0x438694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438690u;
    // 0x438694: 0x2645ceb0  addiu       $a1, $s2, -0x3150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x438690u, 0x438698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438698u;
label_438698:
    // 0x438698: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43869c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4386a0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4386a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x4386a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4386a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4386a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4386A8u;
    {
        const bool branch_taken_0x4386a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4386ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4386A8u;
        // 0x4386ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4386a8) {
            ctx->pc = 0x4386CCu;
            goto label_4386cc;
        }
    }
    ctx->pc = 0x4386B0u;
label_4386b0:
    // 0x4386b0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4386B0u;
    {
        const bool branch_taken_0x4386b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4386b0) {
            ctx->pc = 0x4386B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4386B0u;
            // 0x4386b4: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4386B8u;
            goto label_4386b8;
        }
    }
    ctx->pc = 0x4386B8u;
label_4386b8:
    // 0x4386b8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x4386b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x4386bc: 0x2645ceb0  addiu       $a1, $s2, -0x3150
    ctx->pc = 0x4386bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954672));
    // 0x4386c0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4386c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4386c4: 0xc10de76  jal         func_4379D8
    ctx->pc = 0x4386C4u;
    SET_GPR_U32(ctx, 31, 0x4386CCu);
    ctx->pc = 0x4386C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4386C4u;
    // 0x4386c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4379D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4379D8u, 0x4386C4u, 0x4386CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4386CCu;
label_4386cc:
    // 0x4386cc: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x4386ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x4386d0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x4386d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4386d4: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x4386D4u;
    {
        const bool branch_taken_0x4386d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4386d4) {
            ctx->pc = 0x4386D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4386D4u;
            // 0x4386d8: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_438630;
        }
    }
    ctx->pc = 0x4386DCu;
label_4386dc:
    // 0x4386dc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x4386dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4386e0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x4386e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x4386e4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x4386E4u;
    {
        const bool branch_taken_0x4386e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4386e4) {
            ctx->pc = 0x4386E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4386E4u;
            // 0x4386e8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438748u;
            goto label_438748;
        }
    }
    ctx->pc = 0x4386ECu;
    // 0x4386ec: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4386ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4386f0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x4386f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4386f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4386F4u;
    {
        const bool branch_taken_0x4386f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4386F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4386F4u;
        // 0x4386f8: 0x2645ceb0  addiu       $a1, $s2, -0x3150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4386f4) {
            ctx->pc = 0x438724u;
            goto label_438724;
        }
    }
    ctx->pc = 0x4386FCu;
    // 0x4386fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4386fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438700: 0xc10c190  jal         func_430640
    ctx->pc = 0x438700u;
    SET_GPR_U32(ctx, 31, 0x438708u);
    ctx->pc = 0x438704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438700u;
    // 0x438704: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x438700u, 0x438708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438708u;
label_438708:
    // 0x438708: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43870c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438710: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x438710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x438714: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x438714u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x438718: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x438718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x43871c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x43871Cu;
    {
        const bool branch_taken_0x43871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43871Cu;
        // 0x438720: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43871c) {
            ctx->pc = 0x43876Cu;
            goto label_43876c;
        }
    }
    ctx->pc = 0x438724u;
label_438724:
    // 0x438724: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x438724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438728: 0xc10c190  jal         func_430640
    ctx->pc = 0x438728u;
    SET_GPR_U32(ctx, 31, 0x438730u);
    ctx->pc = 0x43872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438728u;
    // 0x43872c: 0x2645ceb0  addiu       $a1, $s2, -0x3150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x438728u, 0x438730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438730u;
label_438730:
    // 0x438730: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438734: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x438734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438738: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x438738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x43873c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43873cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x438740: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x438740u;
    {
        const bool branch_taken_0x438740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438740u;
        // 0x438744: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438740) {
            ctx->pc = 0x43876Cu;
            goto label_43876c;
        }
    }
    ctx->pc = 0x438748u;
label_438748:
    // 0x438748: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x438748u;
    {
        const bool branch_taken_0x438748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x438748) {
            ctx->pc = 0x43874Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438748u;
            // 0x43874c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43875Cu;
            goto label_43875c;
        }
    }
    ctx->pc = 0x438750u;
    // 0x438750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x438750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x438754: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x438754u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x438758: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x438758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_43875c:
    // 0x43875c: 0x2645ceb0  addiu       $a1, $s2, -0x3150
    ctx->pc = 0x43875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954672));
    // 0x438760: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x438760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438764: 0xc10de76  jal         func_4379D8
    ctx->pc = 0x438764u;
    SET_GPR_U32(ctx, 31, 0x43876Cu);
    ctx->pc = 0x438768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438764u;
    // 0x438768: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4379D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4379D8u, 0x438764u, 0x43876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43876Cu;
label_43876c:
    // 0x43876c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x43876cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x438770: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x438770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x438774: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x438774u;
    {
        const bool branch_taken_0x438774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438774u;
        // 0x438778: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438774) {
            ctx->pc = 0x4387D8u;
            goto label_4387d8;
        }
    }
    ctx->pc = 0x43877Cu;
    // 0x43877c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x43877cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438780: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x438780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x438784: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x438784u;
    {
        const bool branch_taken_0x438784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438784u;
        // 0x438788: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438784) {
            ctx->pc = 0x4387B4u;
            goto label_4387b4;
        }
    }
    ctx->pc = 0x43878Cu;
    // 0x43878c: 0xc10c190  jal         func_430640
    ctx->pc = 0x43878Cu;
    SET_GPR_U32(ctx, 31, 0x438794u);
    ctx->pc = 0x438790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43878Cu;
    // 0x438790: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x43878Cu, 0x438794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438794u;
label_438794:
    // 0x438794: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x438794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x438798: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43879c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4387a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4387a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4387a4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4387a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4387a8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4387a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4387ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4387ACu;
    {
        const bool branch_taken_0x4387ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4387B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4387ACu;
        // 0x4387b0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4387ac) {
            ctx->pc = 0x438800u;
            goto label_438800;
        }
    }
    ctx->pc = 0x4387B4u;
label_4387b4:
    // 0x4387b4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4387b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4387b8: 0xc10c190  jal         func_430640
    ctx->pc = 0x4387B8u;
    SET_GPR_U32(ctx, 31, 0x4387C0u);
    ctx->pc = 0x4387BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4387B8u;
    // 0x4387bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4387B8u, 0x4387C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4387C0u;
label_4387c0:
    // 0x4387c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4387c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4387c4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4387c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4387c8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4387c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x4387cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4387ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4387d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4387D0u;
    {
        const bool branch_taken_0x4387d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4387D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4387D0u;
        // 0x4387d4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4387d0) {
            ctx->pc = 0x438800u;
            goto label_438800;
        }
    }
    ctx->pc = 0x4387D8u;
label_4387d8:
    // 0x4387d8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4387d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4387dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4387DCu;
    {
        const bool branch_taken_0x4387dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4387dc) {
            ctx->pc = 0x4387E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4387DCu;
            // 0x4387e0: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4387F0u;
            goto label_4387f0;
        }
    }
    ctx->pc = 0x4387E4u;
    // 0x4387e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4387e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4387e8: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x4387e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4387ec: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x4387ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_4387f0:
    // 0x4387f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4387f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4387f4: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x4387f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x4387f8: 0xc10de76  jal         func_4379D8
    ctx->pc = 0x4387F8u;
    SET_GPR_U32(ctx, 31, 0x438800u);
    ctx->pc = 0x4387FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4387F8u;
    // 0x4387fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4379D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4379D8u, 0x4387F8u, 0x438800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438800u;
label_438800:
    // 0x438800: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x438800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x438804: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x438804u;
    {
        const bool branch_taken_0x438804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x438808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438804u;
        // 0x438808: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438804) {
            ctx->pc = 0x43896Cu;
            goto label_43896c;
        }
    }
    ctx->pc = 0x43880Cu;
    // 0x43880c: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x43880cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x438810: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x438810u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x438814: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x438814u;
    {
        const bool branch_taken_0x438814 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x438818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438814u;
        // 0x438818: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x438814) {
            ctx->pc = 0x43896Cu;
            goto label_43896c;
        }
    }
    ctx->pc = 0x43881Cu;
    // 0x43881c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x43881Cu;
    {
        const bool branch_taken_0x43881c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x438820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43881Cu;
        // 0x438820: 0x3c160059  lui         $s6, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43881c) {
            ctx->pc = 0x4388DCu;
            goto label_4388dc;
        }
    }
    ctx->pc = 0x438824u;
    // 0x438824: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x438824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x438828: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x438828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x43882c: 0x0  nop
    ctx->pc = 0x43882cu;
    // NOP
label_438830:
    // 0x438830: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x438830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x438834: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x438834u;
    {
        const bool branch_taken_0x438834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x438834) {
            ctx->pc = 0x438838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438834u;
            // 0x438838: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4388B0u;
            goto label_4388b0;
        }
    }
    ctx->pc = 0x43883Cu;
    // 0x43883c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x43883cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438840: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x438840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x438844: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x438844u;
    {
        const bool branch_taken_0x438844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x438844) {
            ctx->pc = 0x438848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438844u;
            // 0x438848: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438890u;
            goto label_438890;
        }
    }
    ctx->pc = 0x43884Cu;
    // 0x43884c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x43884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438850: 0x26c6cea0  addiu       $a2, $s6, -0x3160
    ctx->pc = 0x438850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954656));
    // 0x438854: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x438854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x438858: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x438858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x43885c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x43885cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x438860: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x438860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x438864: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x438864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x438868: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x438868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x43886c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x43886cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x438870: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x438870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x438874: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438878: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x438878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43887c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x43887cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x438880: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x438880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x438884: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x438884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x438888: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x438888u;
    {
        const bool branch_taken_0x438888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438888u;
        // 0x43888c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438888) {
            ctx->pc = 0x4388CCu;
            goto label_4388cc;
        }
    }
    ctx->pc = 0x438890u;
label_438890:
    // 0x438890: 0xc10c190  jal         func_430640
    ctx->pc = 0x438890u;
    SET_GPR_U32(ctx, 31, 0x438898u);
    ctx->pc = 0x438894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438890u;
    // 0x438894: 0x26c5cea0  addiu       $a1, $s6, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x438890u, 0x438898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438898u;
label_438898:
    // 0x438898: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43889c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43889cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4388a0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4388a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x4388a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4388a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4388a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4388A8u;
    {
        const bool branch_taken_0x4388a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4388ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4388A8u;
        // 0x4388ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4388a8) {
            ctx->pc = 0x4388CCu;
            goto label_4388cc;
        }
    }
    ctx->pc = 0x4388B0u;
label_4388b0:
    // 0x4388b0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4388B0u;
    {
        const bool branch_taken_0x4388b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4388b0) {
            ctx->pc = 0x4388B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4388B0u;
            // 0x4388b4: 0xa632000e  sh          $s2, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4388B8u;
            goto label_4388b8;
        }
    }
    ctx->pc = 0x4388B8u;
label_4388b8:
    // 0x4388b8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x4388b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x4388bc: 0x26c5cea0  addiu       $a1, $s6, -0x3160
    ctx->pc = 0x4388bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954656));
    // 0x4388c0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4388c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4388c4: 0xc10de76  jal         func_4379D8
    ctx->pc = 0x4388C4u;
    SET_GPR_U32(ctx, 31, 0x4388CCu);
    ctx->pc = 0x4388C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4388C4u;
    // 0x4388c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4379D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4379D8u, 0x4388C4u, 0x4388CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4388CCu;
label_4388cc:
    // 0x4388cc: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x4388ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x4388d0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x4388d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4388d4: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x4388D4u;
    {
        const bool branch_taken_0x4388d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4388d4) {
            ctx->pc = 0x4388D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4388D4u;
            // 0x4388d8: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_438830;
        }
    }
    ctx->pc = 0x4388DCu;
label_4388dc:
    // 0x4388dc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x4388dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4388e0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x4388e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x4388e4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x4388E4u;
    {
        const bool branch_taken_0x4388e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4388e4) {
            ctx->pc = 0x4388E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4388E4u;
            // 0x4388e8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438948u;
            goto label_438948;
        }
    }
    ctx->pc = 0x4388ECu;
    // 0x4388ec: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4388ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4388f0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x4388f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4388f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4388F4u;
    {
        const bool branch_taken_0x4388f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4388F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4388F4u;
        // 0x4388f8: 0x26c5cea0  addiu       $a1, $s6, -0x3160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4388f4) {
            ctx->pc = 0x438924u;
            goto label_438924;
        }
    }
    ctx->pc = 0x4388FCu;
    // 0x4388fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4388fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438900: 0xc10c190  jal         func_430640
    ctx->pc = 0x438900u;
    SET_GPR_U32(ctx, 31, 0x438908u);
    ctx->pc = 0x438904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438900u;
    // 0x438904: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x438900u, 0x438908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438908u;
label_438908:
    // 0x438908: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43890c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x43890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438910: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x438910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x438914: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x438914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x438918: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x438918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x43891c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x43891Cu;
    {
        const bool branch_taken_0x43891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43891Cu;
        // 0x438920: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43891c) {
            ctx->pc = 0x43896Cu;
            goto label_43896c;
        }
    }
    ctx->pc = 0x438924u;
label_438924:
    // 0x438924: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x438924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438928: 0xc10c190  jal         func_430640
    ctx->pc = 0x438928u;
    SET_GPR_U32(ctx, 31, 0x438930u);
    ctx->pc = 0x43892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438928u;
    // 0x43892c: 0x26c5cea0  addiu       $a1, $s6, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x438928u, 0x438930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438930u;
label_438930:
    // 0x438930: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x438930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x438934: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x438934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x438938: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x438938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x43893c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43893cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x438940: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x438940u;
    {
        const bool branch_taken_0x438940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438940u;
        // 0x438944: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438940) {
            ctx->pc = 0x43896Cu;
            goto label_43896c;
        }
    }
    ctx->pc = 0x438948u;
label_438948:
    // 0x438948: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x438948u;
    {
        const bool branch_taken_0x438948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x438948) {
            ctx->pc = 0x43894Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438948u;
            // 0x43894c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43895Cu;
            goto label_43895c;
        }
    }
    ctx->pc = 0x438950u;
    // 0x438950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x438950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x438954: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x438954u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x438958: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x438958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_43895c:
    // 0x43895c: 0x26c5cea0  addiu       $a1, $s6, -0x3160
    ctx->pc = 0x43895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954656));
    // 0x438960: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x438960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438964: 0xc10de76  jal         func_4379D8
    ctx->pc = 0x438964u;
    SET_GPR_U32(ctx, 31, 0x43896Cu);
    ctx->pc = 0x438968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438964u;
    // 0x438968: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4379D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4379D8u, 0x438964u, 0x43896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43896Cu;
label_43896c:
    // 0x43896c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x43896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x438970: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x438970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x438974: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x438974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x438978: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x438978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43897c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x43897cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x438980: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x438980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x438984: 0x1000fc6a  b           . + 4 + (-0x396 << 2)
    ctx->pc = 0x438984u;
    {
        const bool branch_taken_0x438984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438984u;
        // 0x438988: 0xafa50050  sw          $a1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438984) {
            ctx->pc = 0x437B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437b30;
        }
    }
    ctx->pc = 0x43898Cu;
label_43898c:
    // 0x43898c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x43898cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_438990:
    // 0x438990: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x438990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x438994: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x438994u;
    {
        const bool branch_taken_0x438994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x438998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438994u;
        // 0x438998: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438994) {
            ctx->pc = 0x4389B4u;
            goto label_4389b4;
        }
    }
    ctx->pc = 0x43899Cu;
    // 0x43899c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x43899cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x4389a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4389a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4389a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4389a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4389a8: 0xc10de76  jal         func_4379D8
    ctx->pc = 0x4389A8u;
    SET_GPR_U32(ctx, 31, 0x4389B0u);
    ctx->pc = 0x4389ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4389A8u;
    // 0x4389ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4379D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4379D8u, 0x4389A8u, 0x4389B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4389B0u;
label_4389b0:
    // 0x4389b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4389b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4389b4:
    // 0x4389b4: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x4389b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4389b8: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x4389b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4389bc: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x4389bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x4389c0: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x4389c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x4389c4: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x4389c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4389c8: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x4389c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4389cc: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x4389ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4389d0: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x4389d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4389d4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4389d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4389d8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4389d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4389dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4389DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4389E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4389DCu;
        // 0x4389e0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4389DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4389E4u;
    // 0x4389e4: 0x0  nop
    ctx->pc = 0x4389e4u;
    // NOP
    ctx->pc = 0x4389e8u;
}
