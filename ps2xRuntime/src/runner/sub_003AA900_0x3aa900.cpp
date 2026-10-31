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

// Function: sub_003AA900
// Address: 0x3aa900 - 0x3aaa38
void sub_003AA900_0x3aa900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA900_0x3aa900");
#endif

    switch (ctx->pc) {
        case 0x3aa900u: goto label_3aa900;
        case 0x3aa904u: goto label_3aa904;
        case 0x3aa908u: goto label_3aa908;
        case 0x3aa90cu: goto label_3aa90c;
        case 0x3aa910u: goto label_3aa910;
        case 0x3aa914u: goto label_3aa914;
        case 0x3aa918u: goto label_3aa918;
        case 0x3aa91cu: goto label_3aa91c;
        case 0x3aa920u: goto label_3aa920;
        case 0x3aa924u: goto label_3aa924;
        case 0x3aa928u: goto label_3aa928;
        case 0x3aa92cu: goto label_3aa92c;
        case 0x3aa930u: goto label_3aa930;
        case 0x3aa934u: goto label_3aa934;
        case 0x3aa938u: goto label_3aa938;
        case 0x3aa93cu: goto label_3aa93c;
        case 0x3aa940u: goto label_3aa940;
        case 0x3aa944u: goto label_3aa944;
        case 0x3aa948u: goto label_3aa948;
        case 0x3aa94cu: goto label_3aa94c;
        case 0x3aa950u: goto label_3aa950;
        case 0x3aa954u: goto label_3aa954;
        case 0x3aa958u: goto label_3aa958;
        case 0x3aa95cu: goto label_3aa95c;
        case 0x3aa960u: goto label_3aa960;
        case 0x3aa964u: goto label_3aa964;
        case 0x3aa968u: goto label_3aa968;
        case 0x3aa96cu: goto label_3aa96c;
        case 0x3aa970u: goto label_3aa970;
        case 0x3aa974u: goto label_3aa974;
        case 0x3aa978u: goto label_3aa978;
        case 0x3aa97cu: goto label_3aa97c;
        case 0x3aa980u: goto label_3aa980;
        case 0x3aa984u: goto label_3aa984;
        case 0x3aa988u: goto label_3aa988;
        case 0x3aa98cu: goto label_3aa98c;
        case 0x3aa990u: goto label_3aa990;
        case 0x3aa994u: goto label_3aa994;
        case 0x3aa998u: goto label_3aa998;
        case 0x3aa99cu: goto label_3aa99c;
        case 0x3aa9a0u: goto label_3aa9a0;
        case 0x3aa9a4u: goto label_3aa9a4;
        case 0x3aa9a8u: goto label_3aa9a8;
        case 0x3aa9acu: goto label_3aa9ac;
        case 0x3aa9b0u: goto label_3aa9b0;
        case 0x3aa9b4u: goto label_3aa9b4;
        case 0x3aa9b8u: goto label_3aa9b8;
        case 0x3aa9bcu: goto label_3aa9bc;
        case 0x3aa9c0u: goto label_3aa9c0;
        case 0x3aa9c4u: goto label_3aa9c4;
        case 0x3aa9c8u: goto label_3aa9c8;
        case 0x3aa9ccu: goto label_3aa9cc;
        case 0x3aa9d0u: goto label_3aa9d0;
        case 0x3aa9d4u: goto label_3aa9d4;
        case 0x3aa9d8u: goto label_3aa9d8;
        case 0x3aa9dcu: goto label_3aa9dc;
        case 0x3aa9e0u: goto label_3aa9e0;
        case 0x3aa9e4u: goto label_3aa9e4;
        case 0x3aa9e8u: goto label_3aa9e8;
        case 0x3aa9ecu: goto label_3aa9ec;
        case 0x3aa9f0u: goto label_3aa9f0;
        case 0x3aa9f4u: goto label_3aa9f4;
        case 0x3aa9f8u: goto label_3aa9f8;
        case 0x3aa9fcu: goto label_3aa9fc;
        case 0x3aaa00u: goto label_3aaa00;
        case 0x3aaa04u: goto label_3aaa04;
        case 0x3aaa08u: goto label_3aaa08;
        case 0x3aaa0cu: goto label_3aaa0c;
        case 0x3aaa10u: goto label_3aaa10;
        case 0x3aaa14u: goto label_3aaa14;
        case 0x3aaa18u: goto label_3aaa18;
        case 0x3aaa1cu: goto label_3aaa1c;
        case 0x3aaa20u: goto label_3aaa20;
        case 0x3aaa24u: goto label_3aaa24;
        case 0x3aaa28u: goto label_3aaa28;
        case 0x3aaa2cu: goto label_3aaa2c;
        case 0x3aaa30u: goto label_3aaa30;
        case 0x3aaa34u: goto label_3aaa34;
        default: break;
    }

    ctx->pc = 0x3aa900u;

