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

// Function: sub_003FCE60
// Address: 0x3fce60 - 0x3fd0c0
void sub_003FCE60_0x3fce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCE60_0x3fce60");
#endif

    switch (ctx->pc) {
        case 0x3fce60u: goto label_3fce60;
        case 0x3fce64u: goto label_3fce64;
        case 0x3fce68u: goto label_3fce68;
        case 0x3fce6cu: goto label_3fce6c;
        case 0x3fce70u: goto label_3fce70;
        case 0x3fce74u: goto label_3fce74;
        case 0x3fce78u: goto label_3fce78;
        case 0x3fce7cu: goto label_3fce7c;
        case 0x3fce80u: goto label_3fce80;
        case 0x3fce84u: goto label_3fce84;
        case 0x3fce88u: goto label_3fce88;
        case 0x3fce8cu: goto label_3fce8c;
        case 0x3fce90u: goto label_3fce90;
        case 0x3fce94u: goto label_3fce94;
        case 0x3fce98u: goto label_3fce98;
        case 0x3fce9cu: goto label_3fce9c;
        case 0x3fcea0u: goto label_3fcea0;
        case 0x3fcea4u: goto label_3fcea4;
        case 0x3fcea8u: goto label_3fcea8;
        case 0x3fceacu: goto label_3fceac;
        case 0x3fceb0u: goto label_3fceb0;
        case 0x3fceb4u: goto label_3fceb4;
        case 0x3fceb8u: goto label_3fceb8;
        case 0x3fcebcu: goto label_3fcebc;
        case 0x3fcec0u: goto label_3fcec0;
        case 0x3fcec4u: goto label_3fcec4;
        case 0x3fcec8u: goto label_3fcec8;
        case 0x3fceccu: goto label_3fcecc;
        case 0x3fced0u: goto label_3fced0;
        case 0x3fced4u: goto label_3fced4;
        case 0x3fced8u: goto label_3fced8;
        case 0x3fcedcu: goto label_3fcedc;
        case 0x3fcee0u: goto label_3fcee0;
        case 0x3fcee4u: goto label_3fcee4;
        case 0x3fcee8u: goto label_3fcee8;
        case 0x3fceecu: goto label_3fceec;
        case 0x3fcef0u: goto label_3fcef0;
        case 0x3fcef4u: goto label_3fcef4;
        case 0x3fcef8u: goto label_3fcef8;
        case 0x3fcefcu: goto label_3fcefc;
        case 0x3fcf00u: goto label_3fcf00;
        case 0x3fcf04u: goto label_3fcf04;
        case 0x3fcf08u: goto label_3fcf08;
        case 0x3fcf0cu: goto label_3fcf0c;
        case 0x3fcf10u: goto label_3fcf10;
        case 0x3fcf14u: goto label_3fcf14;
        case 0x3fcf18u: goto label_3fcf18;
        case 0x3fcf1cu: goto label_3fcf1c;
        case 0x3fcf20u: goto label_3fcf20;
        case 0x3fcf24u: goto label_3fcf24;
        case 0x3fcf28u: goto label_3fcf28;
        case 0x3fcf2cu: goto label_3fcf2c;
        case 0x3fcf30u: goto label_3fcf30;
        case 0x3fcf34u: goto label_3fcf34;
        case 0x3fcf38u: goto label_3fcf38;
        case 0x3fcf3cu: goto label_3fcf3c;
        case 0x3fcf40u: goto label_3fcf40;
        case 0x3fcf44u: goto label_3fcf44;
        case 0x3fcf48u: goto label_3fcf48;
        case 0x3fcf4cu: goto label_3fcf4c;
        case 0x3fcf50u: goto label_3fcf50;
        case 0x3fcf54u: goto label_3fcf54;
        case 0x3fcf58u: goto label_3fcf58;
        case 0x3fcf5cu: goto label_3fcf5c;
        case 0x3fcf60u: goto label_3fcf60;
        case 0x3fcf64u: goto label_3fcf64;
        case 0x3fcf68u: goto label_3fcf68;
        case 0x3fcf6cu: goto label_3fcf6c;
        case 0x3fcf70u: goto label_3fcf70;
        case 0x3fcf74u: goto label_3fcf74;
        case 0x3fcf78u: goto label_3fcf78;
        case 0x3fcf7cu: goto label_3fcf7c;
        case 0x3fcf80u: goto label_3fcf80;
        case 0x3fcf84u: goto label_3fcf84;
        case 0x3fcf88u: goto label_3fcf88;
        case 0x3fcf8cu: goto label_3fcf8c;
        case 0x3fcf90u: goto label_3fcf90;
        case 0x3fcf94u: goto label_3fcf94;
        case 0x3fcf98u: goto label_3fcf98;
        case 0x3fcf9cu: goto label_3fcf9c;
        case 0x3fcfa0u: goto label_3fcfa0;
        case 0x3fcfa4u: goto label_3fcfa4;
        case 0x3fcfa8u: goto label_3fcfa8;
        case 0x3fcfacu: goto label_3fcfac;
        case 0x3fcfb0u: goto label_3fcfb0;
        case 0x3fcfb4u: goto label_3fcfb4;
        case 0x3fcfb8u: goto label_3fcfb8;
        case 0x3fcfbcu: goto label_3fcfbc;
        case 0x3fcfc0u: goto label_3fcfc0;
        case 0x3fcfc4u: goto label_3fcfc4;
        case 0x3fcfc8u: goto label_3fcfc8;
        case 0x3fcfccu: goto label_3fcfcc;
        case 0x3fcfd0u: goto label_3fcfd0;
        case 0x3fcfd4u: goto label_3fcfd4;
        case 0x3fcfd8u: goto label_3fcfd8;
        case 0x3fcfdcu: goto label_3fcfdc;
        case 0x3fcfe0u: goto label_3fcfe0;
        case 0x3fcfe4u: goto label_3fcfe4;
        case 0x3fcfe8u: goto label_3fcfe8;
        case 0x3fcfecu: goto label_3fcfec;
        case 0x3fcff0u: goto label_3fcff0;
        case 0x3fcff4u: goto label_3fcff4;
        case 0x3fcff8u: goto label_3fcff8;
        case 0x3fcffcu: goto label_3fcffc;
        case 0x3fd000u: goto label_3fd000;
        case 0x3fd004u: goto label_3fd004;
        case 0x3fd008u: goto label_3fd008;
        case 0x3fd00cu: goto label_3fd00c;
        case 0x3fd010u: goto label_3fd010;
        case 0x3fd014u: goto label_3fd014;
        case 0x3fd018u: goto label_3fd018;
        case 0x3fd01cu: goto label_3fd01c;
        case 0x3fd020u: goto label_3fd020;
        case 0x3fd024u: goto label_3fd024;
        case 0x3fd028u: goto label_3fd028;
        case 0x3fd02cu: goto label_3fd02c;
        case 0x3fd030u: goto label_3fd030;
        case 0x3fd034u: goto label_3fd034;
        case 0x3fd038u: goto label_3fd038;
        case 0x3fd03cu: goto label_3fd03c;
        case 0x3fd040u: goto label_3fd040;
        case 0x3fd044u: goto label_3fd044;
        case 0x3fd048u: goto label_3fd048;
        case 0x3fd04cu: goto label_3fd04c;
        case 0x3fd050u: goto label_3fd050;
        case 0x3fd054u: goto label_3fd054;
        case 0x3fd058u: goto label_3fd058;
        case 0x3fd05cu: goto label_3fd05c;
        case 0x3fd060u: goto label_3fd060;
        case 0x3fd064u: goto label_3fd064;
        case 0x3fd068u: goto label_3fd068;
        case 0x3fd06cu: goto label_3fd06c;
        case 0x3fd070u: goto label_3fd070;
        case 0x3fd074u: goto label_3fd074;
        case 0x3fd078u: goto label_3fd078;
        case 0x3fd07cu: goto label_3fd07c;
        case 0x3fd080u: goto label_3fd080;
        case 0x3fd084u: goto label_3fd084;
        case 0x3fd088u: goto label_3fd088;
        case 0x3fd08cu: goto label_3fd08c;
        case 0x3fd090u: goto label_3fd090;
        case 0x3fd094u: goto label_3fd094;
        case 0x3fd098u: goto label_3fd098;
        case 0x3fd09cu: goto label_3fd09c;
        case 0x3fd0a0u: goto label_3fd0a0;
        case 0x3fd0a4u: goto label_3fd0a4;
        case 0x3fd0a8u: goto label_3fd0a8;
        case 0x3fd0acu: goto label_3fd0ac;
        case 0x3fd0b0u: goto label_3fd0b0;
        case 0x3fd0b4u: goto label_3fd0b4;
        case 0x3fd0b8u: goto label_3fd0b8;
        case 0x3fd0bcu: goto label_3fd0bc;
        default: break;
    }

    ctx->pc = 0x3fce60u;

