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

// Function: sub_003FB8D0
// Address: 0x3fb8d0 - 0x3fbb84
void sub_003FB8D0_0x3fb8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB8D0_0x3fb8d0");
#endif

    switch (ctx->pc) {
        case 0x3fb8d0u: goto label_3fb8d0;
        case 0x3fb8d4u: goto label_3fb8d4;
        case 0x3fb8d8u: goto label_3fb8d8;
        case 0x3fb8dcu: goto label_3fb8dc;
        case 0x3fb8e0u: goto label_3fb8e0;
        case 0x3fb8e4u: goto label_3fb8e4;
        case 0x3fb8e8u: goto label_3fb8e8;
        case 0x3fb8ecu: goto label_3fb8ec;
        case 0x3fb8f0u: goto label_3fb8f0;
        case 0x3fb8f4u: goto label_3fb8f4;
        case 0x3fb8f8u: goto label_3fb8f8;
        case 0x3fb8fcu: goto label_3fb8fc;
        case 0x3fb900u: goto label_3fb900;
        case 0x3fb904u: goto label_3fb904;
        case 0x3fb908u: goto label_3fb908;
        case 0x3fb90cu: goto label_3fb90c;
        case 0x3fb910u: goto label_3fb910;
        case 0x3fb914u: goto label_3fb914;
        case 0x3fb918u: goto label_3fb918;
        case 0x3fb91cu: goto label_3fb91c;
        case 0x3fb920u: goto label_3fb920;
        case 0x3fb924u: goto label_3fb924;
        case 0x3fb928u: goto label_3fb928;
        case 0x3fb92cu: goto label_3fb92c;
        case 0x3fb930u: goto label_3fb930;
        case 0x3fb934u: goto label_3fb934;
        case 0x3fb938u: goto label_3fb938;
        case 0x3fb93cu: goto label_3fb93c;
        case 0x3fb940u: goto label_3fb940;
        case 0x3fb944u: goto label_3fb944;
        case 0x3fb948u: goto label_3fb948;
        case 0x3fb94cu: goto label_3fb94c;
        case 0x3fb950u: goto label_3fb950;
        case 0x3fb954u: goto label_3fb954;
        case 0x3fb958u: goto label_3fb958;
        case 0x3fb95cu: goto label_3fb95c;
        case 0x3fb960u: goto label_3fb960;
        case 0x3fb964u: goto label_3fb964;
        case 0x3fb968u: goto label_3fb968;
        case 0x3fb96cu: goto label_3fb96c;
        case 0x3fb970u: goto label_3fb970;
        case 0x3fb974u: goto label_3fb974;
        case 0x3fb978u: goto label_3fb978;
        case 0x3fb97cu: goto label_3fb97c;
        case 0x3fb980u: goto label_3fb980;
        case 0x3fb984u: goto label_3fb984;
        case 0x3fb988u: goto label_3fb988;
        case 0x3fb98cu: goto label_3fb98c;
        case 0x3fb990u: goto label_3fb990;
        case 0x3fb994u: goto label_3fb994;
        case 0x3fb998u: goto label_3fb998;
        case 0x3fb99cu: goto label_3fb99c;
        case 0x3fb9a0u: goto label_3fb9a0;
        case 0x3fb9a4u: goto label_3fb9a4;
        case 0x3fb9a8u: goto label_3fb9a8;
        case 0x3fb9acu: goto label_3fb9ac;
        case 0x3fb9b0u: goto label_3fb9b0;
        case 0x3fb9b4u: goto label_3fb9b4;
        case 0x3fb9b8u: goto label_3fb9b8;
        case 0x3fb9bcu: goto label_3fb9bc;
        case 0x3fb9c0u: goto label_3fb9c0;
        case 0x3fb9c4u: goto label_3fb9c4;
        case 0x3fb9c8u: goto label_3fb9c8;
        case 0x3fb9ccu: goto label_3fb9cc;
        case 0x3fb9d0u: goto label_3fb9d0;
        case 0x3fb9d4u: goto label_3fb9d4;
        case 0x3fb9d8u: goto label_3fb9d8;
        case 0x3fb9dcu: goto label_3fb9dc;
        case 0x3fb9e0u: goto label_3fb9e0;
        case 0x3fb9e4u: goto label_3fb9e4;
        case 0x3fb9e8u: goto label_3fb9e8;
        case 0x3fb9ecu: goto label_3fb9ec;
        case 0x3fb9f0u: goto label_3fb9f0;
        case 0x3fb9f4u: goto label_3fb9f4;
        case 0x3fb9f8u: goto label_3fb9f8;
        case 0x3fb9fcu: goto label_3fb9fc;
        case 0x3fba00u: goto label_3fba00;
        case 0x3fba04u: goto label_3fba04;
        case 0x3fba08u: goto label_3fba08;
        case 0x3fba0cu: goto label_3fba0c;
        case 0x3fba10u: goto label_3fba10;
        case 0x3fba14u: goto label_3fba14;
        case 0x3fba18u: goto label_3fba18;
        case 0x3fba1cu: goto label_3fba1c;
        case 0x3fba20u: goto label_3fba20;
        case 0x3fba24u: goto label_3fba24;
        case 0x3fba28u: goto label_3fba28;
        case 0x3fba2cu: goto label_3fba2c;
        case 0x3fba30u: goto label_3fba30;
        case 0x3fba34u: goto label_3fba34;
        case 0x3fba38u: goto label_3fba38;
        case 0x3fba3cu: goto label_3fba3c;
        case 0x3fba40u: goto label_3fba40;
        case 0x3fba44u: goto label_3fba44;
        case 0x3fba48u: goto label_3fba48;
        case 0x3fba4cu: goto label_3fba4c;
        case 0x3fba50u: goto label_3fba50;
        case 0x3fba54u: goto label_3fba54;
        case 0x3fba58u: goto label_3fba58;
        case 0x3fba5cu: goto label_3fba5c;
        case 0x3fba60u: goto label_3fba60;
        case 0x3fba64u: goto label_3fba64;
        case 0x3fba68u: goto label_3fba68;
        case 0x3fba6cu: goto label_3fba6c;
        case 0x3fba70u: goto label_3fba70;
        case 0x3fba74u: goto label_3fba74;
        case 0x3fba78u: goto label_3fba78;
        case 0x3fba7cu: goto label_3fba7c;
        case 0x3fba80u: goto label_3fba80;
        case 0x3fba84u: goto label_3fba84;
        case 0x3fba88u: goto label_3fba88;
        case 0x3fba8cu: goto label_3fba8c;
        case 0x3fba90u: goto label_3fba90;
        case 0x3fba94u: goto label_3fba94;
        case 0x3fba98u: goto label_3fba98;
        case 0x3fba9cu: goto label_3fba9c;
        case 0x3fbaa0u: goto label_3fbaa0;
        case 0x3fbaa4u: goto label_3fbaa4;
        case 0x3fbaa8u: goto label_3fbaa8;
        case 0x3fbaacu: goto label_3fbaac;
        case 0x3fbab0u: goto label_3fbab0;
        case 0x3fbab4u: goto label_3fbab4;
        case 0x3fbab8u: goto label_3fbab8;
        case 0x3fbabcu: goto label_3fbabc;
        case 0x3fbac0u: goto label_3fbac0;
        case 0x3fbac4u: goto label_3fbac4;
        case 0x3fbac8u: goto label_3fbac8;
        case 0x3fbaccu: goto label_3fbacc;
        case 0x3fbad0u: goto label_3fbad0;
        case 0x3fbad4u: goto label_3fbad4;
        case 0x3fbad8u: goto label_3fbad8;
        case 0x3fbadcu: goto label_3fbadc;
        case 0x3fbae0u: goto label_3fbae0;
        case 0x3fbae4u: goto label_3fbae4;
        case 0x3fbae8u: goto label_3fbae8;
        case 0x3fbaecu: goto label_3fbaec;
        case 0x3fbaf0u: goto label_3fbaf0;
        case 0x3fbaf4u: goto label_3fbaf4;
        case 0x3fbaf8u: goto label_3fbaf8;
        case 0x3fbafcu: goto label_3fbafc;
        case 0x3fbb00u: goto label_3fbb00;
        case 0x3fbb04u: goto label_3fbb04;
        case 0x3fbb08u: goto label_3fbb08;
        case 0x3fbb0cu: goto label_3fbb0c;
        case 0x3fbb10u: goto label_3fbb10;
        case 0x3fbb14u: goto label_3fbb14;
        case 0x3fbb18u: goto label_3fbb18;
        case 0x3fbb1cu: goto label_3fbb1c;
        case 0x3fbb20u: goto label_3fbb20;
        case 0x3fbb24u: goto label_3fbb24;
        case 0x3fbb28u: goto label_3fbb28;
        case 0x3fbb2cu: goto label_3fbb2c;
        case 0x3fbb30u: goto label_3fbb30;
        case 0x3fbb34u: goto label_3fbb34;
        case 0x3fbb38u: goto label_3fbb38;
        case 0x3fbb3cu: goto label_3fbb3c;
        case 0x3fbb40u: goto label_3fbb40;
        case 0x3fbb44u: goto label_3fbb44;
        case 0x3fbb48u: goto label_3fbb48;
        case 0x3fbb4cu: goto label_3fbb4c;
        case 0x3fbb50u: goto label_3fbb50;
        case 0x3fbb54u: goto label_3fbb54;
        case 0x3fbb58u: goto label_3fbb58;
        case 0x3fbb5cu: goto label_3fbb5c;
        case 0x3fbb60u: goto label_3fbb60;
        case 0x3fbb64u: goto label_3fbb64;
        case 0x3fbb68u: goto label_3fbb68;
        case 0x3fbb6cu: goto label_3fbb6c;
        case 0x3fbb70u: goto label_3fbb70;
        case 0x3fbb74u: goto label_3fbb74;
        case 0x3fbb78u: goto label_3fbb78;
        case 0x3fbb7cu: goto label_3fbb7c;
        case 0x3fbb80u: goto label_3fbb80;
        default: break;
    }

    ctx->pc = 0x3fb8d0u;

