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

// Function: sub_0048ECE8
// Address: 0x48ece8 - 0x48f0d8
void sub_0048ECE8_0x48ece8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048ECE8_0x48ece8");
#endif

    switch (ctx->pc) {
        case 0x48ece8u: goto label_48ece8;
        case 0x48ececu: goto label_48ecec;
        case 0x48ecf0u: goto label_48ecf0;
        case 0x48ecf4u: goto label_48ecf4;
        case 0x48ecf8u: goto label_48ecf8;
        case 0x48ecfcu: goto label_48ecfc;
        case 0x48ed00u: goto label_48ed00;
        case 0x48ed04u: goto label_48ed04;
        case 0x48ed08u: goto label_48ed08;
        case 0x48ed0cu: goto label_48ed0c;
        case 0x48ed10u: goto label_48ed10;
        case 0x48ed14u: goto label_48ed14;
        case 0x48ed18u: goto label_48ed18;
        case 0x48ed1cu: goto label_48ed1c;
        case 0x48ed20u: goto label_48ed20;
        case 0x48ed24u: goto label_48ed24;
        case 0x48ed28u: goto label_48ed28;
        case 0x48ed2cu: goto label_48ed2c;
        case 0x48ed30u: goto label_48ed30;
        case 0x48ed34u: goto label_48ed34;
        case 0x48ed38u: goto label_48ed38;
        case 0x48ed3cu: goto label_48ed3c;
        case 0x48ed40u: goto label_48ed40;
        case 0x48ed44u: goto label_48ed44;
        case 0x48ed48u: goto label_48ed48;
        case 0x48ed4cu: goto label_48ed4c;
        case 0x48ed50u: goto label_48ed50;
        case 0x48ed54u: goto label_48ed54;
        case 0x48ed58u: goto label_48ed58;
        case 0x48ed5cu: goto label_48ed5c;
        case 0x48ed60u: goto label_48ed60;
        case 0x48ed64u: goto label_48ed64;
        case 0x48ed68u: goto label_48ed68;
        case 0x48ed6cu: goto label_48ed6c;
        case 0x48ed70u: goto label_48ed70;
        case 0x48ed74u: goto label_48ed74;
        case 0x48ed78u: goto label_48ed78;
        case 0x48ed7cu: goto label_48ed7c;
        case 0x48ed80u: goto label_48ed80;
        case 0x48ed84u: goto label_48ed84;
        case 0x48ed88u: goto label_48ed88;
        case 0x48ed8cu: goto label_48ed8c;
        case 0x48ed90u: goto label_48ed90;
        case 0x48ed94u: goto label_48ed94;
        case 0x48ed98u: goto label_48ed98;
        case 0x48ed9cu: goto label_48ed9c;
        case 0x48eda0u: goto label_48eda0;
        case 0x48eda4u: goto label_48eda4;
        case 0x48eda8u: goto label_48eda8;
        case 0x48edacu: goto label_48edac;
        case 0x48edb0u: goto label_48edb0;
        case 0x48edb4u: goto label_48edb4;
        case 0x48edb8u: goto label_48edb8;
        case 0x48edbcu: goto label_48edbc;
        case 0x48edc0u: goto label_48edc0;
        case 0x48edc4u: goto label_48edc4;
        case 0x48edc8u: goto label_48edc8;
        case 0x48edccu: goto label_48edcc;
        case 0x48edd0u: goto label_48edd0;
        case 0x48edd4u: goto label_48edd4;
        case 0x48edd8u: goto label_48edd8;
        case 0x48eddcu: goto label_48eddc;
        case 0x48ede0u: goto label_48ede0;
        case 0x48ede4u: goto label_48ede4;
        case 0x48ede8u: goto label_48ede8;
        case 0x48edecu: goto label_48edec;
        case 0x48edf0u: goto label_48edf0;
        case 0x48edf4u: goto label_48edf4;
        case 0x48edf8u: goto label_48edf8;
        case 0x48edfcu: goto label_48edfc;
        case 0x48ee00u: goto label_48ee00;
        case 0x48ee04u: goto label_48ee04;
        case 0x48ee08u: goto label_48ee08;
        case 0x48ee0cu: goto label_48ee0c;
        case 0x48ee10u: goto label_48ee10;
        case 0x48ee14u: goto label_48ee14;
        case 0x48ee18u: goto label_48ee18;
        case 0x48ee1cu: goto label_48ee1c;
        case 0x48ee20u: goto label_48ee20;
        case 0x48ee24u: goto label_48ee24;
        case 0x48ee28u: goto label_48ee28;
        case 0x48ee2cu: goto label_48ee2c;
        case 0x48ee30u: goto label_48ee30;
        case 0x48ee34u: goto label_48ee34;
        case 0x48ee38u: goto label_48ee38;
        case 0x48ee3cu: goto label_48ee3c;
        case 0x48ee40u: goto label_48ee40;
        case 0x48ee44u: goto label_48ee44;
        case 0x48ee48u: goto label_48ee48;
        case 0x48ee4cu: goto label_48ee4c;
        case 0x48ee50u: goto label_48ee50;
        case 0x48ee54u: goto label_48ee54;
        case 0x48ee58u: goto label_48ee58;
        case 0x48ee5cu: goto label_48ee5c;
        case 0x48ee60u: goto label_48ee60;
        case 0x48ee64u: goto label_48ee64;
        case 0x48ee68u: goto label_48ee68;
        case 0x48ee6cu: goto label_48ee6c;
        case 0x48ee70u: goto label_48ee70;
        case 0x48ee74u: goto label_48ee74;
        case 0x48ee78u: goto label_48ee78;
        case 0x48ee7cu: goto label_48ee7c;
        case 0x48ee80u: goto label_48ee80;
        case 0x48ee84u: goto label_48ee84;
        case 0x48ee88u: goto label_48ee88;
        case 0x48ee8cu: goto label_48ee8c;
        case 0x48ee90u: goto label_48ee90;
        case 0x48ee94u: goto label_48ee94;
        case 0x48ee98u: goto label_48ee98;
        case 0x48ee9cu: goto label_48ee9c;
        case 0x48eea0u: goto label_48eea0;
        case 0x48eea4u: goto label_48eea4;
        case 0x48eea8u: goto label_48eea8;
        case 0x48eeacu: goto label_48eeac;
        case 0x48eeb0u: goto label_48eeb0;
        case 0x48eeb4u: goto label_48eeb4;
        case 0x48eeb8u: goto label_48eeb8;
        case 0x48eebcu: goto label_48eebc;
        case 0x48eec0u: goto label_48eec0;
        case 0x48eec4u: goto label_48eec4;
        case 0x48eec8u: goto label_48eec8;
        case 0x48eeccu: goto label_48eecc;
        case 0x48eed0u: goto label_48eed0;
        case 0x48eed4u: goto label_48eed4;
        case 0x48eed8u: goto label_48eed8;
        case 0x48eedcu: goto label_48eedc;
        case 0x48eee0u: goto label_48eee0;
        case 0x48eee4u: goto label_48eee4;
        case 0x48eee8u: goto label_48eee8;
        case 0x48eeecu: goto label_48eeec;
        case 0x48eef0u: goto label_48eef0;
        case 0x48eef4u: goto label_48eef4;
        case 0x48eef8u: goto label_48eef8;
        case 0x48eefcu: goto label_48eefc;
        case 0x48ef00u: goto label_48ef00;
        case 0x48ef04u: goto label_48ef04;
        case 0x48ef08u: goto label_48ef08;
        case 0x48ef0cu: goto label_48ef0c;
        case 0x48ef10u: goto label_48ef10;
        case 0x48ef14u: goto label_48ef14;
        case 0x48ef18u: goto label_48ef18;
        case 0x48ef1cu: goto label_48ef1c;
        case 0x48ef20u: goto label_48ef20;
        case 0x48ef24u: goto label_48ef24;
        case 0x48ef28u: goto label_48ef28;
        case 0x48ef2cu: goto label_48ef2c;
        case 0x48ef30u: goto label_48ef30;
        case 0x48ef34u: goto label_48ef34;
        case 0x48ef38u: goto label_48ef38;
        case 0x48ef3cu: goto label_48ef3c;
        case 0x48ef40u: goto label_48ef40;
        case 0x48ef44u: goto label_48ef44;
        case 0x48ef48u: goto label_48ef48;
        case 0x48ef4cu: goto label_48ef4c;
        case 0x48ef50u: goto label_48ef50;
        case 0x48ef54u: goto label_48ef54;
        case 0x48ef58u: goto label_48ef58;
        case 0x48ef5cu: goto label_48ef5c;
        case 0x48ef60u: goto label_48ef60;
        case 0x48ef64u: goto label_48ef64;
        case 0x48ef68u: goto label_48ef68;
        case 0x48ef6cu: goto label_48ef6c;
        case 0x48ef70u: goto label_48ef70;
        case 0x48ef74u: goto label_48ef74;
        case 0x48ef78u: goto label_48ef78;
        case 0x48ef7cu: goto label_48ef7c;
        case 0x48ef80u: goto label_48ef80;
        case 0x48ef84u: goto label_48ef84;
        case 0x48ef88u: goto label_48ef88;
        case 0x48ef8cu: goto label_48ef8c;
        case 0x48ef90u: goto label_48ef90;
        case 0x48ef94u: goto label_48ef94;
        case 0x48ef98u: goto label_48ef98;
        case 0x48ef9cu: goto label_48ef9c;
        case 0x48efa0u: goto label_48efa0;
        case 0x48efa4u: goto label_48efa4;
        case 0x48efa8u: goto label_48efa8;
        case 0x48efacu: goto label_48efac;
        case 0x48efb0u: goto label_48efb0;
        case 0x48efb4u: goto label_48efb4;
        case 0x48efb8u: goto label_48efb8;
        case 0x48efbcu: goto label_48efbc;
        case 0x48efc0u: goto label_48efc0;
        case 0x48efc4u: goto label_48efc4;
        case 0x48efc8u: goto label_48efc8;
        case 0x48efccu: goto label_48efcc;
        case 0x48efd0u: goto label_48efd0;
        case 0x48efd4u: goto label_48efd4;
        case 0x48efd8u: goto label_48efd8;
        case 0x48efdcu: goto label_48efdc;
        case 0x48efe0u: goto label_48efe0;
        case 0x48efe4u: goto label_48efe4;
        case 0x48efe8u: goto label_48efe8;
        case 0x48efecu: goto label_48efec;
        case 0x48eff0u: goto label_48eff0;
        case 0x48eff4u: goto label_48eff4;
        case 0x48eff8u: goto label_48eff8;
        case 0x48effcu: goto label_48effc;
        case 0x48f000u: goto label_48f000;
        case 0x48f004u: goto label_48f004;
        case 0x48f008u: goto label_48f008;
        case 0x48f00cu: goto label_48f00c;
        case 0x48f010u: goto label_48f010;
        case 0x48f014u: goto label_48f014;
        case 0x48f018u: goto label_48f018;
        case 0x48f01cu: goto label_48f01c;
        case 0x48f020u: goto label_48f020;
        case 0x48f024u: goto label_48f024;
        case 0x48f028u: goto label_48f028;
        case 0x48f02cu: goto label_48f02c;
        case 0x48f030u: goto label_48f030;
        case 0x48f034u: goto label_48f034;
        case 0x48f038u: goto label_48f038;
        case 0x48f03cu: goto label_48f03c;
        case 0x48f040u: goto label_48f040;
        case 0x48f044u: goto label_48f044;
        case 0x48f048u: goto label_48f048;
        case 0x48f04cu: goto label_48f04c;
        case 0x48f050u: goto label_48f050;
        case 0x48f054u: goto label_48f054;
        case 0x48f058u: goto label_48f058;
        case 0x48f05cu: goto label_48f05c;
        case 0x48f060u: goto label_48f060;
        case 0x48f064u: goto label_48f064;
        case 0x48f068u: goto label_48f068;
        case 0x48f06cu: goto label_48f06c;
        case 0x48f070u: goto label_48f070;
        case 0x48f074u: goto label_48f074;
        case 0x48f078u: goto label_48f078;
        case 0x48f07cu: goto label_48f07c;
        case 0x48f080u: goto label_48f080;
        case 0x48f084u: goto label_48f084;
        case 0x48f088u: goto label_48f088;
        case 0x48f08cu: goto label_48f08c;
        case 0x48f090u: goto label_48f090;
        case 0x48f094u: goto label_48f094;
        case 0x48f098u: goto label_48f098;
        case 0x48f09cu: goto label_48f09c;
        case 0x48f0a0u: goto label_48f0a0;
        case 0x48f0a4u: goto label_48f0a4;
        case 0x48f0a8u: goto label_48f0a8;
        case 0x48f0acu: goto label_48f0ac;
        case 0x48f0b0u: goto label_48f0b0;
        case 0x48f0b4u: goto label_48f0b4;
        case 0x48f0b8u: goto label_48f0b8;
        case 0x48f0bcu: goto label_48f0bc;
        case 0x48f0c0u: goto label_48f0c0;
        case 0x48f0c4u: goto label_48f0c4;
        case 0x48f0c8u: goto label_48f0c8;
        case 0x48f0ccu: goto label_48f0cc;
        case 0x48f0d0u: goto label_48f0d0;
        case 0x48f0d4u: goto label_48f0d4;
        default: break;
    }

    ctx->pc = 0x48ece8u;