label_3aa900:
    // 0x3aa900: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3aa900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3aa904:
    // 0x3aa904: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3aa904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3aa908:
    // 0x3aa908: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3aa908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3aa90c:
    // 0x3aa90c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aa90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aa910:
    // 0x3aa910: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3aa910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3aa914:
    // 0x3aa914: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3aa914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3aa918:
    // 0x3aa918: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3aa918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3aa91c:
    // 0x3aa91c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3aa91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3aa920:
    // 0x3aa920: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3aa920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3aa924:
    // 0x3aa924: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3aa924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3aa928:
    // 0x3aa928: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3aa928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3aa92c:
    // 0x3aa92c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3aa92cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3aa930:
    // 0x3aa930: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3aa930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3aa934:
    // 0x3aa934: 0x40f809  jalr        $v0
label_3aa938:
    if (ctx->pc == 0x3AA938u) {
        ctx->pc = 0x3AA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA934u;
        // 0x3aa938: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA93Cu;
        goto label_3aa93c;
    }
    ctx->pc = 0x3AA934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA93Cu);
        ctx->pc = 0x3AA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA934u;
        // 0x3aa938: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA934u, 0x3AA93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA93Cu;
label_3aa93c:
    // 0x3aa93c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3aa93cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa940:
    // 0x3aa940: 0xc0ea146  jal         func_3A8518
label_3aa944:
    if (ctx->pc == 0x3AA944u) {
        ctx->pc = 0x3AA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA940u;
        // 0x3aa944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA948u;
        goto label_3aa948;
    }
    ctx->pc = 0x3AA940u;
    SET_GPR_U32(ctx, 31, 0x3AA948u);
    ctx->pc = 0x3AA944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA940u;
    // 0x3aa944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AA940u, 0x3AA948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA948u;
label_3aa948:
    // 0x3aa948: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3aa948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aa94c:
    // 0x3aa94c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3aa94cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa950:
    // 0x3aa950: 0xc0ea12a  jal         func_3A84A8
label_3aa954:
    if (ctx->pc == 0x3AA954u) {
        ctx->pc = 0x3AA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA950u;
        // 0x3aa954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA958u;
        goto label_3aa958;
    }
    ctx->pc = 0x3AA950u;
    SET_GPR_U32(ctx, 31, 0x3AA958u);
    ctx->pc = 0x3AA954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA950u;
    // 0x3aa954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AA950u, 0x3AA958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA958u;
label_3aa958:
    // 0x3aa958: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3aa958u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3aa95c:
    // 0x3aa95c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3aa95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aa960:
    // 0x3aa960: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3aa960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aa964:
    // 0x3aa964: 0xc0ea12a  jal         func_3A84A8
label_3aa968:
    if (ctx->pc == 0x3AA968u) {
        ctx->pc = 0x3AA968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA964u;
        // 0x3aa968: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA96Cu;
        goto label_3aa96c;
    }
    ctx->pc = 0x3AA964u;
    SET_GPR_U32(ctx, 31, 0x3AA96Cu);
    ctx->pc = 0x3AA968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA964u;
    // 0x3aa968: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AA964u, 0x3AA96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA96Cu;