label_3fce60:
    // 0x3fce60: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x3fce60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_3fce64:
    // 0x3fce64: 0x7fb20480  sq          $s2, 0x480($sp)
    ctx->pc = 0x3fce64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 18));
label_3fce68:
    // 0x3fce68: 0x7fb30470  sq          $s3, 0x470($sp)
    ctx->pc = 0x3fce68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 19));
label_3fce6c:
    // 0x3fce6c: 0x7fb004a0  sq          $s0, 0x4A0($sp)
    ctx->pc = 0x3fce6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 16));
label_3fce70:
    // 0x3fce70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3fce70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fce74:
    // 0x3fce74: 0x7fb10490  sq          $s1, 0x490($sp)
    ctx->pc = 0x3fce74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 17));
label_3fce78:
    // 0x3fce78: 0x7fb40460  sq          $s4, 0x460($sp)
    ctx->pc = 0x3fce78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 20));
label_3fce7c:
    // 0x3fce7c: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x3fce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
label_3fce80:
    // 0x3fce80: 0xe7b404b0  swc1        $f20, 0x4B0($sp)
    ctx->pc = 0x3fce80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
label_3fce84:
    // 0x3fce84: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3fce84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3fce88:
    // 0x3fce88: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fce88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fce8c:
    // 0x3fce8c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fce90:
    // 0x3fce90: 0x40f809  jalr        $v0