label_3fb8d0:
    // 0x3fb8d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3fb8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3fb8d4:
    // 0x3fb8d4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3fb8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3fb8d8:
    // 0x3fb8d8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3fb8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3fb8dc:
    // 0x3fb8dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3fb8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fb8e0:
    // 0x3fb8e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3fb8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3fb8e4:
    // 0x3fb8e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3fb8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3fb8e8:
    // 0x3fb8e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3fb8e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fb8ec:
    // 0x3fb8ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3fb8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3fb8f0:
    // 0x3fb8f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3fb8f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fb8f4:
    // 0x3fb8f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3fb8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fb8f8:
    // 0x3fb8f8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fb8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fb8fc:
    // 0x3fb8fc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fb900:
    // 0x3fb900: 0x40f809  jalr        $v0
label_3fb904:
    if (ctx->pc == 0x3FB904u) {
        ctx->pc = 0x3FB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB900u;
        // 0x3fb904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB908u;
        goto label_3fb908;
    }
    ctx->pc = 0x3FB900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FB908u);
        ctx->pc = 0x3FB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB900u;
        // 0x3fb904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB900u, 0x3FB908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FB908u;
label_3fb908:
    // 0x3fb908: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3fb908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fb90c:
    // 0x3fb90c: 0x2e620043  sltiu       $v0, $s3, 0x43
    ctx->pc = 0x3fb90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)67) ? 1 : 0);