label_48ece8:
    // 0x48ece8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48ece8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48ecec:
    // 0x48ecec: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x48ececu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_48ecf0:
    // 0x48ecf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48ecf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_48ecf4:
    // 0x48ecf4: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x48ecf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_48ecf8:
    // 0x48ecf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48ecfc:
    // 0x48ecfc: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
label_48ed00:
    if (ctx->pc == 0x48ED00u) {
        ctx->pc = 0x48ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ECFCu;
        // 0x48ed00: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48ED04u;
        goto label_48ed04;
    }
    ctx->pc = 0x48ECFCu;
    {
        const bool branch_taken_0x48ecfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ECFCu;
        // 0x48ed00: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ecfc) {
            ctx->pc = 0x48F0D8u;
            return;
        }
    }
    ctx->pc = 0x48ED04u;
label_48ed04:
    // 0x48ed04: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x48ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_48ed08:
    // 0x48ed08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48ed0c:
    // 0x48ed0c: 0x2442f160  addiu       $v0, $v0, -0xEA0
    ctx->pc = 0x48ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963552));
label_48ed10:
    // 0x48ed10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48ed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48ed14:
    // 0x48ed14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48ed18:
    // 0x48ed18: 0x800008  jr          $a0
label_48ed1c:
    if (ctx->pc == 0x48ED1Cu) {
        ctx->pc = 0x48ED20u;
        goto label_48ed20;
    }
    ctx->pc = 0x48ED18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48ED20u: goto label_48ed20;
            case 0x48ED34u: goto label_48ed34;
            case 0x48ED58u: goto label_48ed58;
            case 0x48ED70u: goto label_48ed70;
            case 0x48ED88u: goto label_48ed88;
            case 0x48EDA0u: goto label_48eda0;
            case 0x48EDC0u: goto label_48edc0;
            case 0x48EDDCu: goto label_48eddc;
            case 0x48EDF0u: goto label_48edf0;
            case 0x48EE58u: goto label_48ee58;
            case 0x48EEE4u: goto label_48eee4;
            case 0x48EF70u: goto label_48ef70;
            case 0x48EF7Cu: goto label_48ef7c;
            case 0x48EF94u: goto label_48ef94;
            case 0x48EFD0u: goto label_48efd0;
            case 0x48F004u: goto label_48f004;
            case 0x48F010u: goto label_48f010;
            case 0x48F0B0u: goto label_48f0b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48ED18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48ED20u;
