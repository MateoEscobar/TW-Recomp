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

// Function: sub_004EDBA8
// Address: 0x4edba8 - 0x4edd20
void sub_004EDBA8_0x4edba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EDBA8_0x4edba8");
#endif

    switch (ctx->pc) {
        case 0x4edba8u: goto label_4edba8;
        case 0x4edbacu: goto label_4edbac;
        case 0x4edbb0u: goto label_4edbb0;
        case 0x4edbb4u: goto label_4edbb4;
        case 0x4edbb8u: goto label_4edbb8;
        case 0x4edbbcu: goto label_4edbbc;
        case 0x4edbc0u: goto label_4edbc0;
        case 0x4edbc4u: goto label_4edbc4;
        case 0x4edbc8u: goto label_4edbc8;
        case 0x4edbccu: goto label_4edbcc;
        case 0x4edbd0u: goto label_4edbd0;
        case 0x4edbd4u: goto label_4edbd4;
        case 0x4edbd8u: goto label_4edbd8;
        case 0x4edbdcu: goto label_4edbdc;
        case 0x4edbe0u: goto label_4edbe0;
        case 0x4edbe4u: goto label_4edbe4;
        case 0x4edbe8u: goto label_4edbe8;
        case 0x4edbecu: goto label_4edbec;
        case 0x4edbf0u: goto label_4edbf0;
        case 0x4edbf4u: goto label_4edbf4;
        case 0x4edbf8u: goto label_4edbf8;
        case 0x4edbfcu: goto label_4edbfc;
        case 0x4edc00u: goto label_4edc00;
        case 0x4edc04u: goto label_4edc04;
        case 0x4edc08u: goto label_4edc08;
        case 0x4edc0cu: goto label_4edc0c;
        case 0x4edc10u: goto label_4edc10;
        case 0x4edc14u: goto label_4edc14;
        case 0x4edc18u: goto label_4edc18;
        case 0x4edc1cu: goto label_4edc1c;
        case 0x4edc20u: goto label_4edc20;
        case 0x4edc24u: goto label_4edc24;
        case 0x4edc28u: goto label_4edc28;
        case 0x4edc2cu: goto label_4edc2c;
        case 0x4edc30u: goto label_4edc30;
        case 0x4edc34u: goto label_4edc34;
        case 0x4edc38u: goto label_4edc38;
        case 0x4edc3cu: goto label_4edc3c;
        case 0x4edc40u: goto label_4edc40;
        case 0x4edc44u: goto label_4edc44;
        case 0x4edc48u: goto label_4edc48;
        case 0x4edc4cu: goto label_4edc4c;
        case 0x4edc50u: goto label_4edc50;
        case 0x4edc54u: goto label_4edc54;
        case 0x4edc58u: goto label_4edc58;
        case 0x4edc5cu: goto label_4edc5c;
        case 0x4edc60u: goto label_4edc60;
        case 0x4edc64u: goto label_4edc64;
        case 0x4edc68u: goto label_4edc68;
        case 0x4edc6cu: goto label_4edc6c;
        case 0x4edc70u: goto label_4edc70;
        case 0x4edc74u: goto label_4edc74;
        case 0x4edc78u: goto label_4edc78;
        case 0x4edc7cu: goto label_4edc7c;
        case 0x4edc80u: goto label_4edc80;
        case 0x4edc84u: goto label_4edc84;
        case 0x4edc88u: goto label_4edc88;
        case 0x4edc8cu: goto label_4edc8c;
        case 0x4edc90u: goto label_4edc90;
        case 0x4edc94u: goto label_4edc94;
        case 0x4edc98u: goto label_4edc98;
        case 0x4edc9cu: goto label_4edc9c;
        case 0x4edca0u: goto label_4edca0;
        case 0x4edca4u: goto label_4edca4;
        case 0x4edca8u: goto label_4edca8;
        case 0x4edcacu: goto label_4edcac;
        case 0x4edcb0u: goto label_4edcb0;
        case 0x4edcb4u: goto label_4edcb4;
        case 0x4edcb8u: goto label_4edcb8;
        case 0x4edcbcu: goto label_4edcbc;
        case 0x4edcc0u: goto label_4edcc0;
        case 0x4edcc4u: goto label_4edcc4;
        case 0x4edcc8u: goto label_4edcc8;
        case 0x4edcccu: goto label_4edccc;
        case 0x4edcd0u: goto label_4edcd0;
        case 0x4edcd4u: goto label_4edcd4;
        case 0x4edcd8u: goto label_4edcd8;
        case 0x4edcdcu: goto label_4edcdc;
        case 0x4edce0u: goto label_4edce0;
        case 0x4edce4u: goto label_4edce4;
        case 0x4edce8u: goto label_4edce8;
        case 0x4edcecu: goto label_4edcec;
        case 0x4edcf0u: goto label_4edcf0;
        case 0x4edcf4u: goto label_4edcf4;
        case 0x4edcf8u: goto label_4edcf8;
        case 0x4edcfcu: goto label_4edcfc;
        case 0x4edd00u: goto label_4edd00;
        case 0x4edd04u: goto label_4edd04;
        case 0x4edd08u: goto label_4edd08;
        case 0x4edd0cu: goto label_4edd0c;
        case 0x4edd10u: goto label_4edd10;
        case 0x4edd14u: goto label_4edd14;
        case 0x4edd18u: goto label_4edd18;
        case 0x4edd1cu: goto label_4edd1c;
        default: break;
    }

    ctx->pc = 0x4edba8u;

