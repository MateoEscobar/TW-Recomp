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

// Function: sub_0026BE68
// Address: 0x26be68 - 0x26c1b8
void sub_0026BE68_0x26be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BE68_0x26be68");
#endif

    switch (ctx->pc) {
        case 0x26be68u: goto label_26be68;
        case 0x26be6cu: goto label_26be6c;
        case 0x26be70u: goto label_26be70;
        case 0x26be74u: goto label_26be74;
        case 0x26be78u: goto label_26be78;
        case 0x26be7cu: goto label_26be7c;
        case 0x26be80u: goto label_26be80;
        case 0x26be84u: goto label_26be84;
        case 0x26be88u: goto label_26be88;
        case 0x26be8cu: goto label_26be8c;
        case 0x26be90u: goto label_26be90;
        case 0x26be94u: goto label_26be94;
        case 0x26be98u: goto label_26be98;
        case 0x26be9cu: goto label_26be9c;
        case 0x26bea0u: goto label_26bea0;
        case 0x26bea4u: goto label_26bea4;
        case 0x26bea8u: goto label_26bea8;
        case 0x26beacu: goto label_26beac;
        case 0x26beb0u: goto label_26beb0;
        case 0x26beb4u: goto label_26beb4;
        case 0x26beb8u: goto label_26beb8;
        case 0x26bebcu: goto label_26bebc;
        case 0x26bec0u: goto label_26bec0;
        case 0x26bec4u: goto label_26bec4;
        case 0x26bec8u: goto label_26bec8;
        case 0x26beccu: goto label_26becc;
        case 0x26bed0u: goto label_26bed0;
        case 0x26bed4u: goto label_26bed4;
        case 0x26bed8u: goto label_26bed8;
        case 0x26bedcu: goto label_26bedc;
        case 0x26bee0u: goto label_26bee0;
        case 0x26bee4u: goto label_26bee4;
        case 0x26bee8u: goto label_26bee8;
        case 0x26beecu: goto label_26beec;
        case 0x26bef0u: goto label_26bef0;
        case 0x26bef4u: goto label_26bef4;
        case 0x26bef8u: goto label_26bef8;
        case 0x26befcu: goto label_26befc;
        case 0x26bf00u: goto label_26bf00;
        case 0x26bf04u: goto label_26bf04;
        case 0x26bf08u: goto label_26bf08;
        case 0x26bf0cu: goto label_26bf0c;
        case 0x26bf10u: goto label_26bf10;
        case 0x26bf14u: goto label_26bf14;
        case 0x26bf18u: goto label_26bf18;
        case 0x26bf1cu: goto label_26bf1c;
        case 0x26bf20u: goto label_26bf20;
        case 0x26bf24u: goto label_26bf24;
        case 0x26bf28u: goto label_26bf28;
        case 0x26bf2cu: goto label_26bf2c;
        case 0x26bf30u: goto label_26bf30;
        case 0x26bf34u: goto label_26bf34;
        case 0x26bf38u: goto label_26bf38;
        case 0x26bf3cu: goto label_26bf3c;
        case 0x26bf40u: goto label_26bf40;
        case 0x26bf44u: goto label_26bf44;
        case 0x26bf48u: goto label_26bf48;
        case 0x26bf4cu: goto label_26bf4c;
        case 0x26bf50u: goto label_26bf50;
        case 0x26bf54u: goto label_26bf54;
        case 0x26bf58u: goto label_26bf58;
        case 0x26bf5cu: goto label_26bf5c;
        case 0x26bf60u: goto label_26bf60;
        case 0x26bf64u: goto label_26bf64;
        case 0x26bf68u: goto label_26bf68;
        case 0x26bf6cu: goto label_26bf6c;
        case 0x26bf70u: goto label_26bf70;
        case 0x26bf74u: goto label_26bf74;
        case 0x26bf78u: goto label_26bf78;
        case 0x26bf7cu: goto label_26bf7c;
        case 0x26bf80u: goto label_26bf80;
        case 0x26bf84u: goto label_26bf84;
        case 0x26bf88u: goto label_26bf88;
        case 0x26bf8cu: goto label_26bf8c;
        case 0x26bf90u: goto label_26bf90;
        case 0x26bf94u: goto label_26bf94;
        case 0x26bf98u: goto label_26bf98;
        case 0x26bf9cu: goto label_26bf9c;
        case 0x26bfa0u: goto label_26bfa0;
        case 0x26bfa4u: goto label_26bfa4;
        case 0x26bfa8u: goto label_26bfa8;
        case 0x26bfacu: goto label_26bfac;
        case 0x26bfb0u: goto label_26bfb0;
        case 0x26bfb4u: goto label_26bfb4;
        case 0x26bfb8u: goto label_26bfb8;
        case 0x26bfbcu: goto label_26bfbc;
        case 0x26bfc0u: goto label_26bfc0;
        case 0x26bfc4u: goto label_26bfc4;
        case 0x26bfc8u: goto label_26bfc8;
        case 0x26bfccu: goto label_26bfcc;
        case 0x26bfd0u: goto label_26bfd0;
        case 0x26bfd4u: goto label_26bfd4;
        case 0x26bfd8u: goto label_26bfd8;
        case 0x26bfdcu: goto label_26bfdc;
        case 0x26bfe0u: goto label_26bfe0;
        case 0x26bfe4u: goto label_26bfe4;
        case 0x26bfe8u: goto label_26bfe8;
        case 0x26bfecu: goto label_26bfec;
        case 0x26bff0u: goto label_26bff0;
        case 0x26bff4u: goto label_26bff4;
        case 0x26bff8u: goto label_26bff8;
        case 0x26bffcu: goto label_26bffc;
        case 0x26c000u: goto label_26c000;
        case 0x26c004u: goto label_26c004;
        case 0x26c008u: goto label_26c008;
        case 0x26c00cu: goto label_26c00c;
        case 0x26c010u: goto label_26c010;
        case 0x26c014u: goto label_26c014;
        case 0x26c018u: goto label_26c018;
        case 0x26c01cu: goto label_26c01c;
        case 0x26c020u: goto label_26c020;
        case 0x26c024u: goto label_26c024;
        case 0x26c028u: goto label_26c028;
        case 0x26c02cu: goto label_26c02c;
        case 0x26c030u: goto label_26c030;
        case 0x26c034u: goto label_26c034;
        case 0x26c038u: goto label_26c038;
        case 0x26c03cu: goto label_26c03c;
        case 0x26c040u: goto label_26c040;
        case 0x26c044u: goto label_26c044;
        case 0x26c048u: goto label_26c048;
        case 0x26c04cu: goto label_26c04c;
        case 0x26c050u: goto label_26c050;
        case 0x26c054u: goto label_26c054;
        case 0x26c058u: goto label_26c058;
        case 0x26c05cu: goto label_26c05c;
        case 0x26c060u: goto label_26c060;
        case 0x26c064u: goto label_26c064;
        case 0x26c068u: goto label_26c068;
        case 0x26c06cu: goto label_26c06c;
        case 0x26c070u: goto label_26c070;
        case 0x26c074u: goto label_26c074;
        case 0x26c078u: goto label_26c078;
        case 0x26c07cu: goto label_26c07c;
        case 0x26c080u: goto label_26c080;
        case 0x26c084u: goto label_26c084;
        case 0x26c088u: goto label_26c088;
        case 0x26c08cu: goto label_26c08c;
        case 0x26c090u: goto label_26c090;
        case 0x26c094u: goto label_26c094;
        case 0x26c098u: goto label_26c098;
        case 0x26c09cu: goto label_26c09c;
        case 0x26c0a0u: goto label_26c0a0;
        case 0x26c0a4u: goto label_26c0a4;
        case 0x26c0a8u: goto label_26c0a8;
        case 0x26c0acu: goto label_26c0ac;
        case 0x26c0b0u: goto label_26c0b0;
        case 0x26c0b4u: goto label_26c0b4;
        case 0x26c0b8u: goto label_26c0b8;
        case 0x26c0bcu: goto label_26c0bc;
        case 0x26c0c0u: goto label_26c0c0;
        case 0x26c0c4u: goto label_26c0c4;
        case 0x26c0c8u: goto label_26c0c8;
        case 0x26c0ccu: goto label_26c0cc;
        case 0x26c0d0u: goto label_26c0d0;
        case 0x26c0d4u: goto label_26c0d4;
        case 0x26c0d8u: goto label_26c0d8;
        case 0x26c0dcu: goto label_26c0dc;
        case 0x26c0e0u: goto label_26c0e0;
        case 0x26c0e4u: goto label_26c0e4;
        case 0x26c0e8u: goto label_26c0e8;
        case 0x26c0ecu: goto label_26c0ec;
        case 0x26c0f0u: goto label_26c0f0;
        case 0x26c0f4u: goto label_26c0f4;
        case 0x26c0f8u: goto label_26c0f8;
        case 0x26c0fcu: goto label_26c0fc;
        case 0x26c100u: goto label_26c100;
        case 0x26c104u: goto label_26c104;
        case 0x26c108u: goto label_26c108;
        case 0x26c10cu: goto label_26c10c;
        case 0x26c110u: goto label_26c110;
        case 0x26c114u: goto label_26c114;
        case 0x26c118u: goto label_26c118;
        case 0x26c11cu: goto label_26c11c;
        case 0x26c120u: goto label_26c120;
        case 0x26c124u: goto label_26c124;
        case 0x26c128u: goto label_26c128;
        case 0x26c12cu: goto label_26c12c;
        case 0x26c130u: goto label_26c130;
        case 0x26c134u: goto label_26c134;
        case 0x26c138u: goto label_26c138;
        case 0x26c13cu: goto label_26c13c;
        case 0x26c140u: goto label_26c140;
        case 0x26c144u: goto label_26c144;
        case 0x26c148u: goto label_26c148;
        case 0x26c14cu: goto label_26c14c;
        case 0x26c150u: goto label_26c150;
        case 0x26c154u: goto label_26c154;
        case 0x26c158u: goto label_26c158;
        case 0x26c15cu: goto label_26c15c;
        case 0x26c160u: goto label_26c160;
        case 0x26c164u: goto label_26c164;
        case 0x26c168u: goto label_26c168;
        case 0x26c16cu: goto label_26c16c;
        case 0x26c170u: goto label_26c170;
        case 0x26c174u: goto label_26c174;
        case 0x26c178u: goto label_26c178;
        case 0x26c17cu: goto label_26c17c;
        case 0x26c180u: goto label_26c180;
        case 0x26c184u: goto label_26c184;
        case 0x26c188u: goto label_26c188;
        case 0x26c18cu: goto label_26c18c;
        case 0x26c190u: goto label_26c190;
        case 0x26c194u: goto label_26c194;
        case 0x26c198u: goto label_26c198;
        case 0x26c19cu: goto label_26c19c;
        case 0x26c1a0u: goto label_26c1a0;
        case 0x26c1a4u: goto label_26c1a4;
        case 0x26c1a8u: goto label_26c1a8;
        case 0x26c1acu: goto label_26c1ac;
        case 0x26c1b0u: goto label_26c1b0;
        case 0x26c1b4u: goto label_26c1b4;
        default: break;
    }

    ctx->pc = 0x26be68u;