label_48ed20:
    // 0x48ed20: 0x8f828a28  lw          $v0, -0x75D8($gp)
    ctx->pc = 0x48ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937128)));
label_48ed24:
    // 0x48ed24: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x48ed24u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_48ed28:
    // 0x48ed28: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x48ed28u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_48ed2c:
    // 0x48ed2c: 0x100000ec  b           . + 4 + (0xEC << 2)
label_48ed30:
    if (ctx->pc == 0x48ED30u) {
        ctx->pc = 0x48ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED2Cu;
        // 0x48ed30: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48ED34u;
        goto label_48ed34;
    }
    ctx->pc = 0x48ED2Cu;
    {
        const bool branch_taken_0x48ed2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED2Cu;
        // 0x48ed30: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ed2c) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48ED34u;
label_48ed34:
    // 0x48ed34: 0xdf828710  ld          $v0, -0x78F0($gp)
    ctx->pc = 0x48ed34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_48ed38:
    // 0x48ed38: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x48ed38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_48ed3c:
    // 0x48ed3c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x48ed3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_48ed40:
    // 0x48ed40: 0x546200e7  bnel        $v1, $v0, . + 4 + (0xE7 << 2)
label_48ed44:
    if (ctx->pc == 0x48ED44u) {
        ctx->pc = 0x48ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED40u;
        // 0x48ed44: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48ED48u;
        goto label_48ed48;
    }
    ctx->pc = 0x48ED40u;
    {
        const bool branch_taken_0x48ed40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48ed40) {
            ctx->pc = 0x48ED44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48ED40u;
            // 0x48ed44: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48ED48u;
label_48ed48:
    // 0x48ed48: 0x146000ce  bnez        $v1, . + 4 + (0xCE << 2)
label_48ed4c:
    if (ctx->pc == 0x48ED4Cu) {
        ctx->pc = 0x48ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED48u;
        // 0x48ed4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48ED50u;
        goto label_48ed50;
    }
    ctx->pc = 0x48ED48u;
    {
        const bool branch_taken_0x48ed48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED48u;
        // 0x48ed4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ed48) {
            ctx->pc = 0x48F084u;
            goto label_48f084;
        }
    }
    ctx->pc = 0x48ED50u;
label_48ed50:
    // 0x48ed50: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_48ed54:
    if (ctx->pc == 0x48ED54u) {
        ctx->pc = 0x48ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED50u;
        // 0x48ed54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48ED58u;
        goto label_48ed58;
    }
    ctx->pc = 0x48ED50u;
    {
        const bool branch_taken_0x48ed50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED50u;
        // 0x48ed54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ed50) {
            ctx->pc = 0x48F054u;
            goto label_48f054;
        }
    }
    ctx->pc = 0x48ED58u;
label_48ed58:
    // 0x48ed58: 0xdf828710  ld          $v0, -0x78F0($gp)
    ctx->pc = 0x48ed58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_48ed5c:
    // 0x48ed5c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x48ed5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_48ed60:
    // 0x48ed60: 0x144000c8  bnez        $v0, . + 4 + (0xC8 << 2)
label_48ed64:
    if (ctx->pc == 0x48ED64u) {
        ctx->pc = 0x48ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED60u;
        // 0x48ed64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48ED68u;
        goto label_48ed68;
    }
    ctx->pc = 0x48ED60u;
    {
        const bool branch_taken_0x48ed60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED60u;
        // 0x48ed64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ed60) {
            ctx->pc = 0x48F084u;
            goto label_48f084;
        }
    }
    ctx->pc = 0x48ED68u;
label_48ed68:
    // 0x48ed68: 0x100000ba  b           . + 4 + (0xBA << 2)
label_48ed6c:
    if (ctx->pc == 0x48ED6Cu) {
        ctx->pc = 0x48ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED68u;
        // 0x48ed6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48ED70u;
        goto label_48ed70;
    }
    ctx->pc = 0x48ED68u;
    {
        const bool branch_taken_0x48ed68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED68u;
        // 0x48ed6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ed68) {
            ctx->pc = 0x48F054u;
            goto label_48f054;
        }
    }
    ctx->pc = 0x48ED70u;
label_48ed70:
    // 0x48ed70: 0xdf828710  ld          $v0, -0x78F0($gp)
    ctx->pc = 0x48ed70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_48ed74:
    // 0x48ed74: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x48ed74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_48ed78:
    // 0x48ed78: 0x144000c2  bnez        $v0, . + 4 + (0xC2 << 2)
label_48ed7c:
    if (ctx->pc == 0x48ED7Cu) {
        ctx->pc = 0x48ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED78u;
        // 0x48ed7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48ED80u;
        goto label_48ed80;
    }
    ctx->pc = 0x48ED78u;
    {
        const bool branch_taken_0x48ed78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED78u;
        // 0x48ed7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ed78) {
            ctx->pc = 0x48F084u;
            goto label_48f084;
        }
    }
    ctx->pc = 0x48ED80u;
label_48ed80:
    // 0x48ed80: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_48ed84:
    if (ctx->pc == 0x48ED84u) {
        ctx->pc = 0x48ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED80u;
        // 0x48ed84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48ED88u;
        goto label_48ed88;
    }
    ctx->pc = 0x48ED80u;
    {
        const bool branch_taken_0x48ed80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED80u;
        // 0x48ed84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ed80) {
            ctx->pc = 0x48F054u;
            goto label_48f054;
        }
    }
    ctx->pc = 0x48ED88u;
label_48ed88:
    // 0x48ed88: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x48ed88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_48ed8c:
    // 0x48ed8c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x48ed8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_48ed90:
    // 0x48ed90: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_48ed94:
    if (ctx->pc == 0x48ED94u) {
        ctx->pc = 0x48ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED90u;
        // 0x48ed94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48ED98u;
        goto label_48ed98;
    }
    ctx->pc = 0x48ED90u;
    {
        const bool branch_taken_0x48ed90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED90u;
        // 0x48ed94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ed90) {
            ctx->pc = 0x48F054u;
            goto label_48f054;
        }
    }
    ctx->pc = 0x48ED98u;