label_4edba8:
    // 0x4edba8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x4edba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_4edbac:
    // 0x4edbac: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4edbacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4edbb0:
    // 0x4edbb0: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x4edbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_4edbb4:
    // 0x4edbb4: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x4edbb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4edbb8:
    // 0x4edbb8: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x4edbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_4edbbc:
    // 0x4edbbc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4edbbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4edbc0:
    // 0x4edbc0: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x4edbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_4edbc4:
    // 0x4edbc4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4edbc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4edbc8:
    // 0x4edbc8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x4edbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_4edbcc:
    // 0x4edbcc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x4edbccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4edbd0:
    // 0x4edbd0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x4edbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_4edbd4:
    // 0x4edbd4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4edbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4edbd8:
    // 0x4edbd8: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x4edbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_4edbdc:
    // 0x4edbdc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4edbdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4edbe0:
    // 0x4edbe0: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x4edbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_4edbe4:
    // 0x4edbe4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4edbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4edbe8:
    // 0x4edbe8: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x4edbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_4edbec:
    // 0x4edbec: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4edbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4edbf0:
    // 0x4edbf0: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x4edbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_4edbf4:
    // 0x4edbf4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4edbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4edbf8:
    // 0x4edbf8: 0x0  nop
    ctx->pc = 0x4edbf8u;
    // NOP
label_4edbfc:
    // 0x4edbfc: 0x0  nop
    ctx->pc = 0x4edbfcu;
    // NOP
label_4edc00:
    // 0x4edc00: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
label_4edc04:
    if (ctx->pc == 0x4EDC04u) {
        ctx->pc = 0x4EDC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDC00u;
        // 0x4edc04: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDC08u;
        goto label_4edc08;
    }
    ctx->pc = 0x4EDC00u;
    {
        const bool branch_taken_0x4edc00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4EDC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDC00u;
        // 0x4edc04: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edc00) {
            ctx->pc = 0x4EDBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4edbf0;
        }
    }
    ctx->pc = 0x4EDC08u;
label_4edc08:
    // 0x4edc08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4edc08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4edc0c:
    // 0x4edc0c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4edc0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4edc10:
    // 0x4edc10: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x4edc10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4edc14:
    // 0x4edc14: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x4edc14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4edc18:
    // 0x4edc18: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x4edc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4edc1c:
    // 0x4edc1c: 0x0  nop
    ctx->pc = 0x4edc1cu;
    // NOP
label_4edc20:
    // 0x4edc20: 0xc0e4060  jal         func_390180
label_4edc24:
    if (ctx->pc == 0x4EDC24u) {
        ctx->pc = 0x4EDC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDC20u;
        // 0x4edc24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDC28u;
        goto label_4edc28;
    }
    ctx->pc = 0x4EDC20u;
    SET_GPR_U32(ctx, 31, 0x4EDC28u);
    ctx->pc = 0x4EDC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDC20u;
    // 0x4edc24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4EDC20u, 0x4EDC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDC28u;