label_26be68:
    // 0x26be68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26be68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_26be6c:
    // 0x26be6c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x26be6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_26be70:
    // 0x26be70: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x26be70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_26be74:
    // 0x26be74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26be74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26be78:
    // 0x26be78: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x26be78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_26be7c:
    // 0x26be7c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x26be7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_26be80:
    // 0x26be80: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26be80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26be84:
    // 0x26be84: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x26be84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_26be88:
    // 0x26be88: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x26be88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_26be8c:
    // 0x26be8c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x26be8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_26be90:
    // 0x26be90: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x26be90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_26be94:
    // 0x26be94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26be98:
    // 0x26be98: 0xc089b98  jal         func_226E60
label_26be9c:
    if (ctx->pc == 0x26BE9Cu) {
        ctx->pc = 0x26BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE98u;
        // 0x26be9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BEA0u;
        goto label_26bea0;
    }
    ctx->pc = 0x26BE98u;
    SET_GPR_U32(ctx, 31, 0x26BEA0u);
    ctx->pc = 0x26BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE98u;
    // 0x26be9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x26BE98u, 0x26BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BEA0u;
label_26bea0:
    // 0x26bea0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_26bea4:
    if (ctx->pc == 0x26BEA4u) {
        ctx->pc = 0x26BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEA0u;
        // 0x26bea4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BEA8u;
        goto label_26bea8;
    }
    ctx->pc = 0x26BEA0u;
    {
        const bool branch_taken_0x26bea0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEA0u;
        // 0x26bea4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bea0) {
            ctx->pc = 0x26BEB8u;
            goto label_26beb8;
        }
    }
    ctx->pc = 0x26BEA8u;