label_48ed98:
    // 0x48ed98: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_48ed9c:
    if (ctx->pc == 0x48ED9Cu) {
        ctx->pc = 0x48ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED98u;
        // 0x48ed9c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EDA0u;
        goto label_48eda0;
    }
    ctx->pc = 0x48ED98u;
    {
        const bool branch_taken_0x48ed98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48ED98u;
        // 0x48ed9c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ed98) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48EDA0u;
label_48eda0:
    // 0x48eda0: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x48eda0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
label_48eda4:
    // 0x48eda4: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x48eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
label_48eda8:
    // 0x48eda8: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x48eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_48edac:
    // 0x48edac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x48edacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_48edb0:
    // 0x48edb0: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x48edb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_48edb4:
    // 0x48edb4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48edb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48edb8:
    // 0x48edb8: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_48edbc:
    if (ctx->pc == 0x48EDBCu) {
        ctx->pc = 0x48EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EDB8u;
        // 0x48edbc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EDC0u;
        goto label_48edc0;
    }
    ctx->pc = 0x48EDB8u;
    {
        const bool branch_taken_0x48edb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EDB8u;
        // 0x48edbc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48edb8) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48EDC0u;
label_48edc0:
    // 0x48edc0: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x48edc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_48edc4:
    // 0x48edc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48edc8:
    // 0x48edc8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48edcc:
    // 0x48edcc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x48edccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_48edd0:
    // 0x48edd0: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x48edd0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_48edd4:
    // 0x48edd4: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_48edd8:
    if (ctx->pc == 0x48EDD8u) {
        ctx->pc = 0x48EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EDD4u;
        // 0x48edd8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EDDCu;
        goto label_48eddc;
    }
    ctx->pc = 0x48EDD4u;
    {
        const bool branch_taken_0x48edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EDD4u;
        // 0x48edd8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48edd4) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48EDDCu;
label_48eddc:
    // 0x48eddc: 0x9f8286ec  lwu         $v0, -0x7914($gp)
    ctx->pc = 0x48eddcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936300)));
label_48ede0:
    // 0x48ede0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48ede0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_48ede4:
    // 0x48ede4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48ede4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48ede8:
    // 0x48ede8: 0x10000067  b           . + 4 + (0x67 << 2)
label_48edec:
    if (ctx->pc == 0x48EDECu) {
        ctx->pc = 0x48EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EDE8u;
        // 0x48edec: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EDF0u;
        goto label_48edf0;
    }
    ctx->pc = 0x48EDE8u;
    {
        const bool branch_taken_0x48ede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EDE8u;
        // 0x48edec: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ede8) {
            ctx->pc = 0x48EF88u;
            goto label_48ef88;
        }
    }
    ctx->pc = 0x48EDF0u;
label_48edf0:
    // 0x48edf0: 0xdf828718  ld          $v0, -0x78E8($gp)
    ctx->pc = 0x48edf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
label_48edf4:
    // 0x48edf4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x48edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_48edf8:
    // 0x48edf8: 0x304401e0  andi        $a0, $v0, 0x1E0
    ctx->pc = 0x48edf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)480);
label_48edfc:
    // 0x48edfc: 0x108300a0  beq         $a0, $v1, . + 4 + (0xA0 << 2)
label_48ee00:
    if (ctx->pc == 0x48EE00u) {
        ctx->pc = 0x48EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EDFCu;
        // 0x48ee00: 0x28820081  slti        $v0, $a0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EE04u;
        goto label_48ee04;
    }
    ctx->pc = 0x48EDFCu;
    {
        const bool branch_taken_0x48edfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x48EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EDFCu;
        // 0x48ee00: 0x28820081  slti        $v0, $a0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48edfc) {
            ctx->pc = 0x48F080u;
            goto label_48f080;
        }
    }
    ctx->pc = 0x48EE04u;
label_48ee04:
    // 0x48ee04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_48ee08:
    if (ctx->pc == 0x48EE08u) {
        ctx->pc = 0x48EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE04u;
        // 0x48ee08: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EE0Cu;
        goto label_48ee0c;
    }
    ctx->pc = 0x48EE04u;
    {
        const bool branch_taken_0x48ee04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE04u;
        // 0x48ee08: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee04) {
            ctx->pc = 0x48EE24u;
            goto label_48ee24;
        }
    }
    ctx->pc = 0x48EE0Cu;
label_48ee0c:
    // 0x48ee0c: 0x10800090  beqz        $a0, . + 4 + (0x90 << 2)
label_48ee10:
    if (ctx->pc == 0x48EE10u) {
        ctx->pc = 0x48EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE0Cu;
        // 0x48ee10: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EE14u;
        goto label_48ee14;
    }
    ctx->pc = 0x48EE0Cu;
    {
        const bool branch_taken_0x48ee0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE0Cu;
        // 0x48ee10: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee0c) {
            ctx->pc = 0x48F050u;
            goto label_48f050;
        }
    }
    ctx->pc = 0x48EE14u;
label_48ee14:
    // 0x48ee14: 0x10820094  beq         $a0, $v0, . + 4 + (0x94 << 2)
label_48ee18:
    if (ctx->pc == 0x48EE18u) {
        ctx->pc = 0x48EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE14u;
        // 0x48ee18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EE1Cu;
        goto label_48ee1c;
    }
    ctx->pc = 0x48EE14u;
    {
        const bool branch_taken_0x48ee14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE14u;
        // 0x48ee18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee14) {
            ctx->pc = 0x48F068u;
            goto label_48f068;
        }
    }
    ctx->pc = 0x48EE1Cu;
label_48ee1c:
    // 0x48ee1c: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_48ee20:
    if (ctx->pc == 0x48EE20u) {
        ctx->pc = 0x48EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE1Cu;
        // 0x48ee20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EE24u;
        goto label_48ee24;
    }
    ctx->pc = 0x48EE1Cu;
    {
        const bool branch_taken_0x48ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE1Cu;
        // 0x48ee20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee1c) {
            ctx->pc = 0x48F0E8u;
            return;
        }
    }
    ctx->pc = 0x48EE24u;
label_48ee24:
    // 0x48ee24: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
label_48ee28:
    if (ctx->pc == 0x48EE28u) {
        ctx->pc = 0x48EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE24u;
        // 0x48ee28: 0x28820121  slti        $v0, $a0, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)289) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EE2Cu;
        goto label_48ee2c;
    }
    ctx->pc = 0x48EE24u;
    {
        const bool branch_taken_0x48ee24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE24u;
        // 0x48ee28: 0x28820121  slti        $v0, $a0, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)289) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee24) {
            ctx->pc = 0x48F074u;
            goto label_48f074;
        }
    }
    ctx->pc = 0x48EE2Cu;
label_48ee2c:
    // 0x48ee2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_48ee30:
    if (ctx->pc == 0x48EE30u) {
        ctx->pc = 0x48EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE2Cu;
        // 0x48ee30: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EE34u;
        goto label_48ee34;
    }
    ctx->pc = 0x48EE2Cu;
    {
        const bool branch_taken_0x48ee2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE2Cu;
        // 0x48ee30: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee2c) {
            ctx->pc = 0x48EE44u;
            goto label_48ee44;
        }
    }
    ctx->pc = 0x48EE34u;