label_3fce94:
    if (ctx->pc == 0x3FCE94u) {
        ctx->pc = 0x3FCE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCE90u;
        // 0x3fce94: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCE98u;
        goto label_3fce98;
    }
    ctx->pc = 0x3FCE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FCE98u);
        ctx->pc = 0x3FCE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCE90u;
        // 0x3fce94: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCE90u, 0x3FCE98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FCE98u;
label_3fce98:
    // 0x3fce98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3fce98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fce9c:
    // 0x3fce9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fce9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fcea0:
    // 0x3fcea0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3fcea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3fcea4:
    // 0x3fcea4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3fcea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3fcea8:
    // 0x3fcea8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3fcea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3fceac:
    // 0x3fceac: 0x0  nop
    ctx->pc = 0x3fceacu;
    // NOP
label_3fceb0:
    // 0x3fceb0: 0x0  nop
    ctx->pc = 0x3fceb0u;
    // NOP
label_3fceb4:
    // 0x3fceb4: 0x0  nop
    ctx->pc = 0x3fceb4u;
    // NOP
label_3fceb8:
    // 0x3fceb8: 0x0  nop
    ctx->pc = 0x3fceb8u;
    // NOP
label_3fcebc:
    // 0x3fcebc: 0x0  nop
    ctx->pc = 0x3fcebcu;
    // NOP