label_3fb910:
    // 0x3fb910: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
label_3fb914:
    if (ctx->pc == 0x3FB914u) {
        ctx->pc = 0x3FB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB910u;
        // 0x3fb914: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB918u;
        goto label_3fb918;
    }
    ctx->pc = 0x3FB910u;
    {
        const bool branch_taken_0x3fb910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB910u;
        // 0x3fb914: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb910) {
            ctx->pc = 0x3FBB84u;
            return;
        }
    }
    ctx->pc = 0x3FB918u;
label_3fb918:
    // 0x3fb918: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x3fb918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3fb91c:
    // 0x3fb91c: 0x244270a0  addiu       $v0, $v0, 0x70A0
    ctx->pc = 0x3fb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28832));
label_3fb920:
    // 0x3fb920: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3fb920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3fb924:
    // 0x3fb924: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3fb924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3fb928:
    // 0x3fb928: 0x800008  jr          $a0
label_3fb92c:
    if (ctx->pc == 0x3FB92Cu) {
        ctx->pc = 0x3FB930u;
        goto label_3fb930;
    }
    ctx->pc = 0x3FB928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3FB930u: goto label_3fb930;
            case 0x3FB94Cu: goto label_3fb94c;
            case 0x3FB964u: goto label_3fb964;
            case 0x3FB978u: goto label_3fb978;
            case 0x3FB988u: goto label_3fb988;
            case 0x3FB9D0u: goto label_3fb9d0;
            case 0x3FBA04u: goto label_3fba04;
            case 0x3FBA18u: goto label_3fba18;
            case 0x3FBA80u: goto label_3fba80;
            case 0x3FBAECu: goto label_3fbaec;
            case 0x3FBB0Cu: goto label_3fbb0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB928u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3FB930u;
label_3fb930:
    // 0x3fb930: 0x92250028  lbu         $a1, 0x28($s1)
    ctx->pc = 0x3fb930u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_3fb934:
    // 0x3fb934: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fb934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fb938:
    // 0x3fb938: 0x38a50005  xori        $a1, $a1, 0x5
    ctx->pc = 0x3fb938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
label_3fb93c:
    // 0x3fb93c: 0xc0ea16a  jal         func_3A85A8
label_3fb940:
    if (ctx->pc == 0x3FB940u) {
        ctx->pc = 0x3FB940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB93Cu;
        // 0x3fb940: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB944u;
        goto label_3fb944;
    }
    ctx->pc = 0x3FB93Cu;
    SET_GPR_U32(ctx, 31, 0x3FB944u);
    ctx->pc = 0x3FB940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB93Cu;
    // 0x3fb940: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FB93Cu, 0x3FB944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB944u;
label_3fb944:
    // 0x3fb944: 0x10000090  b           . + 4 + (0x90 << 2)