label_3aa96c:
    // 0x3aa96c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3aa96cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3aa970:
    // 0x3aa970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3aa970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aa974:
    // 0x3aa974: 0xc0ea146  jal         func_3A8518
label_3aa978:
    if (ctx->pc == 0x3AA978u) {
        ctx->pc = 0x3AA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA974u;
        // 0x3aa978: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA97Cu;
        goto label_3aa97c;
    }
    ctx->pc = 0x3AA974u;
    SET_GPR_U32(ctx, 31, 0x3AA97Cu);
    ctx->pc = 0x3AA978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA974u;
    // 0x3aa978: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AA974u, 0x3AA97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA97Cu;
label_3aa97c:
    // 0x3aa97c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3aa97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aa980:
    // 0x3aa980: 0xc0ea14c  jal         func_3A8530
label_3aa984:
    if (ctx->pc == 0x3AA984u) {
        ctx->pc = 0x3AA984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA980u;
        // 0x3aa984: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA988u;
        goto label_3aa988;
    }
    ctx->pc = 0x3AA980u;
    SET_GPR_U32(ctx, 31, 0x3AA988u);
    ctx->pc = 0x3AA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA980u;
    // 0x3aa984: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3AA980u, 0x3AA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA988u;
label_3aa988:
    // 0x3aa988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3aa988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aa98c:
    // 0x3aa98c: 0xc0ea146  jal         func_3A8518
label_3aa990:
    if (ctx->pc == 0x3AA990u) {
        ctx->pc = 0x3AA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA98Cu;
        // 0x3aa990: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA994u;
        goto label_3aa994;
    }
    ctx->pc = 0x3AA98Cu;
    SET_GPR_U32(ctx, 31, 0x3AA994u);
    ctx->pc = 0x3AA990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA98Cu;
    // 0x3aa990: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AA98Cu, 0x3AA994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA994u;
label_3aa994:
    // 0x3aa994: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3aa994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa998:
    // 0x3aa998: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3aa998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aa99c:
    // 0x3aa99c: 0xc0e858c  jal         func_3A1630
label_3aa9a0:
    if (ctx->pc == 0x3AA9A0u) {
        ctx->pc = 0x3AA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA99Cu;
        // 0x3aa9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA9A4u;
        goto label_3aa9a4;
    }
    ctx->pc = 0x3AA99Cu;
    SET_GPR_U32(ctx, 31, 0x3AA9A4u);
    ctx->pc = 0x3AA9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA99Cu;
    // 0x3aa9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AA99Cu, 0x3AA9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA9A4u;
label_3aa9a4:
    // 0x3aa9a4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3aa9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3aa9a8:
    // 0x3aa9a8: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3aa9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3aa9ac:
    // 0x3aa9ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3aa9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aa9b0:
    // 0x3aa9b0: 0xc0e896e  jal         func_3A25B8
label_3aa9b4:
    if (ctx->pc == 0x3AA9B4u) {
        ctx->pc = 0x3AA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA9B0u;
        // 0x3aa9b4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA9B8u;
        goto label_3aa9b8;
    }
    ctx->pc = 0x3AA9B0u;
    SET_GPR_U32(ctx, 31, 0x3AA9B8u);
    ctx->pc = 0x3AA9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA9B0u;
    // 0x3aa9b4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3AA9B0u, 0x3AA9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA9B8u;
label_3aa9b8:
    // 0x3aa9b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3aa9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aa9bc:
    // 0x3aa9bc: 0xc0e862e  jal         func_3A18B8
label_3aa9c0:
    if (ctx->pc == 0x3AA9C0u) {
        ctx->pc = 0x3AA9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA9BCu;
        // 0x3aa9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA9C4u;
        goto label_3aa9c4;
    }
    ctx->pc = 0x3AA9BCu;
    SET_GPR_U32(ctx, 31, 0x3AA9C4u);
    ctx->pc = 0x3AA9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA9BCu;
    // 0x3aa9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3AA9BCu, 0x3AA9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA9C4u;