label_3fcec0:
    // 0x3fcec0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3fcec4:
    if (ctx->pc == 0x3FCEC4u) {
        ctx->pc = 0x3FCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCEC0u;
        // 0x3fcec4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCEC8u;
        goto label_3fcec8;
    }
    ctx->pc = 0x3FCEC0u;
    {
        const bool branch_taken_0x3fcec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCEC0u;
        // 0x3fcec4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcec0) {
            ctx->pc = 0x3FCEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fceb0;
        }
    }
    ctx->pc = 0x3FCEC8u;
label_3fcec8:
    // 0x3fcec8: 0xc138ddc  jal         func_4E3770
label_3fcecc:
    if (ctx->pc == 0x3FCECCu) {
        ctx->pc = 0x3FCED0u;
        goto label_3fced0;
    }
    ctx->pc = 0x3FCEC8u;
    SET_GPR_U32(ctx, 31, 0x3FCED0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3FCEC8u, 0x3FCED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCED0u;
label_3fced0:
    // 0x3fced0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fced4:
    // 0x3fced4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fced4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fced8:
    // 0x3fced8: 0x1462006f  bne         $v1, $v0, . + 4 + (0x6F << 2)
label_3fcedc:
    if (ctx->pc == 0x3FCEDCu) {
        ctx->pc = 0x3FCEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCED8u;
        // 0x3fcedc: 0x7bb004a0  lq          $s0, 0x4A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCEE0u;
        goto label_3fcee0;
    }
    ctx->pc = 0x3FCED8u;
    {
        const bool branch_taken_0x3fced8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FCEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCED8u;
        // 0x3fcedc: 0x7bb004a0  lq          $s0, 0x4A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fced8) {
            ctx->pc = 0x3FD098u;
            goto label_3fd098;
        }
    }
    ctx->pc = 0x3FCEE0u;
label_3fcee0:
    // 0x3fcee0: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x3fcee0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_3fcee4:
    // 0x3fcee4: 0x8e91489c  lw          $s1, 0x489C($s4)
    ctx->pc = 0x3fcee4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3fcee8:
    // 0x3fcee8: 0xc136ad6  jal         func_4DAB58
label_3fceec:
    if (ctx->pc == 0x3FCEECu) {
        ctx->pc = 0x3FCEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCEE8u;
        // 0x3fceec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCEF0u;
        goto label_3fcef0;
    }
    ctx->pc = 0x3FCEE8u;
    SET_GPR_U32(ctx, 31, 0x3FCEF0u);
    ctx->pc = 0x3FCEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCEE8u;
    // 0x3fceec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x3FCEE8u, 0x3FCEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCEF0u;
label_3fcef0:
    // 0x3fcef0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fcef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fcef4:
    // 0x3fcef4: 0xc136ad4  jal         func_4DAB50
label_3fcef8:
    if (ctx->pc == 0x3FCEF8u) {
        ctx->pc = 0x3FCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCEF4u;
        // 0x3fcef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCEFCu;
        goto label_3fcefc;
    }
    ctx->pc = 0x3FCEF4u;
    SET_GPR_U32(ctx, 31, 0x3FCEFCu);
    ctx->pc = 0x3FCEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCEF4u;
    // 0x3fcef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x3FCEF4u, 0x3FCEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCEFCu;
label_3fcefc:
    // 0x3fcefc: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x3fcefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_3fcf00:
    // 0x3fcf00: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x3fcf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_3fcf04:
    // 0x3fcf04: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3fcf04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3fcf08:
    // 0x3fcf08: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3fcf08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3fcf0c:
    // 0x3fcf0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3fcf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3fcf10:
    // 0x3fcf10: 0x5444000d  bnel        $v0, $a0, . + 4 + (0xD << 2)
label_3fcf14:
    if (ctx->pc == 0x3FCF14u) {
        ctx->pc = 0x3FCF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF10u;
        // 0x3fcf14: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCF18u;
        goto label_3fcf18;
    }
    ctx->pc = 0x3FCF10u;
    {
        const bool branch_taken_0x3fcf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3fcf10) {
            ctx->pc = 0x3FCF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCF10u;
            // 0x3fcf14: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCF48u;
            goto label_3fcf48;
        }
    }
    ctx->pc = 0x3FCF18u;