label_3fb948:
    if (ctx->pc == 0x3FB948u) {
        ctx->pc = 0x3FB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB944u;
        // 0x3fb948: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB94Cu;
        goto label_3fb94c;
    }
    ctx->pc = 0x3FB944u;
    {
        const bool branch_taken_0x3fb944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB944u;
        // 0x3fb948: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb944) {
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FB94Cu;
label_3fb94c:
    // 0x3fb94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fb94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb950:
    // 0x3fb950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fb950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fb954:
    // 0x3fb954: 0xc0fe5dc  jal         func_3F9770
label_3fb958:
    if (ctx->pc == 0x3FB958u) {
        ctx->pc = 0x3FB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB954u;
        // 0x3fb958: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB95Cu;
        goto label_3fb95c;
    }
    ctx->pc = 0x3FB954u;
    SET_GPR_U32(ctx, 31, 0x3FB95Cu);
    ctx->pc = 0x3FB958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB954u;
    // 0x3fb958: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9770u, 0x3FB954u, 0x3FB95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB95Cu;
label_3fb95c:
    // 0x3fb95c: 0x1000008a  b           . + 4 + (0x8A << 2)
label_3fb960:
    if (ctx->pc == 0x3FB960u) {
        ctx->pc = 0x3FB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB95Cu;
        // 0x3fb960: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB964u;
        goto label_3fb964;
    }
    ctx->pc = 0x3FB95Cu;
    {
        const bool branch_taken_0x3fb95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB95Cu;
        // 0x3fb960: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb95c) {
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FB964u;
label_3fb964:
    // 0x3fb964: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3fb964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fb968:
    // 0x3fb968: 0xc0ea16a  jal         func_3A85A8
label_3fb96c:
    if (ctx->pc == 0x3FB96Cu) {
        ctx->pc = 0x3FB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB968u;
        // 0x3fb96c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB970u;
        goto label_3fb970;
    }
    ctx->pc = 0x3FB968u;
    SET_GPR_U32(ctx, 31, 0x3FB970u);
    ctx->pc = 0x3FB96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB968u;
    // 0x3fb96c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3FB968u, 0x3FB970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB970u;
label_3fb970:
    // 0x3fb970: 0x10000085  b           . + 4 + (0x85 << 2)
label_3fb974:
    if (ctx->pc == 0x3FB974u) {
        ctx->pc = 0x3FB974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB970u;
        // 0x3fb974: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB978u;
        goto label_3fb978;
    }
    ctx->pc = 0x3FB970u;
    {
        const bool branch_taken_0x3fb970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB970u;
        // 0x3fb974: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb970) {
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FB978u;
label_3fb978:
    // 0x3fb978: 0xc0ea146  jal         func_3A8518
label_3fb97c:
    if (ctx->pc == 0x3FB97Cu) {
        ctx->pc = 0x3FB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB978u;
        // 0x3fb97c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB980u;
        goto label_3fb980;
    }
    ctx->pc = 0x3FB978u;
    SET_GPR_U32(ctx, 31, 0x3FB980u);
    ctx->pc = 0x3FB97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB978u;
    // 0x3fb97c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FB978u, 0x3FB980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB980u;
label_3fb980:
    // 0x3fb980: 0x10000080  b           . + 4 + (0x80 << 2)
label_3fb984:
    if (ctx->pc == 0x3FB984u) {
        ctx->pc = 0x3FB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB980u;
        // 0x3fb984: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB988u;
        goto label_3fb988;
    }
    ctx->pc = 0x3FB980u;
    {
        const bool branch_taken_0x3fb980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB980u;
        // 0x3fb984: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb980) {
            ctx->pc = 0x3FBB84u;
            return;
        }
    }
    ctx->pc = 0x3FB988u;
label_3fb988:
    // 0x3fb988: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3fb988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fb98c:
    // 0x3fb98c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3fb98cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3fb990:
    // 0x3fb990: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3fb990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3fb994:
    // 0x3fb994: 0x40f809  jalr        $v0
label_3fb998:
    if (ctx->pc == 0x3FB998u) {
        ctx->pc = 0x3FB998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB994u;
        // 0x3fb998: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB99Cu;
        goto label_3fb99c;
    }
    ctx->pc = 0x3FB994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FB99Cu);
        ctx->pc = 0x3FB998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB994u;
        // 0x3fb998: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB994u, 0x3FB99Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FB99Cu;
label_3fb99c:
    // 0x3fb99c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fb99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fb9a0:
    // 0x3fb9a0: 0xc0ea14c  jal         func_3A8530
label_3fb9a4:
    if (ctx->pc == 0x3FB9A4u) {
        ctx->pc = 0x3FB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB9A0u;
        // 0x3fb9a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB9A8u;
        goto label_3fb9a8;
    }
    ctx->pc = 0x3FB9A0u;
    SET_GPR_U32(ctx, 31, 0x3FB9A8u);
    ctx->pc = 0x3FB9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB9A0u;
    // 0x3fb9a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FB9A0u, 0x3FB9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB9A8u;
label_3fb9a8:
    // 0x3fb9a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3fb9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fb9ac:
    // 0x3fb9ac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3fb9acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3fb9b0:
    // 0x3fb9b0: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x3fb9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3fb9b4:
    // 0x3fb9b4: 0xa0f809  jalr        $a1
label_3fb9b8:
    if (ctx->pc == 0x3FB9B8u) {
        ctx->pc = 0x3FB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB9B4u;
        // 0x3fb9b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB9BCu;
        goto label_3fb9bc;
    }
    ctx->pc = 0x3FB9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3FB9BCu);
        ctx->pc = 0x3FB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB9B4u;
        // 0x3fb9b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB9B4u, 0x3FB9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FB9BCu;
label_3fb9bc:
    // 0x3fb9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fb9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb9c0:
    // 0x3fb9c0: 0xc0e5bea  jal         func_396FA8
label_3fb9c4:
    if (ctx->pc == 0x3FB9C4u) {
        ctx->pc = 0x3FB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB9C0u;
        // 0x3fb9c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB9C8u;
        goto label_3fb9c8;
    }
    ctx->pc = 0x3FB9C0u;
    SET_GPR_U32(ctx, 31, 0x3FB9C8u);
    ctx->pc = 0x3FB9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB9C0u;
    // 0x3fb9c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396FA8u, 0x3FB9C0u, 0x3FB9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB9C8u;
label_3fb9c8:
    // 0x3fb9c8: 0x1000006f  b           . + 4 + (0x6F << 2)