label_48ee34:
    // 0x48ee34: 0x10820098  beq         $a0, $v0, . + 4 + (0x98 << 2)
label_48ee38:
    if (ctx->pc == 0x48EE38u) {
        ctx->pc = 0x48EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE34u;
        // 0x48ee38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EE3Cu;
        goto label_48ee3c;
    }
    ctx->pc = 0x48EE34u;
    {
        const bool branch_taken_0x48ee34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE34u;
        // 0x48ee38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee34) {
            ctx->pc = 0x48F098u;
            goto label_48f098;
        }
    }
    ctx->pc = 0x48EE3Cu;
label_48ee3c:
    // 0x48ee3c: 0x100000aa  b           . + 4 + (0xAA << 2)
label_48ee40:
    if (ctx->pc == 0x48EE40u) {
        ctx->pc = 0x48EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE3Cu;
        // 0x48ee40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EE44u;
        goto label_48ee44;
    }
    ctx->pc = 0x48EE3Cu;
    {
        const bool branch_taken_0x48ee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE3Cu;
        // 0x48ee40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee3c) {
            ctx->pc = 0x48F0E8u;
            return;
        }
    }
    ctx->pc = 0x48EE44u;
label_48ee44:
    // 0x48ee44: 0x24020160  addiu       $v0, $zero, 0x160
    ctx->pc = 0x48ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_48ee48:
    // 0x48ee48: 0x10820096  beq         $a0, $v0, . + 4 + (0x96 << 2)
label_48ee4c:
    if (ctx->pc == 0x48EE4Cu) {
        ctx->pc = 0x48EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE48u;
        // 0x48ee4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EE50u;
        goto label_48ee50;
    }
    ctx->pc = 0x48EE48u;
    {
        const bool branch_taken_0x48ee48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x48EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE48u;
        // 0x48ee4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee48) {
            ctx->pc = 0x48F0A4u;
            goto label_48f0a4;
        }
    }
    ctx->pc = 0x48EE50u;
label_48ee50:
    // 0x48ee50: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_48ee54:
    if (ctx->pc == 0x48EE54u) {
        ctx->pc = 0x48EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE50u;
        // 0x48ee54: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EE58u;
        goto label_48ee58;
    }
    ctx->pc = 0x48EE50u;
    {
        const bool branch_taken_0x48ee50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE50u;
        // 0x48ee54: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee50) {
            ctx->pc = 0x48F0E8u;
            return;
        }
    }
    ctx->pc = 0x48EE58u;
label_48ee58:
    // 0x48ee58: 0xdf878720  ld          $a3, -0x78E0($gp)
    ctx->pc = 0x48ee58u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294936352)));
label_48ee5c:
    // 0x48ee5c: 0x4e0009e  bltz        $a3, . + 4 + (0x9E << 2)
label_48ee60:
    if (ctx->pc == 0x48EE60u) {
        ctx->pc = 0x48EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE5Cu;
        // 0x48ee60: 0x8f88873c  lw          $t0, -0x78C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EE64u;
        goto label_48ee64;
    }
    ctx->pc = 0x48EE5Cu;
    {
        const bool branch_taken_0x48ee5c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x48EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE5Cu;
        // 0x48ee60: 0x8f88873c  lw          $t0, -0x78C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee5c) {
            ctx->pc = 0x48F0D8u;
            return;
        }
    }
    ctx->pc = 0x48EE64u;
label_48ee64:
    // 0x48ee64: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x48ee64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_48ee68:
    // 0x48ee68: 0x8f828738  lw          $v0, -0x78C8($gp)
    ctx->pc = 0x48ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
label_48ee6c:
    // 0x48ee6c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x48ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_48ee70:
    // 0x48ee70: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x48ee70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_48ee74:
    // 0x48ee74: 0x2463f4a8  addiu       $v1, $v1, -0xB58
    ctx->pc = 0x48ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964392));
label_48ee78:
    // 0x48ee78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x48ee78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48ee7c:
    // 0x48ee7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x48ee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48ee80:
    // 0x48ee80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48ee84:
    // 0x48ee84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_48ee88:
    // 0x48ee88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48ee8c:
    // 0x48ee8c: 0x14c5000a  bne         $a2, $a1, . + 4 + (0xA << 2)
label_48ee90:
    if (ctx->pc == 0x48EE90u) {
        ctx->pc = 0x48EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE8Cu;
        // 0x48ee90: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EE94u;
        goto label_48ee94;
    }
    ctx->pc = 0x48EE8Cu;
    {
        const bool branch_taken_0x48ee8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x48EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EE8Cu;
        // 0x48ee90: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ee8c) {
            ctx->pc = 0x48EEB8u;
            goto label_48eeb8;
        }
    }
    ctx->pc = 0x48EE94u;
label_48ee94:
    // 0x48ee94: 0x15060008  bne         $t0, $a2, . + 4 + (0x8 << 2)
label_48ee98:
    if (ctx->pc == 0x48EE98u) {
        ctx->pc = 0x48EE9Cu;
        goto label_48ee9c;
    }
    ctx->pc = 0x48EE94u;
    {
        const bool branch_taken_0x48ee94 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x48ee94) {
            ctx->pc = 0x48EEB8u;
            goto label_48eeb8;
        }
    }
    ctx->pc = 0x48EE9Cu;
label_48ee9c:
    // 0x48ee9c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x48ee9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_48eea0:
    // 0x48eea0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x48eea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_48eea4:
    // 0x48eea4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x48eea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_48eea8:
    // 0x48eea8: 0x14e2008e  bne         $a3, $v0, . + 4 + (0x8E << 2)
label_48eeac:
    if (ctx->pc == 0x48EEACu) {
        ctx->pc = 0x48EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EEA8u;
        // 0x48eeac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EEB0u;
        goto label_48eeb0;
    }
    ctx->pc = 0x48EEA8u;
    {
        const bool branch_taken_0x48eea8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x48EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EEA8u;
        // 0x48eeac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eea8) {
            ctx->pc = 0x48F0E4u;
            return;
        }
    }
    ctx->pc = 0x48EEB0u;
label_48eeb0:
    // 0x48eeb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_48eeb4:
    if (ctx->pc == 0x48EEB4u) {
        ctx->pc = 0x48EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EEB0u;
        // 0x48eeb4: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EEB8u;
        goto label_48eeb8;
    }
    ctx->pc = 0x48EEB0u;
    {
        const bool branch_taken_0x48eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EEB0u;
        // 0x48eeb4: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eeb0) {
            ctx->pc = 0x48EEC4u;
            goto label_48eec4;
        }
    }
    ctx->pc = 0x48EEB8u;
label_48eeb8:
    // 0x48eeb8: 0x14e3008a  bne         $a3, $v1, . + 4 + (0x8A << 2)
label_48eebc:
    if (ctx->pc == 0x48EEBCu) {
        ctx->pc = 0x48EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EEB8u;
        // 0x48eebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EEC0u;
        goto label_48eec0;
    }
    ctx->pc = 0x48EEB8u;
    {
        const bool branch_taken_0x48eeb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x48EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EEB8u;
        // 0x48eebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eeb8) {
            ctx->pc = 0x48F0E4u;
            return;
        }
    }
    ctx->pc = 0x48EEC0u;