label_26bea8:
    // 0x26bea8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x26bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_26beac:
    // 0x26beac: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x26beacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_26beb0:
    // 0x26beb0: 0x10000003  b           . + 4 + (0x3 << 2)
label_26beb4:
    if (ctx->pc == 0x26BEB4u) {
        ctx->pc = 0x26BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEB0u;
        // 0x26beb4: 0x24730002  addiu       $s3, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BEB8u;
        goto label_26beb8;
    }
    ctx->pc = 0x26BEB0u;
    {
        const bool branch_taken_0x26beb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEB0u;
        // 0x26beb4: 0x24730002  addiu       $s3, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26beb0) {
            ctx->pc = 0x26BEC0u;
            goto label_26bec0;
        }
    }
    ctx->pc = 0x26BEB8u;
label_26beb8:
    // 0x26beb8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x26beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_26bebc:
    // 0x26bebc: 0x8c5300b4  lw          $s3, 0xB4($v0)
    ctx->pc = 0x26bebcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_26bec0:
    // 0x26bec0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_26bec4:
    if (ctx->pc == 0x26BEC4u) {
        ctx->pc = 0x26BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEC0u;
        // 0x26bec4: 0x8c4200b4  lw          $v0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BEC8u;
        goto label_26bec8;
    }
    ctx->pc = 0x26BEC0u;
    {
        const bool branch_taken_0x26bec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEC0u;
        // 0x26bec4: 0x8c4200b4  lw          $v0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bec0) {
            ctx->pc = 0x26BED0u;
            goto label_26bed0;
        }
    }
    ctx->pc = 0x26BEC8u;
label_26bec8:
    // 0x26bec8: 0x10000002  b           . + 4 + (0x2 << 2)
label_26becc:
    if (ctx->pc == 0x26BECCu) {
        ctx->pc = 0x26BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEC8u;
        // 0x26becc: 0x245e0003  addiu       $fp, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BED0u;
        goto label_26bed0;
    }
    ctx->pc = 0x26BEC8u;
    {
        const bool branch_taken_0x26bec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEC8u;
        // 0x26becc: 0x245e0003  addiu       $fp, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bec8) {
            ctx->pc = 0x26BED4u;
            goto label_26bed4;
        }
    }
    ctx->pc = 0x26BED0u;
label_26bed0:
    // 0x26bed0: 0x245e0001  addiu       $fp, $v0, 0x1
    ctx->pc = 0x26bed0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26bed4:
    // 0x26bed4: 0x124000ac  beqz        $s2, . + 4 + (0xAC << 2)