label_4edc28:
    // 0x4edc28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4edc28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4edc2c:
    // 0x4edc2c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
label_4edc30:
    if (ctx->pc == 0x4EDC30u) {
        ctx->pc = 0x4EDC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDC2Cu;
        // 0x4edc30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDC34u;
        goto label_4edc34;
    }
    ctx->pc = 0x4EDC2Cu;
    {
        const bool branch_taken_0x4edc2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EDC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDC2Cu;
        // 0x4edc30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edc2c) {
            ctx->pc = 0x4EDC68u;
            goto label_4edc68;
        }
    }
    ctx->pc = 0x4EDC34u;
label_4edc34:
    // 0x4edc34: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4edc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4edc38:
    // 0x4edc38: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4edc38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4edc3c:
    // 0x4edc3c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x4edc3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_4edc40:
    // 0x4edc40: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x4edc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_4edc44:
    // 0x4edc44: 0x40f809  jalr        $v0
label_4edc48:
    if (ctx->pc == 0x4EDC48u) {
        ctx->pc = 0x4EDC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDC44u;
        // 0x4edc48: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDC4Cu;
        goto label_4edc4c;
    }
    ctx->pc = 0x4EDC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EDC4Cu);
        ctx->pc = 0x4EDC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDC44u;
        // 0x4edc48: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EDC44u, 0x4EDC4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EDC4Cu;
label_4edc4c:
    // 0x4edc4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4edc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4edc50:
    // 0x4edc50: 0xc0cdb38  jal         func_336CE0
label_4edc54:
    if (ctx->pc == 0x4EDC54u) {
        ctx->pc = 0x4EDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDC50u;
        // 0x4edc54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDC58u;
        goto label_4edc58;
    }
    ctx->pc = 0x4EDC50u;
    SET_GPR_U32(ctx, 31, 0x4EDC58u);
    ctx->pc = 0x4EDC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDC50u;
    // 0x4edc54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x4EDC50u, 0x4EDC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDC58u;
label_4edc58:
    // 0x4edc58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4edc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4edc5c:
    // 0x4edc5c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x4edc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_4edc60:
    // 0x4edc60: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4edc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4edc64:
    // 0x4edc64: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4edc64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4edc68:
    // 0x4edc68: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4edc68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4edc6c:
    // 0x4edc6c: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x4edc6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_4edc70:
    // 0x4edc70: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_4edc74:
    if (ctx->pc == 0x4EDC74u) {
        ctx->pc = 0x4EDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDC70u;
        // 0x4edc74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDC78u;
        goto label_4edc78;
    }
    ctx->pc = 0x4EDC70u;
    {
        const bool branch_taken_0x4edc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDC70u;
        // 0x4edc74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edc70) {
            ctx->pc = 0x4EDC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4edc20;
        }
    }
    ctx->pc = 0x4EDC78u;
label_4edc78:
    // 0x4edc78: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4edc78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4edc7c:
    // 0x4edc7c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4edc7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4edc80:
    // 0x4edc80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4edc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4edc84:
    // 0x4edc84: 0xc10cff6  jal         func_433FD8
label_4edc88:
    if (ctx->pc == 0x4EDC88u) {
        ctx->pc = 0x4EDC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDC84u;
        // 0x4edc88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDC8Cu;
        goto label_4edc8c;
    }
    ctx->pc = 0x4EDC84u;
    SET_GPR_U32(ctx, 31, 0x4EDC8Cu);
    ctx->pc = 0x4EDC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDC84u;
    // 0x4edc88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433FD8u, 0x4EDC84u, 0x4EDC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDC8Cu;
label_4edc8c:
    // 0x4edc8c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_4edc90:
    if (ctx->pc == 0x4EDC90u) {
        ctx->pc = 0x4EDC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDC8Cu;
        // 0x4edc90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDC94u;
        goto label_4edc94;
    }
    ctx->pc = 0x4EDC8Cu;
    {
        const bool branch_taken_0x4edc8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EDC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDC8Cu;
        // 0x4edc90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edc8c) {
            ctx->pc = 0x4EDCBCu;
            goto label_4edcbc;
        }
    }
    ctx->pc = 0x4EDC94u;