label_3fcf18:
    // 0x3fcf18: 0x8e82489c  lw          $v0, 0x489C($s4)
    ctx->pc = 0x3fcf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_3fcf1c:
    // 0x3fcf1c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3fcf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fcf20:
    // 0x3fcf20: 0x8443033a  lh          $v1, 0x33A($v0)
    ctx->pc = 0x3fcf20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 826)));
label_3fcf24:
    // 0x3fcf24: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
label_3fcf28:
    if (ctx->pc == 0x3FCF28u) {
        ctx->pc = 0x3FCF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF24u;
        // 0x3fcf28: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCF2Cu;
        goto label_3fcf2c;
    }
    ctx->pc = 0x3FCF24u;
    {
        const bool branch_taken_0x3fcf24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3fcf24) {
            ctx->pc = 0x3FCF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCF24u;
            // 0x3fcf28: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCF48u;
            goto label_3fcf48;
        }
    }
    ctx->pc = 0x3FCF2Cu;
label_3fcf2c:
    // 0x3fcf2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3fcf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3fcf30:
    // 0x3fcf30: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3fcf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3fcf34:
    // 0x3fcf34: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3fcf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3fcf38:
    // 0x3fcf38: 0xc0440c6  jal         func_110318
label_3fcf3c:
    if (ctx->pc == 0x3FCF3Cu) {
        ctx->pc = 0x3FCF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF38u;
        // 0x3fcf3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCF40u;
        goto label_3fcf40;
    }
    ctx->pc = 0x3FCF38u;
    SET_GPR_U32(ctx, 31, 0x3FCF40u);
    ctx->pc = 0x3FCF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCF38u;
    // 0x3fcf3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3FCF38u, 0x3FCF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCF40u;
label_3fcf40:
    // 0x3fcf40: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3fcf40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3fcf44:
    // 0x3fcf44: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3fcf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fcf48:
    // 0x3fcf48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fcf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fcf4c:
    // 0x3fcf4c: 0x14620052  bne         $v1, $v0, . + 4 + (0x52 << 2)
label_3fcf50:
    if (ctx->pc == 0x3FCF50u) {
        ctx->pc = 0x3FCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF4Cu;
        // 0x3fcf50: 0x7bb004a0  lq          $s0, 0x4A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCF54u;
        goto label_3fcf54;
    }
    ctx->pc = 0x3FCF4Cu;
    {
        const bool branch_taken_0x3fcf4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF4Cu;
        // 0x3fcf50: 0x7bb004a0  lq          $s0, 0x4A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcf4c) {
            ctx->pc = 0x3FD098u;
            goto label_3fd098;
        }
    }
    ctx->pc = 0x3FCF54u;
label_3fcf54:
    // 0x3fcf54: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3fcf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3fcf58:
    // 0x3fcf58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fcf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fcf5c:
    // 0x3fcf5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fcf5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fcf60:
    // 0x3fcf60: 0x0  nop
    ctx->pc = 0x3fcf60u;
    // NOP
label_3fcf64:
    // 0x3fcf64: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3fcf64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fcf68:
    // 0x3fcf68: 0x0  nop
    ctx->pc = 0x3fcf68u;
    // NOP
label_3fcf6c:
    // 0x3fcf6c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_3fcf70:
    if (ctx->pc == 0x3FCF70u) {
        ctx->pc = 0x3FCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF6Cu;
        // 0x3fcf70: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCF74u;
        goto label_3fcf74;
    }
    ctx->pc = 0x3FCF6Cu;
    {
        const bool branch_taken_0x3fcf6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF6Cu;
        // 0x3fcf70: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcf6c) {
            ctx->pc = 0x3FCFACu;
            goto label_3fcfac;
        }
    }
    ctx->pc = 0x3FCF74u;