label_26bed8:
    if (ctx->pc == 0x26BED8u) {
        ctx->pc = 0x26BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BED4u;
        // 0x26bed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BEDCu;
        goto label_26bedc;
    }
    ctx->pc = 0x26BED4u;
    {
        const bool branch_taken_0x26bed4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BED4u;
        // 0x26bed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bed4) {
            ctx->pc = 0x26C188u;
            goto label_26c188;
        }
    }
    ctx->pc = 0x26BEDCu;
label_26bedc:
    // 0x26bedc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26bedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26bee0:
    // 0x26bee0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26bee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26bee4:
    // 0x26bee4: 0xc09da66  jal         func_276998
label_26bee8:
    if (ctx->pc == 0x26BEE8u) {
        ctx->pc = 0x26BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEE4u;
        // 0x26bee8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BEECu;
        goto label_26beec;
    }
    ctx->pc = 0x26BEE4u;
    SET_GPR_U32(ctx, 31, 0x26BEECu);
    ctx->pc = 0x26BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEE4u;
    // 0x26bee8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276998u, 0x26BEE4u, 0x26BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BEECu;
label_26beec:
    // 0x26beec: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
label_26bef0:
    if (ctx->pc == 0x26BEF0u) {
        ctx->pc = 0x26BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEECu;
        // 0x26bef0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BEF4u;
        goto label_26bef4;
    }
    ctx->pc = 0x26BEECu;
    {
        const bool branch_taken_0x26beec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEECu;
        // 0x26bef0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26beec) {
            ctx->pc = 0x26C188u;
            goto label_26c188;
        }
    }
    ctx->pc = 0x26BEF4u;
label_26bef4:
    // 0x26bef4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26bef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26bef8:
    // 0x26bef8: 0xc08b1cc  jal         func_22C730
label_26befc:
    if (ctx->pc == 0x26BEFCu) {
        ctx->pc = 0x26BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEF8u;
        // 0x26befc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BF00u;
        goto label_26bf00;
    }
    ctx->pc = 0x26BEF8u;
    SET_GPR_U32(ctx, 31, 0x26BF00u);
    ctx->pc = 0x26BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BEF8u;
    // 0x26befc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C730u, 0x26BEF8u, 0x26BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF00u;
label_26bf00:
    // 0x26bf00: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x26bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_26bf04:
    // 0x26bf04: 0x8e1600d8  lw          $s6, 0xD8($s0)
    ctx->pc = 0x26bf04u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_26bf08:
    // 0x26bf08: 0x2457e160  addiu       $s7, $v0, -0x1EA0
    ctx->pc = 0x26bf08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
label_26bf0c:
    // 0x26bf0c: 0xc041532  jal         func_1054C8
label_26bf10:
    if (ctx->pc == 0x26BF10u) {
        ctx->pc = 0x26BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF0Cu;
        // 0x26bf10: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BF14u;
        goto label_26bf14;
    }
    ctx->pc = 0x26BF0Cu;
    SET_GPR_U32(ctx, 31, 0x26BF14u);
    ctx->pc = 0x26BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF0Cu;
    // 0x26bf10: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26BF0Cu, 0x26BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF14u;
label_26bf14:
    // 0x26bf14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26bf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26bf18:
    // 0x26bf18: 0xc041532  jal         func_1054C8
label_26bf1c:
    if (ctx->pc == 0x26BF1Cu) {
        ctx->pc = 0x26BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF18u;
        // 0x26bf1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BF20u;
        goto label_26bf20;
    }
    ctx->pc = 0x26BF18u;
    SET_GPR_U32(ctx, 31, 0x26BF20u);
    ctx->pc = 0x26BF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF18u;
    // 0x26bf1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26BF18u, 0x26BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF20u;
label_26bf20:
    // 0x26bf20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26bf20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26bf24:
    // 0x26bf24: 0xc041532  jal         func_1054C8
label_26bf28:
    if (ctx->pc == 0x26BF28u) {
        ctx->pc = 0x26BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF24u;
        // 0x26bf28: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BF2Cu;
        goto label_26bf2c;
    }
    ctx->pc = 0x26BF24u;
    SET_GPR_U32(ctx, 31, 0x26BF2Cu);
    ctx->pc = 0x26BF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF24u;
    // 0x26bf28: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26BF24u, 0x26BF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF2Cu;
label_26bf2c:
    // 0x26bf2c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_26bf30:
    if (ctx->pc == 0x26BF30u) {
        ctx->pc = 0x26BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF2Cu;
        // 0x26bf30: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BF34u;
        goto label_26bf34;
    }
    ctx->pc = 0x26BF2Cu;
    {
        const bool branch_taken_0x26bf2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF2Cu;
        // 0x26bf30: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf2c) {
            ctx->pc = 0x26BF6Cu;
            goto label_26bf6c;
        }
    }
    ctx->pc = 0x26BF34u;
label_26bf34:
    // 0x26bf34: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x26bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_26bf38:
    // 0x26bf38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26bf3c:
    // 0x26bf3c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26bf3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26bf40:
    // 0x26bf40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26bf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26bf44:
    // 0x26bf44: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26bf44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26bf48:
    // 0x26bf48: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26bf48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bf4c:
    // 0x26bf4c: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x26bf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_26bf50:
    // 0x26bf50: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26bf50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26bf54:
    // 0x26bf54: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26bf54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26bf58:
    // 0x26bf58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26bf58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26bf5c:
    // 0x26bf5c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26bf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26bf60:
    // 0x26bf60: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26bf60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26bf64:
    // 0x26bf64: 0xc041bd4  jal         func_106F50