label_4edc94:
    // 0x4edc94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4edc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4edc98:
    // 0x4edc98: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x4edc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_4edc9c:
    // 0x4edc9c: 0x0  nop
    ctx->pc = 0x4edc9cu;
    // NOP
label_4edca0:
    // 0x4edca0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4edca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4edca4:
    // 0x4edca4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4edca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4edca8:
    // 0x4edca8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4edca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_4edcac:
    // 0x4edcac: 0xd3102b  sltu        $v0, $a2, $s3
    ctx->pc = 0x4edcacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_4edcb0:
    // 0x4edcb0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4edcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4edcb4:
    // 0x4edcb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4edcb8:
    if (ctx->pc == 0x4EDCB8u) {
        ctx->pc = 0x4EDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDCB4u;
        // 0x4edcb8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDCBCu;
        goto label_4edcbc;
    }
    ctx->pc = 0x4EDCB4u;
    {
        const bool branch_taken_0x4edcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDCB4u;
        // 0x4edcb8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edcb4) {
            ctx->pc = 0x4EDCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4edca0;
        }
    }
    ctx->pc = 0x4EDCBCu;
label_4edcbc:
    // 0x4edcbc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4edcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4edcc0:
    // 0x4edcc0: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x4edcc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_4edcc4:
    // 0x4edcc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4edcc8:
    if (ctx->pc == 0x4EDCC8u) {
        ctx->pc = 0x4EDCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDCC4u;
        // 0x4edcc8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDCCCu;
        goto label_4edccc;
    }
    ctx->pc = 0x4EDCC4u;
    {
        const bool branch_taken_0x4edcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EDCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDCC4u;
        // 0x4edcc8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edcc4) {
            ctx->pc = 0x4EDCF0u;
            goto label_4edcf0;
        }
    }
    ctx->pc = 0x4EDCCCu;
label_4edccc:
    // 0x4edccc: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x4edcccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_4edcd0:
    // 0x4edcd0: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x4edcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4edcd4:
    // 0x4edcd4: 0x0  nop
    ctx->pc = 0x4edcd4u;
    // NOP
label_4edcd8:
    // 0x4edcd8: 0x8cc2bd30  lw          $v0, -0x42D0($a2)
    ctx->pc = 0x4edcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950192)));
label_4edcdc:
    // 0x4edcdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4edcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4edce0:
    // 0x4edce0: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x4edce0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_4edce4:
    // 0x4edce4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4edce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4edce8:
    // 0x4edce8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_4edcec:
    if (ctx->pc == 0x4EDCECu) {
        ctx->pc = 0x4EDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDCE8u;
        // 0x4edcec: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDCF0u;
        goto label_4edcf0;
    }
    ctx->pc = 0x4EDCE8u;
    {
        const bool branch_taken_0x4edce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDCE8u;
        // 0x4edcec: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4edce8) {
            ctx->pc = 0x4EDCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4edcd8;
        }
    }
    ctx->pc = 0x4EDCF0u;
label_4edcf0:
    // 0x4edcf0: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x4edcf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_4edcf4:
    // 0x4edcf4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x4edcf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_4edcf8:
    // 0x4edcf8: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x4edcf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_4edcfc:
    // 0x4edcfc: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x4edcfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4edd00:
    // 0x4edd00: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x4edd00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4edd04:
    // 0x4edd04: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x4edd04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4edd08:
    // 0x4edd08: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x4edd08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4edd0c:
    // 0x4edd0c: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x4edd0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4edd10:
    // 0x4edd10: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4edd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4edd14:
    // 0x4edd14: 0x3e00008  jr          $ra
label_4edd18:
    if (ctx->pc == 0x4EDD18u) {
        ctx->pc = 0x4EDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDD14u;
        // 0x4edd18: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EDD1Cu;
        goto label_4edd1c;
    }
    ctx->pc = 0x4EDD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EDD14u;
        // 0x4edd18: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EDD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EDD1Cu;
label_4edd1c:
    // 0x4edd1c: 0x0  nop
    ctx->pc = 0x4edd1cu;
    // NOP
    ctx->pc = 0x4edd20u;
}
