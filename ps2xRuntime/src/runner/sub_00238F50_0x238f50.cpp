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

// Function: sub_00238F50
// Address: 0x238f50 - 0x239080
void sub_00238F50_0x238f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238F50_0x238f50");
#endif

    switch (ctx->pc) {
        case 0x238f50u: goto label_238f50;
        case 0x238f54u: goto label_238f54;
        case 0x238f58u: goto label_238f58;
        case 0x238f5cu: goto label_238f5c;
        case 0x238f60u: goto label_238f60;
        case 0x238f64u: goto label_238f64;
        case 0x238f68u: goto label_238f68;
        case 0x238f6cu: goto label_238f6c;
        case 0x238f70u: goto label_238f70;
        case 0x238f74u: goto label_238f74;
        case 0x238f78u: goto label_238f78;
        case 0x238f7cu: goto label_238f7c;
        case 0x238f80u: goto label_238f80;
        case 0x238f84u: goto label_238f84;
        case 0x238f88u: goto label_238f88;
        case 0x238f8cu: goto label_238f8c;
        case 0x238f90u: goto label_238f90;
        case 0x238f94u: goto label_238f94;
        case 0x238f98u: goto label_238f98;
        case 0x238f9cu: goto label_238f9c;
        case 0x238fa0u: goto label_238fa0;
        case 0x238fa4u: goto label_238fa4;
        case 0x238fa8u: goto label_238fa8;
        case 0x238facu: goto label_238fac;
        case 0x238fb0u: goto label_238fb0;
        case 0x238fb4u: goto label_238fb4;
        case 0x238fb8u: goto label_238fb8;
        case 0x238fbcu: goto label_238fbc;
        case 0x238fc0u: goto label_238fc0;
        case 0x238fc4u: goto label_238fc4;
        case 0x238fc8u: goto label_238fc8;
        case 0x238fccu: goto label_238fcc;
        case 0x238fd0u: goto label_238fd0;
        case 0x238fd4u: goto label_238fd4;
        case 0x238fd8u: goto label_238fd8;
        case 0x238fdcu: goto label_238fdc;
        case 0x238fe0u: goto label_238fe0;
        case 0x238fe4u: goto label_238fe4;
        case 0x238fe8u: goto label_238fe8;
        case 0x238fecu: goto label_238fec;
        case 0x238ff0u: goto label_238ff0;
        case 0x238ff4u: goto label_238ff4;
        case 0x238ff8u: goto label_238ff8;
        case 0x238ffcu: goto label_238ffc;
        case 0x239000u: goto label_239000;
        case 0x239004u: goto label_239004;
        case 0x239008u: goto label_239008;
        case 0x23900cu: goto label_23900c;
        case 0x239010u: goto label_239010;
        case 0x239014u: goto label_239014;
        case 0x239018u: goto label_239018;
        case 0x23901cu: goto label_23901c;
        case 0x239020u: goto label_239020;
        case 0x239024u: goto label_239024;
        case 0x239028u: goto label_239028;
        case 0x23902cu: goto label_23902c;
        case 0x239030u: goto label_239030;
        case 0x239034u: goto label_239034;
        case 0x239038u: goto label_239038;
        case 0x23903cu: goto label_23903c;
        case 0x239040u: goto label_239040;
        case 0x239044u: goto label_239044;
        case 0x239048u: goto label_239048;
        case 0x23904cu: goto label_23904c;
        case 0x239050u: goto label_239050;
        case 0x239054u: goto label_239054;
        case 0x239058u: goto label_239058;
        case 0x23905cu: goto label_23905c;
        case 0x239060u: goto label_239060;
        case 0x239064u: goto label_239064;
        case 0x239068u: goto label_239068;
        case 0x23906cu: goto label_23906c;
        case 0x239070u: goto label_239070;
        case 0x239074u: goto label_239074;
        case 0x239078u: goto label_239078;
        case 0x23907cu: goto label_23907c;
        default: break;
    }

    ctx->pc = 0x238f50u;