label_26bf68:
    if (ctx->pc == 0x26BF68u) {
        ctx->pc = 0x26BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF64u;
        // 0x26bf68: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BF6Cu;
        goto label_26bf6c;
    }
    ctx->pc = 0x26BF64u;
    SET_GPR_U32(ctx, 31, 0x26BF6Cu);
    ctx->pc = 0x26BF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF64u;
    // 0x26bf68: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26BF64u, 0x26BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF6Cu;
label_26bf6c:
    // 0x26bf6c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x26bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26bf70:
    // 0x26bf70: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26bf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26bf74:
    // 0x26bf74: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26bf74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26bf78:
    // 0x26bf78: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26bf7c:
    // 0x26bf7c: 0x60f809  jalr        $v1
label_26bf80:
    if (ctx->pc == 0x26BF80u) {
        ctx->pc = 0x26BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF7Cu;
        // 0x26bf80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BF84u;
        goto label_26bf84;
    }
    ctx->pc = 0x26BF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26BF84u);
        ctx->pc = 0x26BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF7Cu;
        // 0x26bf80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BF7Cu, 0x26BF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26BF84u;
label_26bf84:
    // 0x26bf84: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x26bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_26bf88:
    // 0x26bf88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26bf8c:
    // 0x26bf8c: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_26bf90:
    if (ctx->pc == 0x26BF90u) {
        ctx->pc = 0x26BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF8Cu;
        // 0x26bf90: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BF94u;
        goto label_26bf94;
    }
    ctx->pc = 0x26BF8Cu;
    {
        const bool branch_taken_0x26bf8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF8Cu;
        // 0x26bf90: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf8c) {
            ctx->pc = 0x26BFD0u;
            goto label_26bfd0;
        }
    }
    ctx->pc = 0x26BF94u;
label_26bf94:
    // 0x26bf94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26bf98:
    // 0x26bf98: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26bf98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26bf9c:
    // 0x26bf9c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26bfa0:
    // 0x26bfa0: 0x40f809  jalr        $v0
label_26bfa4:
    if (ctx->pc == 0x26BFA4u) {
        ctx->pc = 0x26BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFA0u;
        // 0x26bfa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BFA8u;
        goto label_26bfa8;
    }
    ctx->pc = 0x26BFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26BFA8u);
        ctx->pc = 0x26BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFA0u;
        // 0x26bfa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BFA0u, 0x26BFA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26BFA8u;
label_26bfa8:
    // 0x26bfa8: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x26bfa8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_26bfac:
    // 0x26bfac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26bfacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26bfb0:
    // 0x26bfb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x26bfb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26bfb4:
    // 0x26bfb4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26bfb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26bfb8:
    // 0x26bfb8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26bfb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26bfbc:
    // 0x26bfbc: 0x254abad8  addiu       $t2, $t2, -0x4528
    ctx->pc = 0x26bfbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294949592));
label_26bfc0:
    // 0x26bfc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26bfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26bfc4:
    // 0x26bfc4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26bfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26bfc8:
    // 0x26bfc8: 0xc041664  jal         func_105990
label_26bfcc:
    if (ctx->pc == 0x26BFCCu) {
        ctx->pc = 0x26BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFC8u;
        // 0x26bfcc: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BFD0u;
        goto label_26bfd0;
    }
    ctx->pc = 0x26BFC8u;
    SET_GPR_U32(ctx, 31, 0x26BFD0u);
    ctx->pc = 0x26BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFC8u;
    // 0x26bfcc: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26BFC8u, 0x26BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFD0u;
label_26bfd0:
    // 0x26bfd0: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_26bfd4:
    if (ctx->pc == 0x26BFD4u) {
        ctx->pc = 0x26BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFD0u;
        // 0x26bfd4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BFD8u;
        goto label_26bfd8;
    }
    ctx->pc = 0x26BFD0u;
    {
        const bool branch_taken_0x26bfd0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFD0u;
        // 0x26bfd4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfd0) {
            ctx->pc = 0x26BFF0u;
            goto label_26bff0;
        }
    }
    ctx->pc = 0x26BFD8u;
label_26bfd8:
    // 0x26bfd8: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x26bfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_26bfdc:
    // 0x26bfdc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26bfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26bfe0:
    // 0x26bfe0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26bfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26bfe4:
    // 0x26bfe4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26bfe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26bfe8:
    // 0x26bfe8: 0xc041b20  jal         func_106C80
label_26bfec:
    if (ctx->pc == 0x26BFECu) {
        ctx->pc = 0x26BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFE8u;
        // 0x26bfec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BFF0u;
        goto label_26bff0;
    }
    ctx->pc = 0x26BFE8u;
    SET_GPR_U32(ctx, 31, 0x26BFF0u);
    ctx->pc = 0x26BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFE8u;
    // 0x26bfec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26BFE8u, 0x26BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFF0u;