label_48eec0:
    // 0x48eec0: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x48eec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_48eec4:
    // 0x48eec4: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
label_48eec8:
    if (ctx->pc == 0x48EEC8u) {
        ctx->pc = 0x48EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EEC4u;
        // 0x48eec8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EECCu;
        goto label_48eecc;
    }
    ctx->pc = 0x48EEC4u;
    {
        const bool branch_taken_0x48eec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EEC4u;
        // 0x48eec8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eec4) {
            ctx->pc = 0x48F0D8u;
            return;
        }
    }
    ctx->pc = 0x48EECCu;
label_48eecc:
    // 0x48eecc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x48eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_48eed0:
    // 0x48eed0: 0x2442f1e0  addiu       $v0, $v0, -0xE20
    ctx->pc = 0x48eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963680));
label_48eed4:
    // 0x48eed4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48eed8:
    // 0x48eed8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48eed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48eedc:
    // 0x48eedc: 0x800008  jr          $a0
label_48eee0:
    if (ctx->pc == 0x48EEE0u) {
        ctx->pc = 0x48EEE4u;
        goto label_48eee4;
    }
    ctx->pc = 0x48EEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48F050u: goto label_48f050;
            case 0x48F05Cu: goto label_48f05c;
            case 0x48F068u: goto label_48f068;
            case 0x48F08Cu: goto label_48f08c;
            case 0x48F098u: goto label_48f098;
            case 0x48F0A4u: goto label_48f0a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EEDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48EEE4u;
label_48eee4:
    // 0x48eee4: 0xdf878720  ld          $a3, -0x78E0($gp)
    ctx->pc = 0x48eee4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294936352)));
label_48eee8:
    // 0x48eee8: 0x4e0007b  bltz        $a3, . + 4 + (0x7B << 2)
label_48eeec:
    if (ctx->pc == 0x48EEECu) {
        ctx->pc = 0x48EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EEE8u;
        // 0x48eeec: 0x8f84873c  lw          $a0, -0x78C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EEF0u;
        goto label_48eef0;
    }
    ctx->pc = 0x48EEE8u;
    {
        const bool branch_taken_0x48eee8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x48EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EEE8u;
        // 0x48eeec: 0x8f84873c  lw          $a0, -0x78C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eee8) {
            ctx->pc = 0x48F0D8u;
            return;
        }
    }
    ctx->pc = 0x48EEF0u;
label_48eef0:
    // 0x48eef0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x48eef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_48eef4:
    // 0x48eef4: 0x8f868738  lw          $a2, -0x78C8($gp)
    ctx->pc = 0x48eef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
label_48eef8:
    // 0x48eef8: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x48eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_48eefc:
    // 0x48eefc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x48eefcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48ef00:
    // 0x48ef00: 0x2463f4a8  addiu       $v1, $v1, -0xB58
    ctx->pc = 0x48ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964392));
label_48ef04:
    // 0x48ef04: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x48ef04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_48ef08:
    // 0x48ef08: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x48ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_48ef0c:
    // 0x48ef0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x48ef0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48ef10:
    // 0x48ef10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_48ef14:
    // 0x48ef14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48ef18:
    // 0x48ef18: 0x14c5000a  bne         $a2, $a1, . + 4 + (0xA << 2)
label_48ef1c:
    if (ctx->pc == 0x48EF1Cu) {
        ctx->pc = 0x48EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF18u;
        // 0x48ef1c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EF20u;
        goto label_48ef20;
    }
    ctx->pc = 0x48EF18u;
    {
        const bool branch_taken_0x48ef18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x48EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF18u;
        // 0x48ef1c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ef18) {
            ctx->pc = 0x48EF44u;
            goto label_48ef44;
        }
    }
    ctx->pc = 0x48EF20u;
label_48ef20:
    // 0x48ef20: 0x15060008  bne         $t0, $a2, . + 4 + (0x8 << 2)
label_48ef24:
    if (ctx->pc == 0x48EF24u) {
        ctx->pc = 0x48EF28u;
        goto label_48ef28;
    }
    ctx->pc = 0x48EF20u;
    {
        const bool branch_taken_0x48ef20 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x48ef20) {
            ctx->pc = 0x48EF44u;
            goto label_48ef44;
        }
    }
    ctx->pc = 0x48EF28u;
label_48ef28:
    // 0x48ef28: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x48ef28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_48ef2c:
    // 0x48ef2c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x48ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_48ef30:
    // 0x48ef30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x48ef30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_48ef34:
    // 0x48ef34: 0x14e2006b  bne         $a3, $v0, . + 4 + (0x6B << 2)
label_48ef38:
    if (ctx->pc == 0x48EF38u) {
        ctx->pc = 0x48EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF34u;
        // 0x48ef38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EF3Cu;
        goto label_48ef3c;
    }
    ctx->pc = 0x48EF34u;
    {
        const bool branch_taken_0x48ef34 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x48EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF34u;
        // 0x48ef38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ef34) {
            ctx->pc = 0x48F0E4u;
            return;
        }
    }
    ctx->pc = 0x48EF3Cu;
label_48ef3c:
    // 0x48ef3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_48ef40:
    if (ctx->pc == 0x48EF40u) {
        ctx->pc = 0x48EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF3Cu;
        // 0x48ef40: 0x2d020006  sltiu       $v0, $t0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EF44u;
        goto label_48ef44;
    }
    ctx->pc = 0x48EF3Cu;
    {
        const bool branch_taken_0x48ef3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF3Cu;
        // 0x48ef40: 0x2d020006  sltiu       $v0, $t0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ef3c) {
            ctx->pc = 0x48EF50u;
            goto label_48ef50;
        }
    }
    ctx->pc = 0x48EF44u;
label_48ef44:
    // 0x48ef44: 0x14e30067  bne         $a3, $v1, . + 4 + (0x67 << 2)
label_48ef48:
    if (ctx->pc == 0x48EF48u) {
        ctx->pc = 0x48EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF44u;
        // 0x48ef48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EF4Cu;
        goto label_48ef4c;
    }
    ctx->pc = 0x48EF44u;
    {
        const bool branch_taken_0x48ef44 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x48EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF44u;
        // 0x48ef48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ef44) {
            ctx->pc = 0x48F0E4u;
            return;
        }
    }
    ctx->pc = 0x48EF4Cu;
label_48ef4c:
    // 0x48ef4c: 0x2d020006  sltiu       $v0, $t0, 0x6
    ctx->pc = 0x48ef4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_48ef50:
    // 0x48ef50: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_48ef54:
    if (ctx->pc == 0x48EF54u) {
        ctx->pc = 0x48EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF50u;
        // 0x48ef54: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EF58u;
        goto label_48ef58;
    }
    ctx->pc = 0x48EF50u;
    {
        const bool branch_taken_0x48ef50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF50u;
        // 0x48ef54: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ef50) {
            ctx->pc = 0x48F0D8u;
            return;
        }
    }
    ctx->pc = 0x48EF58u;
label_48ef58:
    // 0x48ef58: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x48ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_48ef5c:
    // 0x48ef5c: 0x2442f200  addiu       $v0, $v0, -0xE00
    ctx->pc = 0x48ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963712));