label_3fcf74:
    // 0x3fcf74: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x3fcf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_3fcf78:
    // 0x3fcf78: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x3fcf78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_3fcf7c:
    // 0x3fcf7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3fcf7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3fcf80:
    // 0x3fcf80: 0x0  nop
    ctx->pc = 0x3fcf80u;
    // NOP
label_3fcf84:
    // 0x3fcf84: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3fcf84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3fcf88:
    // 0x3fcf88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3fcf88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fcf8c:
    // 0x3fcf8c: 0x0  nop
    ctx->pc = 0x3fcf8cu;
    // NOP
label_3fcf90:
    // 0x3fcf90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3fcf94:
    if (ctx->pc == 0x3FCF94u) {
        ctx->pc = 0x3FCF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF90u;
        // 0x3fcf94: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCF98u;
        goto label_3fcf98;
    }
    ctx->pc = 0x3FCF90u;
    {
        const bool branch_taken_0x3fcf90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FCF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCF90u;
        // 0x3fcf94: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcf90) {
            ctx->pc = 0x3FCF9Cu;
            goto label_3fcf9c;
        }
    }
    ctx->pc = 0x3FCF98u;
label_3fcf98:
    // 0x3fcf98: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x3fcf98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3fcf9c:
    // 0x3fcf9c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x3fcf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_3fcfa0:
    // 0x3fcfa0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3fcfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3fcfa4:
    // 0x3fcfa4: 0xc043fca  jal         func_10FF28
label_3fcfa8:
    if (ctx->pc == 0x3FCFA8u) {
        ctx->pc = 0x3FCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCFA4u;
        // 0x3fcfa8: 0xc64c0008  lwc1        $f12, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCFACu;
        goto label_3fcfac;
    }
    ctx->pc = 0x3FCFA4u;
    SET_GPR_U32(ctx, 31, 0x3FCFACu);
    ctx->pc = 0x3FCFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCFA4u;
    // 0x3fcfa8: 0xc64c0008  lwc1        $f12, 0x8($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF28u, 0x3FCFA4u, 0x3FCFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCFACu;
label_3fcfac:
    // 0x3fcfac: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x3fcfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3fcfb0:
    // 0x3fcfb0: 0xc0e8f5c  jal         func_3A3D70
label_3fcfb4:
    if (ctx->pc == 0x3FCFB4u) {
        ctx->pc = 0x3FCFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCFB0u;
        // 0x3fcfb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FCFB8u;
        goto label_3fcfb8;
    }
    ctx->pc = 0x3FCFB0u;
    SET_GPR_U32(ctx, 31, 0x3FCFB8u);
    ctx->pc = 0x3FCFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FCFB0u;
    // 0x3fcfb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3FCFB0u, 0x3FCFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FCFB8u;
label_3fcfb8:
    // 0x3fcfb8: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x3fcfb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3fcfbc:
    // 0x3fcfbc: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3fcfbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3fcfc0:
    // 0x3fcfc0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3fcfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3fcfc4:
    // 0x3fcfc4: 0x7ba30420  lq          $v1, 0x420($sp)
    ctx->pc = 0x3fcfc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3fcfc8:
    // 0x3fcfc8: 0x24937420  addiu       $s3, $a0, 0x7420
    ctx->pc = 0x3fcfc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 29728));
label_3fcfcc:
    // 0x3fcfcc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3fcfccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fcfd0:
    // 0x3fcfd0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3fcfd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3fcfd4:
    // 0x3fcfd4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3fcfd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3fcfd8:
    // 0x3fcfd8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3fcfd8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3fcfdc:
    // 0x3fcfdc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3fcfdcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3fcfe0:
    // 0x3fcfe0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fcfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fcfe4:
    // 0x3fcfe4: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3fcfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3fcfe8:
    // 0x3fcfe8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3fcfe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3fcfec:
    // 0x3fcfec: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3fcfecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fcff0:
    // 0x3fcff0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3fcff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fcff4:
    // 0x3fcff4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3fcff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fcff8:
    // 0x3fcff8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3fcff8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3fcffc:
    // 0x3fcffc: 0x4a0003bf  vwaitq
    ctx->pc = 0x3fcffcu;
    // VWAITQ (Q already resolved in this runtime)