label_26bff0:
    // 0x26bff0: 0xc05d484  jal         func_175210
label_26bff4:
    if (ctx->pc == 0x26BFF4u) {
        ctx->pc = 0x26BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFF0u;
        // 0x26bff4: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BFF8u;
        goto label_26bff8;
    }
    ctx->pc = 0x26BFF0u;
    SET_GPR_U32(ctx, 31, 0x26BFF8u);
    ctx->pc = 0x26BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFF0u;
    // 0x26bff4: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26BFF0u, 0x26BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFF8u;
label_26bff8:
    // 0x26bff8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26bffc:
    // 0x26bffc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26bffcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26c000:
    // 0x26c000: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26c000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26c004:
    // 0x26c004: 0xa0f809  jalr        $a1
label_26c008:
    if (ctx->pc == 0x26C008u) {
        ctx->pc = 0x26C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C004u;
        // 0x26c008: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C00Cu;
        goto label_26c00c;
    }
    ctx->pc = 0x26C004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26C00Cu);
        ctx->pc = 0x26C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C004u;
        // 0x26c008: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C004u, 0x26C00Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C00Cu;
label_26c00c:
    // 0x26c00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c010:
    // 0x26c010: 0xc087016  jal         func_21C058
label_26c014:
    if (ctx->pc == 0x26C014u) {
        ctx->pc = 0x26C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C010u;
        // 0x26c014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C018u;
        goto label_26c018;
    }
    ctx->pc = 0x26C010u;
    SET_GPR_U32(ctx, 31, 0x26C018u);
    ctx->pc = 0x26C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C010u;
    // 0x26c014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26C010u, 0x26C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C018u;
label_26c018:
    // 0x26c018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c01c:
    // 0x26c01c: 0xc089990  jal         func_226640
label_26c020:
    if (ctx->pc == 0x26C020u) {
        ctx->pc = 0x26C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C01Cu;
        // 0x26c020: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C024u;
        goto label_26c024;
    }
    ctx->pc = 0x26C01Cu;
    SET_GPR_U32(ctx, 31, 0x26C024u);
    ctx->pc = 0x26C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C01Cu;
    // 0x26c020: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26C01Cu, 0x26C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C024u;
label_26c024:
    // 0x26c024: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26c024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c028:
    // 0x26c028: 0xc05d53a  jal         func_1754E8
label_26c02c:
    if (ctx->pc == 0x26C02Cu) {
        ctx->pc = 0x26C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C028u;
        // 0x26c02c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C030u;
        goto label_26c030;
    }
    ctx->pc = 0x26C028u;
    SET_GPR_U32(ctx, 31, 0x26C030u);
    ctx->pc = 0x26C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C028u;
    // 0x26c02c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26C028u, 0x26C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C030u;
label_26c030:
    // 0x26c030: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26c030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26c034:
    // 0x26c034: 0xc05d4f6  jal         func_1753D8
label_26c038:
    if (ctx->pc == 0x26C038u) {
        ctx->pc = 0x26C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C034u;
        // 0x26c038: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C03Cu;
        goto label_26c03c;
    }
    ctx->pc = 0x26C034u;
    SET_GPR_U32(ctx, 31, 0x26C03Cu);
    ctx->pc = 0x26C038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C034u;
    // 0x26c038: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26C034u, 0x26C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C03Cu;
label_26c03c:
    // 0x26c03c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26c03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26c040:
    // 0x26c040: 0xc041532  jal         func_1054C8
label_26c044:
    if (ctx->pc == 0x26C044u) {
        ctx->pc = 0x26C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C040u;
        // 0x26c044: 0x8e5500d8  lw          $s5, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C048u;
        goto label_26c048;
    }
    ctx->pc = 0x26C040u;
    SET_GPR_U32(ctx, 31, 0x26C048u);
    ctx->pc = 0x26C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C040u;
    // 0x26c044: 0x8e5500d8  lw          $s5, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26C040u, 0x26C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C048u;
label_26c048:
    // 0x26c048: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26c048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26c04c:
    // 0x26c04c: 0xc041532  jal         func_1054C8
label_26c050:
    if (ctx->pc == 0x26C050u) {
        ctx->pc = 0x26C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C04Cu;
        // 0x26c050: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C054u;
        goto label_26c054;
    }
    ctx->pc = 0x26C04Cu;
    SET_GPR_U32(ctx, 31, 0x26C054u);
    ctx->pc = 0x26C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C04Cu;
    // 0x26c050: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26C04Cu, 0x26C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C054u;
label_26c054:
    // 0x26c054: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26c054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c058:
    // 0x26c058: 0xc041532  jal         func_1054C8
label_26c05c:
    if (ctx->pc == 0x26C05Cu) {
        ctx->pc = 0x26C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C058u;
        // 0x26c05c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C060u;
        goto label_26c060;
    }
    ctx->pc = 0x26C058u;
    SET_GPR_U32(ctx, 31, 0x26C060u);
    ctx->pc = 0x26C05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C058u;
    // 0x26c05c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26C058u, 0x26C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C060u;