label_48ef60:
    // 0x48ef60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48ef64:
    // 0x48ef64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48ef68:
    // 0x48ef68: 0x800008  jr          $a0
label_48ef6c:
    if (ctx->pc == 0x48EF6Cu) {
        ctx->pc = 0x48EF70u;
        goto label_48ef70;
    }
    ctx->pc = 0x48EF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48F050u: goto label_48f050;
            case 0x48F05Cu: goto label_48f05c;
            case 0x48F068u: goto label_48f068;
            case 0x48F08Cu: goto label_48f08c;
            case 0x48F098u: goto label_48f098;
            case 0x48F0A4u: goto label_48f0a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EF68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48EF70u;
label_48ef70:
    // 0x48ef70: 0x8f828a30  lw          $v0, -0x75D0($gp)
    ctx->pc = 0x48ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
label_48ef74:
    // 0x48ef74: 0x1000005a  b           . + 4 + (0x5A << 2)
label_48ef78:
    if (ctx->pc == 0x48EF78u) {
        ctx->pc = 0x48EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF74u;
        // 0x48ef78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EF7Cu;
        goto label_48ef7c;
    }
    ctx->pc = 0x48EF74u;
    {
        const bool branch_taken_0x48ef74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF74u;
        // 0x48ef78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ef74) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48EF7Cu;
label_48ef7c:
    // 0x48ef7c: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x48ef7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_48ef80:
    // 0x48ef80: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x48ef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
label_48ef84:
    // 0x48ef84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48ef84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48ef88:
    // 0x48ef88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48ef88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_48ef8c:
    // 0x48ef8c: 0x10000054  b           . + 4 + (0x54 << 2)
label_48ef90:
    if (ctx->pc == 0x48EF90u) {
        ctx->pc = 0x48EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF8Cu;
        // 0x48ef90: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EF94u;
        goto label_48ef94;
    }
    ctx->pc = 0x48EF8Cu;
    {
        const bool branch_taken_0x48ef8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EF8Cu;
        // 0x48ef90: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ef8c) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48EF94u;
label_48ef94:
    // 0x48ef94: 0xdf838708  ld          $v1, -0x78F8($gp)
    ctx->pc = 0x48ef94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936328)));
label_48ef98:
    // 0x48ef98: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x48ef98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_48ef9c:
    // 0x48ef9c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x48ef9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_48efa0:
    // 0x48efa0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x48efa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_48efa4:
    // 0x48efa4: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x48efa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
label_48efa8:
    // 0x48efa8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x48efa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_48efac:
    // 0x48efac: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x48efacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_48efb0:
    // 0x48efb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48efb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_48efb4:
    // 0x48efb4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x48efb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_48efb8:
    // 0x48efb8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x48efb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_48efbc:
    // 0x48efbc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x48efbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_48efc0:
    // 0x48efc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48efc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_48efc4:
    // 0x48efc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48efc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48efc8:
    // 0x48efc8: 0x10000045  b           . + 4 + (0x45 << 2)
label_48efcc:
    if (ctx->pc == 0x48EFCCu) {
        ctx->pc = 0x48EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EFC8u;
        // 0x48efcc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EFD0u;
        goto label_48efd0;
    }
    ctx->pc = 0x48EFC8u;
    {
        const bool branch_taken_0x48efc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EFC8u;
        // 0x48efcc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48efc8) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48EFD0u;
label_48efd0:
    // 0x48efd0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_48efd4:
    // 0x48efd4: 0x8f838a3c  lw          $v1, -0x75C4($gp)
    ctx->pc = 0x48efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937148)));
label_48efd8:
    // 0x48efd8: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x48efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_48efdc:
    // 0x48efdc: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_48efe0:
    if (ctx->pc == 0x48EFE0u) {
        ctx->pc = 0x48EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EFDCu;
        // 0x48efe0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EFE4u;
        goto label_48efe4;
    }
    ctx->pc = 0x48EFDCu;
    {
        const bool branch_taken_0x48efdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EFDCu;
        // 0x48efe0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48efdc) {
            ctx->pc = 0x48F050u;
            goto label_48f050;
        }
    }
    ctx->pc = 0x48EFE4u;
label_48efe4:
    // 0x48efe4: 0x244201b0  addiu       $v0, $v0, 0x1B0
    ctx->pc = 0x48efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_48efe8:
    // 0x48efe8: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_48efec:
    if (ctx->pc == 0x48EFECu) {
        ctx->pc = 0x48EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EFE8u;
        // 0x48efec: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EFF0u;
        goto label_48eff0;
    }
    ctx->pc = 0x48EFE8u;
    {
        const bool branch_taken_0x48efe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EFE8u;
        // 0x48efec: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48efe8) {
            ctx->pc = 0x48F068u;
            goto label_48f068;
        }
    }
    ctx->pc = 0x48EFF0u;
label_48eff0:
    // 0x48eff0: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x48eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
label_48eff4:
    // 0x48eff4: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_48eff8:
    if (ctx->pc == 0x48EFF8u) {
        ctx->pc = 0x48EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EFF4u;
        // 0x48eff8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48EFFCu;
        goto label_48effc;
    }
    ctx->pc = 0x48EFF4u;
    {
        const bool branch_taken_0x48eff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EFF4u;
        // 0x48eff8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48eff4) {
            ctx->pc = 0x48F084u;
            goto label_48f084;
        }
    }
    ctx->pc = 0x48EFFCu;
label_48effc:
    // 0x48effc: 0x10000038  b           . + 4 + (0x38 << 2)
label_48f000:
    if (ctx->pc == 0x48F000u) {
        ctx->pc = 0x48F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EFFCu;
        // 0x48f000: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F004u;
        goto label_48f004;
    }
    ctx->pc = 0x48EFFCu;
    {
        const bool branch_taken_0x48effc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EFFCu;
        // 0x48f000: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48effc) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48F004u;
label_48f004:
    // 0x48f004: 0x8f828a34  lw          $v0, -0x75CC($gp)
    ctx->pc = 0x48f004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937140)));
label_48f008:
    // 0x48f008: 0x10000035  b           . + 4 + (0x35 << 2)
label_48f00c:
    if (ctx->pc == 0x48F00Cu) {
        ctx->pc = 0x48F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F008u;
        // 0x48f00c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F010u;
        goto label_48f010;
    }
    ctx->pc = 0x48F008u;
    {
        const bool branch_taken_0x48f008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F008u;
        // 0x48f00c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f008) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48F010u;
label_48f010:
    // 0x48f010: 0xdf8386f8  ld          $v1, -0x7908($gp)
    ctx->pc = 0x48f010u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
label_48f014:
    // 0x48f014: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x48f014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_48f018:
    // 0x48f018: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_48f01c:
    if (ctx->pc == 0x48F01Cu) {
        ctx->pc = 0x48F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F018u;
        // 0x48f01c: 0x3063300e  andi        $v1, $v1, 0x300E (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12302);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F020u;
        goto label_48f020;
    }
    ctx->pc = 0x48F018u;
    {
        const bool branch_taken_0x48f018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F018u;
        // 0x48f01c: 0x3063300e  andi        $v1, $v1, 0x300E (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12302);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f018) {
            ctx->pc = 0x48F05Cu;
            goto label_48f05c;
        }
    }
    ctx->pc = 0x48F020u;