label_3aa9c4:
    // 0x3aa9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aa9c8:
    // 0x3aa9c8: 0xc0e896c  jal         func_3A25B0
label_3aa9cc:
    if (ctx->pc == 0x3AA9CCu) {
        ctx->pc = 0x3AA9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA9C8u;
        // 0x3aa9cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA9D0u;
        goto label_3aa9d0;
    }
    ctx->pc = 0x3AA9C8u;
    SET_GPR_U32(ctx, 31, 0x3AA9D0u);
    ctx->pc = 0x3AA9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA9C8u;
    // 0x3aa9cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3AA9C8u, 0x3AA9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA9D0u;
label_3aa9d0:
    // 0x3aa9d0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3aa9d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa9d4:
    // 0x3aa9d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3aa9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3aa9d8:
    // 0x3aa9d8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3aa9d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3aa9dc:
    // 0x3aa9dc: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3aa9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3aa9e0:
    // 0x3aa9e0: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3aa9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3aa9e4:
    // 0x3aa9e4: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x3aa9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
label_3aa9e8:
    // 0x3aa9e8: 0x16840009  bne         $s4, $a0, . + 4 + (0x9 << 2)
label_3aa9ec:
    if (ctx->pc == 0x3AA9ECu) {
        ctx->pc = 0x3AA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA9E8u;
        // 0x3aa9ec: 0xaeb10014  sw          $s1, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA9F0u;
        goto label_3aa9f0;
    }
    ctx->pc = 0x3AA9E8u;
    {
        const bool branch_taken_0x3aa9e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x3AA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA9E8u;
        // 0x3aa9ec: 0xaeb10014  sw          $s1, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa9e8) {
            ctx->pc = 0x3AAA10u;
            goto label_3aaa10;
        }
    }
    ctx->pc = 0x3AA9F0u;
label_3aa9f0:
    // 0x3aa9f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3aa9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3aa9f4:
    // 0x3aa9f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3aa9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3aa9f8:
    // 0x3aa9f8: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3aa9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3aa9fc:
    // 0x3aa9fc: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x3aa9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
label_3aaa00:
    // 0x3aaa00: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x3aaa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_3aaa04:
    // 0x3aaa04: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3aaa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_3aaa08:
    // 0x3aaa08: 0x10000002  b           . + 4 + (0x2 << 2)
label_3aaa0c:
    if (ctx->pc == 0x3AAA0Cu) {
        ctx->pc = 0x3AAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA08u;
        // 0x3aaa0c: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAA10u;
        goto label_3aaa10;
    }
    ctx->pc = 0x3AAA08u;
    {
        const bool branch_taken_0x3aaa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA08u;
        // 0x3aaa0c: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaa08) {
            ctx->pc = 0x3AAA14u;
            goto label_3aaa14;
        }
    }
    ctx->pc = 0x3AAA10u;
label_3aaa10:
    // 0x3aaa10: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x3aaa10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
label_3aaa14:
    // 0x3aaa14: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3aaa14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3aaa18:
    // 0x3aaa18: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3aaa18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3aaa1c:
    // 0x3aaa1c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3aaa1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3aaa20:
    // 0x3aaa20: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3aaa20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3aaa24:
    // 0x3aaa24: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3aaa24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3aaa28:
    // 0x3aaa28: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3aaa28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3aaa2c:
    // 0x3aaa2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3aaa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3aaa30:
    // 0x3aaa30: 0x3e00008  jr          $ra
label_3aaa34:
    if (ctx->pc == 0x3AAA34u) {
        ctx->pc = 0x3AAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA30u;
        // 0x3aaa34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAA38u;
        goto label_fallthrough_0x3aaa30;
    }
    ctx->pc = 0x3AAA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA30u;
        // 0x3aaa34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3aaa30:
    ctx->pc = 0x3AAA38u;
}