label_238f50:
    // 0x238f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x238f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_238f54:
    // 0x238f54: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x238f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_238f58:
    // 0x238f58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x238f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_238f5c:
    // 0x238f5c: 0x8c456870  lw          $a1, 0x6870($v0)
    ctx->pc = 0x238f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26736)));
label_238f60:
    // 0x238f60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x238f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238f64:
    // 0x238f64: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x238f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_238f68:
    // 0x238f68: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x238f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_238f6c:
    // 0x238f6c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x238f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_238f70:
    // 0x238f70: 0x10a0003b  beqz        $a1, . + 4 + (0x3B << 2)
label_238f74:
    if (ctx->pc == 0x238F74u) {
        ctx->pc = 0x238F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F70u;
        // 0x238f74: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F78u;
        goto label_238f78;
    }
    ctx->pc = 0x238F70u;
    {
        const bool branch_taken_0x238f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F70u;
        // 0x238f74: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f70) {
            ctx->pc = 0x239060u;
            goto label_239060;
        }
    }
    ctx->pc = 0x238F78u;
label_238f78:
    // 0x238f78: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
label_238f7c:
    if (ctx->pc == 0x238F7Cu) {
        ctx->pc = 0x238F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F78u;
        // 0x238f7c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F80u;
        goto label_238f80;
    }
    ctx->pc = 0x238F78u;
    {
        const bool branch_taken_0x238f78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F78u;
        // 0x238f7c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f78) {
            ctx->pc = 0x239060u;
            goto label_239060;
        }
    }
    ctx->pc = 0x238F80u;
label_238f80:
    // 0x238f80: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x238f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_238f84:
    // 0x238f84: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x238f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_238f88:
    // 0x238f88: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x238f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_238f8c:
    // 0x238f8c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x238f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_238f90:
    // 0x238f90: 0x40f809  jalr        $v0
label_238f94:
    if (ctx->pc == 0x238F94u) {
        ctx->pc = 0x238F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F90u;
        // 0x238f94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238F98u;
        goto label_238f98;
    }
    ctx->pc = 0x238F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238F98u);
        ctx->pc = 0x238F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F90u;
        // 0x238f94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238F90u, 0x238F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238F98u;
label_238f98:
    // 0x238f98: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_238f9c:
    if (ctx->pc == 0x238F9Cu) {
        ctx->pc = 0x238F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F98u;
        // 0x238f9c: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FA0u;
        goto label_238fa0;
    }
    ctx->pc = 0x238F98u;
    {
        const bool branch_taken_0x238f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F98u;
        // 0x238f9c: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f98) {
            ctx->pc = 0x239060u;
            goto label_239060;
        }
    }
    ctx->pc = 0x238FA0u;
label_238fa0:
    // 0x238fa0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x238fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_238fa4:
    // 0x238fa4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x238fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_238fa8:
    // 0x238fa8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x238fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_238fac:
    // 0x238fac: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x238facu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_238fb0:
    // 0x238fb0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x238fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_238fb4:
    // 0x238fb4: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x238fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_238fb8:
    // 0x238fb8: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x238fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_238fbc:
    // 0x238fbc: 0x40f809  jalr        $v0
label_238fc0:
    if (ctx->pc == 0x238FC0u) {
        ctx->pc = 0x238FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FBCu;
        // 0x238fc0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FC4u;
        goto label_238fc4;
    }
    ctx->pc = 0x238FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238FC4u);
        ctx->pc = 0x238FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FBCu;
        // 0x238fc0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238FBCu, 0x238FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238FC4u;
label_238fc4:
    // 0x238fc4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x238fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_238fc8:
    // 0x238fc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x238fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_238fcc:
    // 0x238fcc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x238fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_238fd0:
    // 0x238fd0: 0x40f809  jalr        $v0
label_238fd4:
    if (ctx->pc == 0x238FD4u) {
        ctx->pc = 0x238FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FD0u;
        // 0x238fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FD8u;
        goto label_238fd8;
    }
    ctx->pc = 0x238FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238FD8u);
        ctx->pc = 0x238FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FD0u;
        // 0x238fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238FD0u, 0x238FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238FD8u;
label_238fd8:
    // 0x238fd8: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x238fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_238fdc:
    // 0x238fdc: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x238fdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_238fe0:
    // 0x238fe0: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x238fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