label_26c060:
    // 0x26c060: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_26c064:
    if (ctx->pc == 0x26C064u) {
        ctx->pc = 0x26C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C060u;
        // 0x26c064: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C068u;
        goto label_26c068;
    }
    ctx->pc = 0x26C060u;
    {
        const bool branch_taken_0x26c060 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C060u;
        // 0x26c064: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c060) {
            ctx->pc = 0x26C0A0u;
            goto label_26c0a0;
        }
    }
    ctx->pc = 0x26C068u;
label_26c068:
    // 0x26c068: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26c068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26c06c:
    // 0x26c06c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26c070:
    // 0x26c070: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26c070u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26c074:
    // 0x26c074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c078:
    // 0x26c078: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26c078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26c07c:
    // 0x26c07c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26c07cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c080:
    // 0x26c080: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26c080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26c084:
    // 0x26c084: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26c084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26c088:
    // 0x26c088: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26c088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26c08c:
    // 0x26c08c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26c08cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26c090:
    // 0x26c090: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26c090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26c094:
    // 0x26c094: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26c094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26c098:
    // 0x26c098: 0xc041bd4  jal         func_106F50
label_26c09c:
    if (ctx->pc == 0x26C09Cu) {
        ctx->pc = 0x26C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C098u;
        // 0x26c09c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C0A0u;
        goto label_26c0a0;
    }
    ctx->pc = 0x26C098u;
    SET_GPR_U32(ctx, 31, 0x26C0A0u);
    ctx->pc = 0x26C09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C098u;
    // 0x26c09c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26C098u, 0x26C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C0A0u;
label_26c0a0:
    // 0x26c0a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x26c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26c0a4:
    // 0x26c0a4: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26c0a8:
    // 0x26c0a8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26c0a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26c0ac:
    // 0x26c0ac: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26c0b0:
    // 0x26c0b0: 0x60f809  jalr        $v1
label_26c0b4:
    if (ctx->pc == 0x26C0B4u) {
        ctx->pc = 0x26C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0B0u;
        // 0x26c0b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C0B8u;
        goto label_26c0b8;
    }
    ctx->pc = 0x26C0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26C0B8u);
        ctx->pc = 0x26C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0B0u;
        // 0x26c0b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C0B0u, 0x26C0B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C0B8u;
label_26c0b8:
    // 0x26c0b8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x26c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26c0bc:
    // 0x26c0bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26c0c0:
    // 0x26c0c0: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
label_26c0c4:
    if (ctx->pc == 0x26C0C4u) {
        ctx->pc = 0x26C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0C0u;
        // 0x26c0c4: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C0C8u;
        goto label_26c0c8;
    }
    ctx->pc = 0x26C0C0u;
    {
        const bool branch_taken_0x26c0c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0C0u;
        // 0x26c0c4: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0c0) {
            ctx->pc = 0x26C11Cu;
            goto label_26c11c;
        }
    }
    ctx->pc = 0x26C0C8u;
label_26c0c8:
    // 0x26c0c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26c0cc:
    // 0x26c0cc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26c0ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26c0d0:
    // 0x26c0d0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26c0d4:
    // 0x26c0d4: 0x40f809  jalr        $v0
label_26c0d8:
    if (ctx->pc == 0x26C0D8u) {
        ctx->pc = 0x26C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0D4u;
        // 0x26c0d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C0DCu;
        goto label_26c0dc;
    }
    ctx->pc = 0x26C0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26C0DCu);
        ctx->pc = 0x26C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0D4u;
        // 0x26c0d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C0D4u, 0x26C0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C0DCu;
label_26c0dc:
    // 0x26c0dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26c0e0:
    // 0x26c0e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c0e4:
    // 0x26c0e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26c0e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26c0e8:
    // 0x26c0e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26c0ec:
    // 0x26c0ec: 0x40f809  jalr        $v0
label_26c0f0:
    if (ctx->pc == 0x26C0F0u) {
        ctx->pc = 0x26C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0ECu;
        // 0x26c0f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C0F4u;
        goto label_26c0f4;
    }
    ctx->pc = 0x26C0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26C0F4u);
        ctx->pc = 0x26C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C0ECu;
        // 0x26c0f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C0ECu, 0x26C0F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C0F4u;
label_26c0f4:
    // 0x26c0f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26c0f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26c0f8:
    // 0x26c0f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26c0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c0fc:
    // 0x26c0fc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x26c0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26c100:
    // 0x26c100: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x26c100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c104:
    // 0x26c104: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26c104u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c108:
    // 0x26c108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26c108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26c10c:
    // 0x26c10c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26c10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26c110:
    // 0x26c110: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x26c110u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
label_26c114:
    // 0x26c114: 0xc04229e  jal         func_108A78
label_26c118:
    if (ctx->pc == 0x26C118u) {
        ctx->pc = 0x26C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C114u;
        // 0x26c118: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C11Cu;
        goto label_26c11c;
    }
    ctx->pc = 0x26C114u;
    SET_GPR_U32(ctx, 31, 0x26C11Cu);
    ctx->pc = 0x26C118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C114u;
    // 0x26c118: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26C114u, 0x26C11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C11Cu;
label_26c11c:
    // 0x26c11c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_26c120:
    if (ctx->pc == 0x26C120u) {
        ctx->pc = 0x26C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C11Cu;
        // 0x26c120: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C124u;
        goto label_26c124;
    }
    ctx->pc = 0x26C11Cu;
    {
        const bool branch_taken_0x26c11c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C11Cu;
        // 0x26c120: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c11c) {
            ctx->pc = 0x26C13Cu;
            goto label_26c13c;
        }
    }
    ctx->pc = 0x26C124u;