label_3fd000:
    // 0x3fd000: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3fd000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3fd004:
    // 0x3fd004: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3fd004u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3fd008:
    // 0x3fd008: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3fd008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3fd00c:
    // 0x3fd00c: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3fd00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3fd010:
    // 0x3fd010: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x3fd010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3fd014:
    // 0x3fd014: 0xc044374  jal         func_110DD0
label_3fd018:
    if (ctx->pc == 0x3FD018u) {
        ctx->pc = 0x3FD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD014u;
        // 0x3fd018: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD01Cu;
        goto label_3fd01c;
    }
    ctx->pc = 0x3FD014u;
    SET_GPR_U32(ctx, 31, 0x3FD01Cu);
    ctx->pc = 0x3FD018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD014u;
    // 0x3fd018: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DD0u, 0x3FD014u, 0x3FD01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD01Cu;
label_3fd01c:
    // 0x3fd01c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3fd01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3fd020:
    // 0x3fd020: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3fd020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3fd024:
    // 0x3fd024: 0x0  nop
    ctx->pc = 0x3fd024u;
    // NOP
label_3fd028:
    // 0x3fd028: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3fd028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3fd02c:
    // 0x3fd02c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3fd02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3fd030:
    // 0x3fd030: 0x0  nop
    ctx->pc = 0x3fd030u;
    // NOP
label_3fd034:
    // 0x3fd034: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_3fd038:
    if (ctx->pc == 0x3FD038u) {
        ctx->pc = 0x3FD038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD034u;
        // 0x3fd038: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD03Cu;
        goto label_3fd03c;
    }
    ctx->pc = 0x3FD034u;
    {
        const bool branch_taken_0x3fd034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3FD038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD034u;
        // 0x3fd038: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd034) {
            ctx->pc = 0x3FD088u;
            goto label_3fd088;
        }
    }
    ctx->pc = 0x3FD03Cu;
label_3fd03c:
    // 0x3fd03c: 0xc043d5e  jal         func_10F578
label_3fd040:
    if (ctx->pc == 0x3FD040u) {
        ctx->pc = 0x3FD040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD03Cu;
        // 0x3fd040: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD044u;
        goto label_3fd044;
    }
    ctx->pc = 0x3FD03Cu;
    SET_GPR_U32(ctx, 31, 0x3FD044u);
    ctx->pc = 0x3FD040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD03Cu;
    // 0x3fd040: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3FD03Cu, 0x3FD044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD044u;
label_3fd044:
    // 0x3fd044: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3fd048:
    if (ctx->pc == 0x3FD048u) {
        ctx->pc = 0x3FD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD044u;
        // 0x3fd048: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD04Cu;
        goto label_3fd04c;
    }
    ctx->pc = 0x3FD044u;
    {
        const bool branch_taken_0x3fd044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD044u;
        // 0x3fd048: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd044) {
            ctx->pc = 0x3FD074u;
            goto label_3fd074;
        }
    }
    ctx->pc = 0x3FD04Cu;
label_3fd04c:
    // 0x3fd04c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3fd04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3fd050:
    // 0x3fd050: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3fd050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3fd054:
    // 0x3fd054: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3fd054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3fd058:
    // 0x3fd058: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3fd058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fd05c:
    // 0x3fd05c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3fd05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fd060:
    // 0x3fd060: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3fd060u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3fd064:
    // 0x3fd064: 0xc043f52  jal         func_10FD48