label_3fb9cc:
    if (ctx->pc == 0x3FB9CCu) {
        ctx->pc = 0x3FB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB9C8u;
        // 0x3fb9cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB9D0u;
        goto label_3fb9d0;
    }
    ctx->pc = 0x3FB9C8u;
    {
        const bool branch_taken_0x3fb9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB9C8u;
        // 0x3fb9cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb9c8) {
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FB9D0u;
label_3fb9d0:
    // 0x3fb9d0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3fb9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3fb9d4:
    // 0x3fb9d4: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
label_3fb9d8:
    if (ctx->pc == 0x3FB9D8u) {
        ctx->pc = 0x3FB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB9D4u;
        // 0x3fb9d8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB9DCu;
        goto label_3fb9dc;
    }
    ctx->pc = 0x3FB9D4u;
    {
        const bool branch_taken_0x3fb9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fb9d4) {
            ctx->pc = 0x3FB9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB9D4u;
            // 0x3fb9d8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FB9DCu;
label_3fb9dc:
    // 0x3fb9dc: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x3fb9dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_3fb9e0:
    // 0x3fb9e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3fb9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fb9e4:
    // 0x3fb9e4: 0x54620068  bnel        $v1, $v0, . + 4 + (0x68 << 2)
label_3fb9e8:
    if (ctx->pc == 0x3FB9E8u) {
        ctx->pc = 0x3FB9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB9E4u;
        // 0x3fb9e8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB9ECu;
        goto label_3fb9ec;
    }
    ctx->pc = 0x3FB9E4u;
    {
        const bool branch_taken_0x3fb9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fb9e4) {
            ctx->pc = 0x3FB9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB9E4u;
            // 0x3fb9e8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FB9ECu;
label_3fb9ec:
    // 0x3fb9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fb9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fb9f0:
    // 0x3fb9f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fb9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fb9f4:
    // 0x3fb9f4: 0xc0fe644  jal         func_3F9910
label_3fb9f8:
    if (ctx->pc == 0x3FB9F8u) {
        ctx->pc = 0x3FB9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB9F4u;
        // 0x3fb9f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FB9FCu;
        goto label_3fb9fc;
    }
    ctx->pc = 0x3FB9F4u;
    SET_GPR_U32(ctx, 31, 0x3FB9FCu);
    ctx->pc = 0x3FB9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB9F4u;
    // 0x3fb9f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9910u, 0x3FB9F4u, 0x3FB9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB9FCu;
label_3fb9fc:
    // 0x3fb9fc: 0x10000062  b           . + 4 + (0x62 << 2)
label_3fba00:
    if (ctx->pc == 0x3FBA00u) {
        ctx->pc = 0x3FBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB9FCu;
        // 0x3fba00: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA04u;
        goto label_3fba04;
    }
    ctx->pc = 0x3FB9FCu;
    {
        const bool branch_taken_0x3fb9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB9FCu;
        // 0x3fba00: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb9fc) {
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FBA04u;
label_3fba04:
    // 0x3fba04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fba08:
    // 0x3fba08: 0xc0fe3ce  jal         func_3F8F38
label_3fba0c:
    if (ctx->pc == 0x3FBA0Cu) {
        ctx->pc = 0x3FBA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA08u;
        // 0x3fba0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA10u;
        goto label_3fba10;
    }
    ctx->pc = 0x3FBA08u;
    SET_GPR_U32(ctx, 31, 0x3FBA10u);
    ctx->pc = 0x3FBA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBA08u;
    // 0x3fba0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F8F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F8F38u, 0x3FBA08u, 0x3FBA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBA10u;
label_3fba10:
    // 0x3fba10: 0x1000005d  b           . + 4 + (0x5D << 2)
label_3fba14:
    if (ctx->pc == 0x3FBA14u) {
        ctx->pc = 0x3FBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA10u;
        // 0x3fba14: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA18u;
        goto label_3fba18;
    }
    ctx->pc = 0x3FBA10u;
    {
        const bool branch_taken_0x3fba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA10u;
        // 0x3fba14: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fba10) {
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FBA18u;
label_3fba18:
    // 0x3fba18: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3fba18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3fba1c:
    // 0x3fba1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fba20:
    // 0x3fba20: 0xc0e9666  jal         func_3A5998
label_3fba24:
    if (ctx->pc == 0x3FBA24u) {
        ctx->pc = 0x3FBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA20u;
        // 0x3fba24: 0x24a56bf8  addiu       $a1, $a1, 0x6BF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA28u;
        goto label_3fba28;
    }
    ctx->pc = 0x3FBA20u;
    SET_GPR_U32(ctx, 31, 0x3FBA28u);
    ctx->pc = 0x3FBA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBA20u;
    // 0x3fba24: 0x24a56bf8  addiu       $a1, $a1, 0x6BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FBA20u, 0x3FBA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBA28u;
label_3fba28:
    // 0x3fba28: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3fba2c:
    if (ctx->pc == 0x3FBA2Cu) {
        ctx->pc = 0x3FBA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA28u;
        // 0x3fba2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA30u;
        goto label_3fba30;
    }
    ctx->pc = 0x3FBA28u;
    {
        const bool branch_taken_0x3fba28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FBA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA28u;
        // 0x3fba2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fba28) {
            ctx->pc = 0x3FBA58u;
            goto label_3fba58;
        }
    }
    ctx->pc = 0x3FBA30u;
label_3fba30:
    // 0x3fba30: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3fba30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3fba34:
    // 0x3fba34: 0xc0e9666  jal         func_3A5998
label_3fba38:
    if (ctx->pc == 0x3FBA38u) {
        ctx->pc = 0x3FBA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA34u;
        // 0x3fba38: 0x24a56d00  addiu       $a1, $a1, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA3Cu;
        goto label_3fba3c;
    }
    ctx->pc = 0x3FBA34u;
    SET_GPR_U32(ctx, 31, 0x3FBA3Cu);
    ctx->pc = 0x3FBA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBA34u;
    // 0x3fba38: 0x24a56d00  addiu       $a1, $a1, 0x6D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FBA34u, 0x3FBA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBA3Cu;
label_3fba3c:
    // 0x3fba3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3fba40:
    if (ctx->pc == 0x3FBA40u) {
        ctx->pc = 0x3FBA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA3Cu;
        // 0x3fba40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA44u;
        goto label_3fba44;
    }
    ctx->pc = 0x3FBA3Cu;
    {
        const bool branch_taken_0x3fba3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FBA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA3Cu;
        // 0x3fba40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fba3c) {
            ctx->pc = 0x3FBA58u;
            goto label_3fba58;
        }
    }
    ctx->pc = 0x3FBA44u;
label_3fba44:
    // 0x3fba44: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3fba44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3fba48:
    // 0x3fba48: 0xc0e9666  jal         func_3A5998
label_3fba4c:
    if (ctx->pc == 0x3FBA4Cu) {
        ctx->pc = 0x3FBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA48u;
        // 0x3fba4c: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA50u;
        goto label_3fba50;
    }
    ctx->pc = 0x3FBA48u;
    SET_GPR_U32(ctx, 31, 0x3FBA50u);
    ctx->pc = 0x3FBA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBA48u;
    // 0x3fba4c: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FBA48u, 0x3FBA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBA50u;
label_3fba50:
    // 0x3fba50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3fba54:
    if (ctx->pc == 0x3FBA54u) {
        ctx->pc = 0x3FBA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA50u;
        // 0x3fba54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA58u;
        goto label_3fba58;
    }
    ctx->pc = 0x3FBA50u;
    {
        const bool branch_taken_0x3fba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA50u;
        // 0x3fba54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fba50) {
            ctx->pc = 0x3FBA6Cu;
            goto label_3fba6c;
        }
    }
    ctx->pc = 0x3FBA58u;
label_3fba58:
    // 0x3fba58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fba58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fba5c:
    // 0x3fba5c: 0xc0fe90e  jal         func_3FA438
label_3fba60:
    if (ctx->pc == 0x3FBA60u) {
        ctx->pc = 0x3FBA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA5Cu;
        // 0x3fba60: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA64u;
        goto label_3fba64;
    }
    ctx->pc = 0x3FBA5Cu;
    SET_GPR_U32(ctx, 31, 0x3FBA64u);
    ctx->pc = 0x3FBA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBA5Cu;
    // 0x3fba60: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FA438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FA438u, 0x3FBA5Cu, 0x3FBA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBA64u;
label_3fba64:
    // 0x3fba64: 0x10000048  b           . + 4 + (0x48 << 2)
label_3fba68:
    if (ctx->pc == 0x3FBA68u) {
        ctx->pc = 0x3FBA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA64u;
        // 0x3fba68: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA6Cu;
        goto label_3fba6c;
    }
    ctx->pc = 0x3FBA64u;
    {
        const bool branch_taken_0x3fba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA64u;
        // 0x3fba68: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fba64) {
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FBA6Cu;
label_3fba6c:
    // 0x3fba6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fba6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fba70:
    // 0x3fba70: 0xc0fe6b4  jal         func_3F9AD0
label_3fba74:
    if (ctx->pc == 0x3FBA74u) {
        ctx->pc = 0x3FBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA70u;
        // 0x3fba74: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA78u;
        goto label_3fba78;
    }
    ctx->pc = 0x3FBA70u;
    SET_GPR_U32(ctx, 31, 0x3FBA78u);
    ctx->pc = 0x3FBA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBA70u;
    // 0x3fba74: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9AD0u, 0x3FBA70u, 0x3FBA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBA78u;
label_3fba78:
    // 0x3fba78: 0x10000043  b           . + 4 + (0x43 << 2)
label_3fba7c:
    if (ctx->pc == 0x3FBA7Cu) {
        ctx->pc = 0x3FBA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA78u;
        // 0x3fba7c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA80u;
        goto label_3fba80;
    }
    ctx->pc = 0x3FBA78u;
    {
        const bool branch_taken_0x3fba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA78u;
        // 0x3fba7c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fba78) {
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FBA80u;
label_3fba80:
    // 0x3fba80: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3fba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3fba84:
    // 0x3fba84: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_3fba88:
    if (ctx->pc == 0x3FBA88u) {
        ctx->pc = 0x3FBA8Cu;
        goto label_3fba8c;
    }
    ctx->pc = 0x3FBA84u;
    {
        const bool branch_taken_0x3fba84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fba84) {
            ctx->pc = 0x3FBADCu;
            goto label_3fbadc;
        }
    }
    ctx->pc = 0x3FBA8Cu;
label_3fba8c:
    // 0x3fba8c: 0xc0ea146  jal         func_3A8518
label_3fba90:
    if (ctx->pc == 0x3FBA90u) {
        ctx->pc = 0x3FBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA8Cu;
        // 0x3fba90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBA94u;
        goto label_3fba94;
    }
    ctx->pc = 0x3FBA8Cu;
    SET_GPR_U32(ctx, 31, 0x3FBA94u);
    ctx->pc = 0x3FBA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBA8Cu;
    // 0x3fba90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FBA8Cu, 0x3FBA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBA94u;
label_3fba94:
    // 0x3fba94: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3fba94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3fba98:
    // 0x3fba98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3fba98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fba9c:
    // 0x3fba9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fba9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fbaa0:
    // 0x3fbaa0: 0xc0fe3f4  jal         func_3F8FD0
label_3fbaa4:
    if (ctx->pc == 0x3FBAA4u) {
        ctx->pc = 0x3FBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBAA0u;
        // 0x3fbaa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBAA8u;
        goto label_3fbaa8;
    }
    ctx->pc = 0x3FBAA0u;
    SET_GPR_U32(ctx, 31, 0x3FBAA8u);
    ctx->pc = 0x3FBAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBAA0u;
    // 0x3fbaa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F8FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F8FD0u, 0x3FBAA0u, 0x3FBAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBAA8u;
label_3fbaa8:
    // 0x3fbaa8: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x3fbaa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_3fbaac:
    // 0x3fbaac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3fbaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fbab0:
    // 0x3fbab0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3fbab4:
    if (ctx->pc == 0x3FBAB4u) {
        ctx->pc = 0x3FBAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBAB0u;
        // 0x3fbab4: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBAB8u;
        goto label_3fbab8;
    }
    ctx->pc = 0x3FBAB0u;
    {
        const bool branch_taken_0x3fbab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3fbab0) {
            ctx->pc = 0x3FBAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FBAB0u;
            // 0x3fbab4: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FBAC4u;
            goto label_3fbac4;
        }
    }
    ctx->pc = 0x3FBAB8u;
label_3fbab8:
    // 0x3fbab8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3fbab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3fbabc:
    // 0x3fbabc: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x3fbabcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_3fbac0:
    // 0x3fbac0: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3fbac0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3fbac4:
    // 0x3fbac4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3fbac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fbac8:
    // 0x3fbac8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3fbac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3fbacc:
    // 0x3fbacc: 0xc0e9bba  jal         func_3A6EE8
label_3fbad0:
    if (ctx->pc == 0x3FBAD0u) {
        ctx->pc = 0x3FBAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBACCu;
        // 0x3fbad0: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBAD4u;
        goto label_3fbad4;
    }
    ctx->pc = 0x3FBACCu;
    SET_GPR_U32(ctx, 31, 0x3FBAD4u);
    ctx->pc = 0x3FBAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBACCu;
    // 0x3fbad0: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EE8u, 0x3FBACCu, 0x3FBAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBAD4u;
label_3fbad4:
    // 0x3fbad4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3fbad8:
    if (ctx->pc == 0x3FBAD8u) {
        ctx->pc = 0x3FBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBAD4u;
        // 0x3fbad8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBADCu;
        goto label_3fbadc;
    }
    ctx->pc = 0x3FBAD4u;
    {
        const bool branch_taken_0x3fbad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBAD4u;
        // 0x3fbad8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbad4) {
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FBADCu;
label_3fbadc:
    // 0x3fbadc: 0xc0ea146  jal         func_3A8518
label_3fbae0:
    if (ctx->pc == 0x3FBAE0u) {
        ctx->pc = 0x3FBAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBADCu;
        // 0x3fbae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBAE4u;
        goto label_3fbae4;
    }
    ctx->pc = 0x3FBADCu;
    SET_GPR_U32(ctx, 31, 0x3FBAE4u);
    ctx->pc = 0x3FBAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBADCu;
    // 0x3fbae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3FBADCu, 0x3FBAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBAE4u;
label_3fbae4:
    // 0x3fbae4: 0x10000027  b           . + 4 + (0x27 << 2)
label_3fbae8:
    if (ctx->pc == 0x3FBAE8u) {
        ctx->pc = 0x3FBAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBAE4u;
        // 0x3fbae8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBAECu;
        goto label_3fbaec;
    }
    ctx->pc = 0x3FBAE4u;
    {
        const bool branch_taken_0x3fbae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBAE4u;
        // 0x3fbae8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbae4) {
            ctx->pc = 0x3FBB84u;
            return;
        }
    }
    ctx->pc = 0x3FBAECu;
label_3fbaec:
    // 0x3fbaec: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3fbaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3fbaf0:
    // 0x3fbaf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fbaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fbaf4:
    // 0x3fbaf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3fbaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3fbaf8:
    // 0x3fbaf8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3fbaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_3fbafc:
    // 0x3fbafc: 0xc0e858c  jal         func_3A1630
label_3fbb00:
    if (ctx->pc == 0x3FBB00u) {
        ctx->pc = 0x3FBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBAFCu;
        // 0x3fbb00: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBB04u;
        goto label_3fbb04;
    }
    ctx->pc = 0x3FBAFCu;
    SET_GPR_U32(ctx, 31, 0x3FBB04u);
    ctx->pc = 0x3FBB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBAFCu;
    // 0x3fbb00: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FBAFCu, 0x3FBB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBB04u;
label_3fbb04:
    // 0x3fbb04: 0x10000020  b           . + 4 + (0x20 << 2)
label_3fbb08:
    if (ctx->pc == 0x3FBB08u) {
        ctx->pc = 0x3FBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB04u;
        // 0x3fbb08: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBB0Cu;
        goto label_3fbb0c;
    }
    ctx->pc = 0x3FBB04u;
    {
        const bool branch_taken_0x3fbb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB04u;
        // 0x3fbb08: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbb04) {
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FBB0Cu;
label_3fbb0c:
    // 0x3fbb0c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3fbb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3fbb10:
    // 0x3fbb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fbb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fbb14:
    // 0x3fbb14: 0xc0e9666  jal         func_3A5998
label_3fbb18:
    if (ctx->pc == 0x3FBB18u) {
        ctx->pc = 0x3FBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB14u;
        // 0x3fbb18: 0x24a56d00  addiu       $a1, $a1, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBB1Cu;
        goto label_3fbb1c;
    }
    ctx->pc = 0x3FBB14u;
    SET_GPR_U32(ctx, 31, 0x3FBB1Cu);
    ctx->pc = 0x3FBB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBB14u;
    // 0x3fbb18: 0x24a56d00  addiu       $a1, $a1, 0x6D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5998u, 0x3FBB14u, 0x3FBB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBB1Cu;
label_3fbb1c:
    // 0x3fbb1c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_3fbb20:
    if (ctx->pc == 0x3FBB20u) {
        ctx->pc = 0x3FBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB1Cu;
        // 0x3fbb20: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBB24u;
        goto label_3fbb24;
    }
    ctx->pc = 0x3FBB1Cu;
    {
        const bool branch_taken_0x3fbb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB1Cu;
        // 0x3fbb20: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbb1c) {
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FBB24u;
label_3fbb24:
    // 0x3fbb24: 0x26300014  addiu       $s0, $s1, 0x14
    ctx->pc = 0x3fbb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_3fbb28:
    // 0x3fbb28: 0xc0e4060  jal         func_390180
label_3fbb2c:
    if (ctx->pc == 0x3FBB2Cu) {
        ctx->pc = 0x3FBB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB28u;
        // 0x3fbb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBB30u;
        goto label_3fbb30;
    }
    ctx->pc = 0x3FBB28u;
    SET_GPR_U32(ctx, 31, 0x3FBB30u);
    ctx->pc = 0x3FBB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBB28u;
    // 0x3fbb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FBB28u, 0x3FBB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBB30u;
label_3fbb30:
    // 0x3fbb30: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3fbb34:
    if (ctx->pc == 0x3FBB34u) {
        ctx->pc = 0x3FBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB30u;
        // 0x3fbb34: 0x26300018  addiu       $s0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBB38u;
        goto label_3fbb38;
    }
    ctx->pc = 0x3FBB30u;
    {
        const bool branch_taken_0x3fbb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbb30) {
            ctx->pc = 0x3FBB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FBB30u;
            // 0x3fbb34: 0x26300018  addiu       $s0, $s1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FBB58u;
            goto label_3fbb58;
        }
    }
    ctx->pc = 0x3FBB38u;
label_3fbb38:
    // 0x3fbb38: 0xc0e4060  jal         func_390180
label_3fbb3c:
    if (ctx->pc == 0x3FBB3Cu) {
        ctx->pc = 0x3FBB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB38u;
        // 0x3fbb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBB40u;
        goto label_3fbb40;
    }
    ctx->pc = 0x3FBB38u;
    SET_GPR_U32(ctx, 31, 0x3FBB40u);
    ctx->pc = 0x3FBB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBB38u;
    // 0x3fbb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FBB38u, 0x3FBB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBB40u;
label_3fbb40:
    // 0x3fbb40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3fbb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fbb44:
    // 0x3fbb44: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3fbb44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3fbb48:
    // 0x3fbb48: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x3fbb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3fbb4c:
    // 0x3fbb4c: 0xa0f809  jalr        $a1
label_3fbb50:
    if (ctx->pc == 0x3FBB50u) {
        ctx->pc = 0x3FBB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB4Cu;
        // 0x3fbb50: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBB54u;
        goto label_3fbb54;
    }
    ctx->pc = 0x3FBB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3FBB54u);
        ctx->pc = 0x3FBB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB4Cu;
        // 0x3fbb50: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FBB4Cu, 0x3FBB54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FBB54u;
label_3fbb54:
    // 0x3fbb54: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x3fbb54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3fbb58:
    // 0x3fbb58: 0xc0e4060  jal         func_390180
label_3fbb5c:
    if (ctx->pc == 0x3FBB5Cu) {
        ctx->pc = 0x3FBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB58u;
        // 0x3fbb5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBB60u;
        goto label_3fbb60;
    }
    ctx->pc = 0x3FBB58u;
    SET_GPR_U32(ctx, 31, 0x3FBB60u);
    ctx->pc = 0x3FBB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBB58u;
    // 0x3fbb5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FBB58u, 0x3FBB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBB60u;
label_3fbb60:
    // 0x3fbb60: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3fbb64:
    if (ctx->pc == 0x3FBB64u) {
        ctx->pc = 0x3FBB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB60u;
        // 0x3fbb64: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBB68u;
        goto label_3fbb68;
    }
    ctx->pc = 0x3FBB60u;
    {
        const bool branch_taken_0x3fbb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbb60) {
            ctx->pc = 0x3FBB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FBB60u;
            // 0x3fbb64: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FBB88u;
            return;
        }
    }
    ctx->pc = 0x3FBB68u;
label_3fbb68:
    // 0x3fbb68: 0xc0e4060  jal         func_390180
label_3fbb6c:
    if (ctx->pc == 0x3FBB6Cu) {
        ctx->pc = 0x3FBB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB68u;
        // 0x3fbb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBB70u;
        goto label_3fbb70;
    }
    ctx->pc = 0x3FBB68u;
    SET_GPR_U32(ctx, 31, 0x3FBB70u);
    ctx->pc = 0x3FBB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBB68u;
    // 0x3fbb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3FBB68u, 0x3FBB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBB70u;
label_3fbb70:
    // 0x3fbb70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3fbb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3fbb74:
    // 0x3fbb74: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3fbb74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3fbb78:
    // 0x3fbb78: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x3fbb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3fbb7c:
    // 0x3fbb7c: 0xa0f809  jalr        $a1
label_3fbb80:
    if (ctx->pc == 0x3FBB80u) {
        ctx->pc = 0x3FBB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB7Cu;
        // 0x3fbb80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FBB84u;
        goto label_fallthrough_0x3fbb7c;
    }
    ctx->pc = 0x3FBB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3FBB84u);
        ctx->pc = 0x3FBB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB7Cu;
        // 0x3fbb80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FBB7Cu, 0x3FBB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x3fbb7c:
    ctx->pc = 0x3FBB84u;
}