label_238fe4:
    // 0x238fe4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x238fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_238fe8:
    // 0x238fe8: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x238fe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_238fec:
    // 0x238fec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x238fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_238ff0:
    // 0x238ff0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x238ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_238ff4:
    // 0x238ff4: 0x40f809  jalr        $v0
label_238ff8:
    if (ctx->pc == 0x238FF8u) {
        ctx->pc = 0x238FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FF4u;
        // 0x238ff8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238FFCu;
        goto label_238ffc;
    }
    ctx->pc = 0x238FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238FFCu);
        ctx->pc = 0x238FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238FF4u;
        // 0x238ff8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238FF4u, 0x238FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238FFCu;
label_238ffc:
    // 0x238ffc: 0x8e702b04  lw          $s0, 0x2B04($s3)
    ctx->pc = 0x238ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_239000:
    // 0x239000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x239000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239004:
    // 0x239004: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x239004u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239008:
    // 0x239008: 0x86220058  lh          $v0, 0x58($s1)
    ctx->pc = 0x239008u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_23900c:
    // 0x23900c: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x23900cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_239010:
    // 0x239010: 0xc089c18  jal         func_227060
label_239014:
    if (ctx->pc == 0x239014u) {
        ctx->pc = 0x239014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239010u;
        // 0x239014: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239018u;
        goto label_239018;
    }
    ctx->pc = 0x239010u;
    SET_GPR_U32(ctx, 31, 0x239018u);
    ctx->pc = 0x239014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239010u;
    // 0x239014: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x239010u, 0x239018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239018u;
label_239018:
    // 0x239018: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x239018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23901c:
    // 0x23901c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x23901cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_239020:
    // 0x239020: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x239020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_239024:
    // 0x239024: 0xa0f809  jalr        $a1
label_239028:
    if (ctx->pc == 0x239028u) {
        ctx->pc = 0x239028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239024u;
        // 0x239028: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23902Cu;
        goto label_23902c;
    }
    ctx->pc = 0x239024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23902Cu);
        ctx->pc = 0x239028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239024u;
        // 0x239028: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239024u, 0x23902Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23902Cu;
label_23902c:
    // 0x23902c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x23902cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_239030:
    // 0x239030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239034:
    // 0x239034: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x239034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_239038:
    // 0x239038: 0x40f809  jalr        $v0
label_23903c:
    if (ctx->pc == 0x23903Cu) {
        ctx->pc = 0x23903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239038u;
        // 0x23903c: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239040u;
        goto label_239040;
    }
    ctx->pc = 0x239038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239040u);
        ctx->pc = 0x23903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239038u;
        // 0x23903c: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239038u, 0x239040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239040u;
label_239040:
    // 0x239040: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x239040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_239044:
    // 0x239044: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x239044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_239048:
    // 0x239048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x239048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23904c:
    // 0x23904c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x23904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_239050:
    // 0x239050: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x239050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_239054:
    // 0x239054: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x239054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_239058:
    // 0x239058: 0x60f809  jalr        $v1
label_23905c:
    if (ctx->pc == 0x23905Cu) {
        ctx->pc = 0x23905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239058u;
        // 0x23905c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239060u;
        goto label_239060;
    }
    ctx->pc = 0x239058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x239060u);
        ctx->pc = 0x23905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239058u;
        // 0x23905c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239058u, 0x239060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x239060u;
label_239060:
    // 0x239060: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x239060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_239064:
    // 0x239064: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x239064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_239068:
    // 0x239068: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x239068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23906c:
    // 0x23906c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x23906cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239070:
    // 0x239070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239074:
    // 0x239074: 0x3e00008  jr          $ra
label_239078:
    if (ctx->pc == 0x239078u) {
        ctx->pc = 0x239078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239074u;
        // 0x239078: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23907Cu;
        goto label_23907c;
    }
    ctx->pc = 0x239074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239074u;
        // 0x239078: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23907Cu;
label_23907c:
    // 0x23907c: 0x0  nop
    ctx->pc = 0x23907cu;
    // NOP
    ctx->pc = 0x239080u;
}