label_3fd068:
    if (ctx->pc == 0x3FD068u) {
        ctx->pc = 0x3FD068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD064u;
        // 0x3fd068: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD06Cu;
        goto label_3fd06c;
    }
    ctx->pc = 0x3FD064u;
    SET_GPR_U32(ctx, 31, 0x3FD06Cu);
    ctx->pc = 0x3FD068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD064u;
    // 0x3fd068: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FD48u, 0x3FD064u, 0x3FD06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD06Cu;
label_3fd06c:
    // 0x3fd06c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3fd06cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3fd070:
    // 0x3fd070: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x3fd070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_3fd074:
    // 0x3fd074: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3fd074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fd078:
    // 0x3fd078: 0xc04410c  jal         func_110430
label_3fd07c:
    if (ctx->pc == 0x3FD07Cu) {
        ctx->pc = 0x3FD07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD078u;
        // 0x3fd07c: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD080u;
        goto label_3fd080;
    }
    ctx->pc = 0x3FD078u;
    SET_GPR_U32(ctx, 31, 0x3FD080u);
    ctx->pc = 0x3FD07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD078u;
    // 0x3fd07c: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110430u, 0x3FD078u, 0x3FD080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD080u;
label_3fd080:
    // 0x3fd080: 0x10000005  b           . + 4 + (0x5 << 2)
label_3fd084:
    if (ctx->pc == 0x3FD084u) {
        ctx->pc = 0x3FD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD080u;
        // 0x3fd084: 0x7bb004a0  lq          $s0, 0x4A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD088u;
        goto label_3fd088;
    }
    ctx->pc = 0x3FD080u;
    {
        const bool branch_taken_0x3fd080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD080u;
        // 0x3fd084: 0x7bb004a0  lq          $s0, 0x4A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd080) {
            ctx->pc = 0x3FD098u;
            goto label_3fd098;
        }
    }
    ctx->pc = 0x3FD088u;
label_3fd088:
    // 0x3fd088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fd088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fd08c:
    // 0x3fd08c: 0xc0440c6  jal         func_110318
label_3fd090:
    if (ctx->pc == 0x3FD090u) {
        ctx->pc = 0x3FD090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD08Cu;
        // 0x3fd090: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD094u;
        goto label_3fd094;
    }
    ctx->pc = 0x3FD08Cu;
    SET_GPR_U32(ctx, 31, 0x3FD094u);
    ctx->pc = 0x3FD090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD08Cu;
    // 0x3fd090: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3FD08Cu, 0x3FD094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD094u;
label_3fd094:
    // 0x3fd094: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x3fd094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3fd098:
    // 0x3fd098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3fd098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fd09c:
    // 0x3fd09c: 0x7bb10490  lq          $s1, 0x490($sp)
    ctx->pc = 0x3fd09cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3fd0a0:
    // 0x3fd0a0: 0x7bb20480  lq          $s2, 0x480($sp)
    ctx->pc = 0x3fd0a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3fd0a4:
    // 0x3fd0a4: 0x7bb30470  lq          $s3, 0x470($sp)
    ctx->pc = 0x3fd0a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3fd0a8:
    // 0x3fd0a8: 0x7bb40460  lq          $s4, 0x460($sp)
    ctx->pc = 0x3fd0a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3fd0ac:
    // 0x3fd0ac: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x3fd0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
label_3fd0b0:
    // 0x3fd0b0: 0xc7b404b0  lwc1        $f20, 0x4B0($sp)
    ctx->pc = 0x3fd0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3fd0b4:
    // 0x3fd0b4: 0x3e00008  jr          $ra
label_3fd0b8:
    if (ctx->pc == 0x3FD0B8u) {
        ctx->pc = 0x3FD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD0B4u;
        // 0x3fd0b8: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD0BCu;
        goto label_3fd0bc;
    }
    ctx->pc = 0x3FD0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD0B4u;
        // 0x3fd0b8: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FD0BCu;
label_3fd0bc:
    // 0x3fd0bc: 0x0  nop
    ctx->pc = 0x3fd0bcu;
    // NOP
    ctx->pc = 0x3fd0c0u;
}