label_48f020:
    // 0x48f020: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x48f020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_48f024:
    // 0x48f024: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_48f028:
    if (ctx->pc == 0x48F028u) {
        ctx->pc = 0x48F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F024u;
        // 0x48f028: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F02Cu;
        goto label_48f02c;
    }
    ctx->pc = 0x48F024u;
    {
        const bool branch_taken_0x48f024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48f024) {
            ctx->pc = 0x48F028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48F024u;
            // 0x48f028: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48F02Cu;
label_48f02c:
    // 0x48f02c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x48f02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_48f030:
    // 0x48f030: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48f030u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48f034:
    // 0x48f034: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x48f034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_48f038:
    // 0x48f038: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48f038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48f03c:
    // 0x48f03c: 0x2463f220  addiu       $v1, $v1, -0xDE0
    ctx->pc = 0x48f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963744));
label_48f040:
    // 0x48f040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48f040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48f044:
    // 0x48f044: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48f044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48f048:
    // 0x48f048: 0x800008  jr          $a0
label_48f04c:
    if (ctx->pc == 0x48F04Cu) {
        ctx->pc = 0x48F050u;
        goto label_48f050;
    }
    ctx->pc = 0x48F048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F048u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48F050u;
label_48f050:
    // 0x48f050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48f050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48f054:
    // 0x48f054: 0x10000022  b           . + 4 + (0x22 << 2)
label_48f058:
    if (ctx->pc == 0x48F058u) {
        ctx->pc = 0x48F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F054u;
        // 0x48f058: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F05Cu;
        goto label_48f05c;
    }
    ctx->pc = 0x48F054u;
    {
        const bool branch_taken_0x48f054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F054u;
        // 0x48f058: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f054) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48F05Cu;
label_48f05c:
    // 0x48f05c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x48f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_48f060:
    // 0x48f060: 0x1000001f  b           . + 4 + (0x1F << 2)
label_48f064:
    if (ctx->pc == 0x48F064u) {
        ctx->pc = 0x48F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F060u;
        // 0x48f064: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F068u;
        goto label_48f068;
    }
    ctx->pc = 0x48F060u;
    {
        const bool branch_taken_0x48f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F060u;
        // 0x48f064: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f060) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48F068u;
label_48f068:
    // 0x48f068: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48f068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48f06c:
    // 0x48f06c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_48f070:
    if (ctx->pc == 0x48F070u) {
        ctx->pc = 0x48F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F06Cu;
        // 0x48f070: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F074u;
        goto label_48f074;
    }
    ctx->pc = 0x48F06Cu;
    {
        const bool branch_taken_0x48f06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F06Cu;
        // 0x48f070: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f06c) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48F074u;
label_48f074:
    // 0x48f074: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x48f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_48f078:
    // 0x48f078: 0x10000019  b           . + 4 + (0x19 << 2)
label_48f07c:
    if (ctx->pc == 0x48F07Cu) {
        ctx->pc = 0x48F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F078u;
        // 0x48f07c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F080u;
        goto label_48f080;
    }
    ctx->pc = 0x48F078u;
    {
        const bool branch_taken_0x48f078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F078u;
        // 0x48f07c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f078) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48F080u;
label_48f080:
    // 0x48f080: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x48f080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_48f084:
    // 0x48f084: 0x10000016  b           . + 4 + (0x16 << 2)
label_48f088:
    if (ctx->pc == 0x48F088u) {
        ctx->pc = 0x48F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F084u;
        // 0x48f088: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F08Cu;
        goto label_48f08c;
    }
    ctx->pc = 0x48F084u;
    {
        const bool branch_taken_0x48f084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F084u;
        // 0x48f088: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f084) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48F08Cu;
label_48f08c:
    // 0x48f08c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x48f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_48f090:
    // 0x48f090: 0x10000013  b           . + 4 + (0x13 << 2)
label_48f094:
    if (ctx->pc == 0x48F094u) {
        ctx->pc = 0x48F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F090u;
        // 0x48f094: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F098u;
        goto label_48f098;
    }
    ctx->pc = 0x48F090u;
    {
        const bool branch_taken_0x48f090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F090u;
        // 0x48f094: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f090) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48F098u;
label_48f098:
    // 0x48f098: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x48f098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_48f09c:
    // 0x48f09c: 0x10000010  b           . + 4 + (0x10 << 2)
label_48f0a0:
    if (ctx->pc == 0x48F0A0u) {
        ctx->pc = 0x48F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F09Cu;
        // 0x48f0a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F0A4u;
        goto label_48f0a4;
    }
    ctx->pc = 0x48F09Cu;
    {
        const bool branch_taken_0x48f09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F09Cu;
        // 0x48f0a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f09c) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48F0A4u;
label_48f0a4:
    // 0x48f0a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x48f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_48f0a8:
    // 0x48f0a8: 0x1000000d  b           . + 4 + (0xD << 2)
label_48f0ac:
    if (ctx->pc == 0x48F0ACu) {
        ctx->pc = 0x48F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F0A8u;
        // 0x48f0ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F0B0u;
        goto label_48f0b0;
    }
    ctx->pc = 0x48F0A8u;
    {
        const bool branch_taken_0x48f0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F0A8u;
        // 0x48f0ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f0a8) {
            ctx->pc = 0x48F0E0u;
            return;
        }
    }
    ctx->pc = 0x48F0B0u;
label_48f0b0:
    // 0x48f0b0: 0xdf8486f8  ld          $a0, -0x7908($gp)
    ctx->pc = 0x48f0b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
label_48f0b4:
    // 0x48f0b4: 0x30840ff0  andi        $a0, $a0, 0xFF0
    ctx->pc = 0x48f0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4080);
label_48f0b8:
    // 0x48f0b8: 0xc10ac74  jal         func_42B1D0
label_48f0bc:
    if (ctx->pc == 0x48F0BCu) {
        ctx->pc = 0x48F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F0B8u;
        // 0x48f0bc: 0x4213a  dsrl        $a0, $a0, 4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F0C0u;
        goto label_48f0c0;
    }
    ctx->pc = 0x48F0B8u;
    SET_GPR_U32(ctx, 31, 0x48F0C0u);
    ctx->pc = 0x48F0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F0B8u;
    // 0x48f0bc: 0x4213a  dsrl        $a0, $a0, 4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B1D0u, 0x48F0B8u, 0x48F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F0C0u;
label_48f0c0:
    // 0x48f0c0: 0xc78182cc  lwc1        $f1, -0x7D34($gp)
    ctx->pc = 0x48f0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48f0c4:
    // 0x48f0c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x48f0c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_48f0c8:
    // 0x48f0c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x48f0c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_48f0cc:
    // 0x48f0cc: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x48f0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_48f0d0:
    // 0x48f0d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_48f0d4:
    if (ctx->pc == 0x48F0D4u) {
        ctx->pc = 0x48F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F0D0u;
        // 0x48f0d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48F0D8u;
        goto label_fallthrough_0x48f0d0;
    }
    ctx->pc = 0x48F0D0u;
    {
        const bool branch_taken_0x48f0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F0D0u;
        // 0x48f0d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48f0d0) {
            ctx->pc = 0x48F0E4u;
            return;
        }
    }
label_fallthrough_0x48f0d0:
    ctx->pc = 0x48F0D8u;
}