label_26c124:
    // 0x26c124: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26c124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26c128:
    // 0x26c128: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26c128u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26c12c:
    // 0x26c12c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26c12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c130:
    // 0x26c130: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26c130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26c134:
    // 0x26c134: 0xc041b20  jal         func_106C80
label_26c138:
    if (ctx->pc == 0x26C138u) {
        ctx->pc = 0x26C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C134u;
        // 0x26c138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C13Cu;
        goto label_26c13c;
    }
    ctx->pc = 0x26C134u;
    SET_GPR_U32(ctx, 31, 0x26C13Cu);
    ctx->pc = 0x26C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C134u;
    // 0x26c138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26C134u, 0x26C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C13Cu;
label_26c13c:
    // 0x26c13c: 0xc05d484  jal         func_175210
label_26c140:
    if (ctx->pc == 0x26C140u) {
        ctx->pc = 0x26C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C13Cu;
        // 0x26c140: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C144u;
        goto label_26c144;
    }
    ctx->pc = 0x26C13Cu;
    SET_GPR_U32(ctx, 31, 0x26C144u);
    ctx->pc = 0x26C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C13Cu;
    // 0x26c140: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26C13Cu, 0x26C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C144u;
label_26c144:
    // 0x26c144: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26c144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26c148:
    // 0x26c148: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26c148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26c14c:
    // 0x26c14c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26c14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26c150:
    // 0x26c150: 0xa0f809  jalr        $a1
label_26c154:
    if (ctx->pc == 0x26C154u) {
        ctx->pc = 0x26C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C150u;
        // 0x26c154: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C158u;
        goto label_26c158;
    }
    ctx->pc = 0x26C150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26C158u);
        ctx->pc = 0x26C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C150u;
        // 0x26c154: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C150u, 0x26C158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C158u;
label_26c158:
    // 0x26c158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c15c:
    // 0x26c15c: 0xc087016  jal         func_21C058
label_26c160:
    if (ctx->pc == 0x26C160u) {
        ctx->pc = 0x26C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C15Cu;
        // 0x26c160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C164u;
        goto label_26c164;
    }
    ctx->pc = 0x26C15Cu;
    SET_GPR_U32(ctx, 31, 0x26C164u);
    ctx->pc = 0x26C160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C15Cu;
    // 0x26c160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26C15Cu, 0x26C164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C164u;
label_26c164:
    // 0x26c164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c168:
    // 0x26c168: 0xc089990  jal         func_226640
label_26c16c:
    if (ctx->pc == 0x26C16Cu) {
        ctx->pc = 0x26C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C168u;
        // 0x26c16c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C170u;
        goto label_26c170;
    }
    ctx->pc = 0x26C168u;
    SET_GPR_U32(ctx, 31, 0x26C170u);
    ctx->pc = 0x26C16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C168u;
    // 0x26c16c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26C168u, 0x26C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C170u;
label_26c170:
    // 0x26c170: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26c170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26c174:
    // 0x26c174: 0xc05d53a  jal         func_1754E8
label_26c178:
    if (ctx->pc == 0x26C178u) {
        ctx->pc = 0x26C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C174u;
        // 0x26c178: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C17Cu;
        goto label_26c17c;
    }
    ctx->pc = 0x26C174u;
    SET_GPR_U32(ctx, 31, 0x26C17Cu);
    ctx->pc = 0x26C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C174u;
    // 0x26c178: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26C174u, 0x26C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C17Cu;
label_26c17c:
    // 0x26c17c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26c17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26c180:
    // 0x26c180: 0xc05d4f6  jal         func_1753D8
label_26c184:
    if (ctx->pc == 0x26C184u) {
        ctx->pc = 0x26C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C180u;
        // 0x26c184: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C188u;
        goto label_26c188;
    }
    ctx->pc = 0x26C180u;
    SET_GPR_U32(ctx, 31, 0x26C188u);
    ctx->pc = 0x26C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C180u;
    // 0x26c184: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26C180u, 0x26C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C188u;
label_26c188:
    // 0x26c188: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x26c188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26c18c:
    // 0x26c18c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x26c18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26c190:
    // 0x26c190: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x26c190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26c194:
    // 0x26c194: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x26c194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26c198:
    // 0x26c198: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26c198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26c19c:
    // 0x26c19c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x26c19cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26c1a0:
    // 0x26c1a0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x26c1a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26c1a4:
    // 0x26c1a4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x26c1a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26c1a8:
    // 0x26c1a8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x26c1a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26c1ac:
    // 0x26c1ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26c1b0:
    // 0x26c1b0: 0x3e00008  jr          $ra
label_26c1b4:
    if (ctx->pc == 0x26C1B4u) {
        ctx->pc = 0x26C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1B0u;
        // 0x26c1b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C1B8u;
        goto label_fallthrough_0x26c1b0;
    }
    ctx->pc = 0x26C1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1B0u;
        // 0x26c1b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26c1b0:
    ctx->pc = 0x26C1B8u;
}
