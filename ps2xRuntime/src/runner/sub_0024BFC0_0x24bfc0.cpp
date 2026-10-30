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

// Function: sub_0024BFC0
// Address: 0x24bfc0 - 0x24c1a0
void sub_0024BFC0_0x24bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BFC0_0x24bfc0");
#endif

    switch (ctx->pc) {
        case 0x24bfc0u: goto label_24bfc0;
        case 0x24bfc4u: goto label_24bfc4;
        case 0x24bfc8u: goto label_24bfc8;
        case 0x24bfccu: goto label_24bfcc;
        case 0x24bfd0u: goto label_24bfd0;
        case 0x24bfd4u: goto label_24bfd4;
        case 0x24bfd8u: goto label_24bfd8;
        case 0x24bfdcu: goto label_24bfdc;
        case 0x24bfe0u: goto label_24bfe0;
        case 0x24bfe4u: goto label_24bfe4;
        case 0x24bfe8u: goto label_24bfe8;
        case 0x24bfecu: goto label_24bfec;
        case 0x24bff0u: goto label_24bff0;
        case 0x24bff4u: goto label_24bff4;
        case 0x24bff8u: goto label_24bff8;
        case 0x24bffcu: goto label_24bffc;
        case 0x24c000u: goto label_24c000;
        case 0x24c004u: goto label_24c004;
        case 0x24c008u: goto label_24c008;
        case 0x24c00cu: goto label_24c00c;
        case 0x24c010u: goto label_24c010;
        case 0x24c014u: goto label_24c014;
        case 0x24c018u: goto label_24c018;
        case 0x24c01cu: goto label_24c01c;
        case 0x24c020u: goto label_24c020;
        case 0x24c024u: goto label_24c024;
        case 0x24c028u: goto label_24c028;
        case 0x24c02cu: goto label_24c02c;
        case 0x24c030u: goto label_24c030;
        case 0x24c034u: goto label_24c034;
        case 0x24c038u: goto label_24c038;
        case 0x24c03cu: goto label_24c03c;
        case 0x24c040u: goto label_24c040;
        case 0x24c044u: goto label_24c044;
        case 0x24c048u: goto label_24c048;
        case 0x24c04cu: goto label_24c04c;
        case 0x24c050u: goto label_24c050;
        case 0x24c054u: goto label_24c054;
        case 0x24c058u: goto label_24c058;
        case 0x24c05cu: goto label_24c05c;
        case 0x24c060u: goto label_24c060;
        case 0x24c064u: goto label_24c064;
        case 0x24c068u: goto label_24c068;
        case 0x24c06cu: goto label_24c06c;
        case 0x24c070u: goto label_24c070;
        case 0x24c074u: goto label_24c074;
        case 0x24c078u: goto label_24c078;
        case 0x24c07cu: goto label_24c07c;
        case 0x24c080u: goto label_24c080;
        case 0x24c084u: goto label_24c084;
        case 0x24c088u: goto label_24c088;
        case 0x24c08cu: goto label_24c08c;
        case 0x24c090u: goto label_24c090;
        case 0x24c094u: goto label_24c094;
        case 0x24c098u: goto label_24c098;
        case 0x24c09cu: goto label_24c09c;
        case 0x24c0a0u: goto label_24c0a0;
        case 0x24c0a4u: goto label_24c0a4;
        case 0x24c0a8u: goto label_24c0a8;
        case 0x24c0acu: goto label_24c0ac;
        case 0x24c0b0u: goto label_24c0b0;
        case 0x24c0b4u: goto label_24c0b4;
        case 0x24c0b8u: goto label_24c0b8;
        case 0x24c0bcu: goto label_24c0bc;
        case 0x24c0c0u: goto label_24c0c0;
        case 0x24c0c4u: goto label_24c0c4;
        case 0x24c0c8u: goto label_24c0c8;
        case 0x24c0ccu: goto label_24c0cc;
        case 0x24c0d0u: goto label_24c0d0;
        case 0x24c0d4u: goto label_24c0d4;
        case 0x24c0d8u: goto label_24c0d8;
        case 0x24c0dcu: goto label_24c0dc;
        case 0x24c0e0u: goto label_24c0e0;
        case 0x24c0e4u: goto label_24c0e4;
        case 0x24c0e8u: goto label_24c0e8;
        case 0x24c0ecu: goto label_24c0ec;
        case 0x24c0f0u: goto label_24c0f0;
        case 0x24c0f4u: goto label_24c0f4;
        case 0x24c0f8u: goto label_24c0f8;
        case 0x24c0fcu: goto label_24c0fc;
        case 0x24c100u: goto label_24c100;
        case 0x24c104u: goto label_24c104;
        case 0x24c108u: goto label_24c108;
        case 0x24c10cu: goto label_24c10c;
        case 0x24c110u: goto label_24c110;
        case 0x24c114u: goto label_24c114;
        case 0x24c118u: goto label_24c118;
        case 0x24c11cu: goto label_24c11c;
        case 0x24c120u: goto label_24c120;
        case 0x24c124u: goto label_24c124;
        case 0x24c128u: goto label_24c128;
        case 0x24c12cu: goto label_24c12c;
        case 0x24c130u: goto label_24c130;
        case 0x24c134u: goto label_24c134;
        case 0x24c138u: goto label_24c138;
        case 0x24c13cu: goto label_24c13c;
        case 0x24c140u: goto label_24c140;
        case 0x24c144u: goto label_24c144;
        case 0x24c148u: goto label_24c148;
        case 0x24c14cu: goto label_24c14c;
        case 0x24c150u: goto label_24c150;
        case 0x24c154u: goto label_24c154;
        case 0x24c158u: goto label_24c158;
        case 0x24c15cu: goto label_24c15c;
        case 0x24c160u: goto label_24c160;
        case 0x24c164u: goto label_24c164;
        case 0x24c168u: goto label_24c168;
        case 0x24c16cu: goto label_24c16c;
        case 0x24c170u: goto label_24c170;
        case 0x24c174u: goto label_24c174;
        case 0x24c178u: goto label_24c178;
        case 0x24c17cu: goto label_24c17c;
        case 0x24c180u: goto label_24c180;
        case 0x24c184u: goto label_24c184;
        case 0x24c188u: goto label_24c188;
        case 0x24c18cu: goto label_24c18c;
        case 0x24c190u: goto label_24c190;
        case 0x24c194u: goto label_24c194;
        case 0x24c198u: goto label_24c198;
        case 0x24c19cu: goto label_24c19c;
        default: break;
    }

    ctx->pc = 0x24bfc0u;

label_24bfc0:
    // 0x24bfc0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x24bfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_24bfc4:
    // 0x24bfc4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x24bfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_24bfc8:
    // 0x24bfc8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x24bfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_24bfcc:
    // 0x24bfcc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24bfccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24bfd0:
    // 0x24bfd0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x24bfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_24bfd4:
    // 0x24bfd4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x24bfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_24bfd8:
    // 0x24bfd8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x24bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_24bfdc:
    // 0x24bfdc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x24bfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_24bfe0:
    // 0x24bfe0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24bfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_24bfe4:
    // 0x24bfe4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x24bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_24bfe8:
    // 0x24bfe8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24bfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_24bfec:
    // 0x24bfec: 0x8e8200d8  lw          $v0, 0xD8($s4)
    ctx->pc = 0x24bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_24bff0:
    // 0x24bff0: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_24bff4:
    if (ctx->pc == 0x24BFF4u) {
        ctx->pc = 0x24BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFF0u;
        // 0x24bff4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BFF8u;
        goto label_24bff8;
    }
    ctx->pc = 0x24BFF0u;
    {
        const bool branch_taken_0x24bff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BFF0u;
        // 0x24bff4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bff0) {
            ctx->pc = 0x24C170u;
            goto label_24c170;
        }
    }
    ctx->pc = 0x24BFF8u;
label_24bff8:
    // 0x24bff8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x24bff8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_24bffc:
    // 0x24bffc: 0x26900090  addiu       $s0, $s4, 0x90
    ctx->pc = 0x24bffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_24c000:
    // 0x24c000: 0xc0e8b48  jal         func_3A2D20
label_24c004:
    if (ctx->pc == 0x24C004u) {
        ctx->pc = 0x24C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C000u;
        // 0x24c004: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C008u;
        goto label_24c008;
    }
    ctx->pc = 0x24C000u;
    SET_GPR_U32(ctx, 31, 0x24C008u);
    ctx->pc = 0x24C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C000u;
    // 0x24c004: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x24C000u, 0x24C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C008u;
label_24c008:
    // 0x24c008: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x24c008u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_24c00c:
    // 0x24c00c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x24c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_24c010:
    // 0x24c010: 0x24564b00  addiu       $s6, $v0, 0x4B00
    ctx->pc = 0x24c010u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_24c014:
    // 0x24c014: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24c014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c018:
    // 0x24c018: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x24c018u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_24c01c:
    // 0x24c01c: 0xc0e8b58  jal         func_3A2D60
label_24c020:
    if (ctx->pc == 0x24C020u) {
        ctx->pc = 0x24C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C01Cu;
        // 0x24c020: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C024u;
        goto label_24c024;
    }
    ctx->pc = 0x24C01Cu;
    SET_GPR_U32(ctx, 31, 0x24C024u);
    ctx->pc = 0x24C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C01Cu;
    // 0x24c020: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24C01Cu, 0x24C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C024u;
label_24c024:
    // 0x24c024: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24c024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24c028:
    // 0x24c028: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24c028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c02c:
    // 0x24c02c: 0x245716c0  addiu       $s7, $v0, 0x16C0
    ctx->pc = 0x24c02cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_24c030:
    // 0x24c030: 0xc0e8b58  jal         func_3A2D60
label_24c034:
    if (ctx->pc == 0x24C034u) {
        ctx->pc = 0x24C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C030u;
        // 0x24c034: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C038u;
        goto label_24c038;
    }
    ctx->pc = 0x24C030u;
    SET_GPR_U32(ctx, 31, 0x24C038u);
    ctx->pc = 0x24C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C030u;
    // 0x24c034: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24C030u, 0x24C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C038u;
label_24c038:
    // 0x24c038: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24c038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c03c:
    // 0x24c03c: 0xc0e8b70  jal         func_3A2DC0
label_24c040:
    if (ctx->pc == 0x24C040u) {
        ctx->pc = 0x24C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C03Cu;
        // 0x24c040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C044u;
        goto label_24c044;
    }
    ctx->pc = 0x24C03Cu;
    SET_GPR_U32(ctx, 31, 0x24C044u);
    ctx->pc = 0x24C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C03Cu;
    // 0x24c040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x24C03Cu, 0x24C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C044u;
label_24c044:
    // 0x24c044: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24c044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c048:
    // 0x24c048: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24c048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24c04c:
    // 0x24c04c: 0xc0e8b98  jal         func_3A2E60
label_24c050:
    if (ctx->pc == 0x24C050u) {
        ctx->pc = 0x24C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C04Cu;
        // 0x24c050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C054u;
        goto label_24c054;
    }
    ctx->pc = 0x24C04Cu;
    SET_GPR_U32(ctx, 31, 0x24C054u);
    ctx->pc = 0x24C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C04Cu;
    // 0x24c050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E60u, 0x24C04Cu, 0x24C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C054u;
label_24c054:
    // 0x24c054: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24c054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c058:
    // 0x24c058: 0xc0e8b50  jal         func_3A2D40
label_24c05c:
    if (ctx->pc == 0x24C05Cu) {
        ctx->pc = 0x24C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C058u;
        // 0x24c05c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C060u;
        goto label_24c060;
    }
    ctx->pc = 0x24C058u;
    SET_GPR_U32(ctx, 31, 0x24C060u);
    ctx->pc = 0x24C05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C058u;
    // 0x24c05c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x24C058u, 0x24C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C060u;
label_24c060:
    // 0x24c060: 0x52600044  beql        $s3, $zero, . + 4 + (0x44 << 2)
label_24c064:
    if (ctx->pc == 0x24C064u) {
        ctx->pc = 0x24C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C060u;
        // 0x24c064: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C068u;
        goto label_24c068;
    }
    ctx->pc = 0x24C060u;
    {
        const bool branch_taken_0x24c060 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c060) {
            ctx->pc = 0x24C064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C060u;
            // 0x24c064: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C174u;
            goto label_24c174;
        }
    }
    ctx->pc = 0x24C068u;
label_24c068:
    // 0x24c068: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x24c068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_24c06c:
    // 0x24c06c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24c06cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24c070:
    // 0x24c070: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24c074:
    // 0x24c074: 0x40f809  jalr        $v0
label_24c078:
    if (ctx->pc == 0x24C078u) {
        ctx->pc = 0x24C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C074u;
        // 0x24c078: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C07Cu;
        goto label_24c07c;
    }
    ctx->pc = 0x24C074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C07Cu);
        ctx->pc = 0x24C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C074u;
        // 0x24c078: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C074u, 0x24C07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C07Cu;
label_24c07c:
    // 0x24c07c: 0x8e432c7c  lw          $v1, 0x2C7C($s2)
    ctx->pc = 0x24c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c080:
    // 0x24c080: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x24c080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_24c084:
    // 0x24c084: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x24c084u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_24c088:
    // 0x24c088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24c088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c08c:
    // 0x24c08c: 0x8c640840  lw          $a0, 0x840($v1)
    ctx->pc = 0x24c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
label_24c090:
    // 0x24c090: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x24c090u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_24c094:
    // 0x24c094: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x24c094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_24c098:
    // 0x24c098: 0x8ca9bd30  lw          $t1, -0x42D0($a1)
    ctx->pc = 0x24c098u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950192)));
label_24c09c:
    // 0x24c09c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24c09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_24c0a0:
    // 0x24c0a0: 0x26101780  addiu       $s0, $s0, 0x1780
    ctx->pc = 0x24c0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6016));
label_24c0a4:
    // 0x24c0a4: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x24c0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_24c0a8:
    // 0x24c0a8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x24c0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_24c0ac:
    // 0x24c0ac: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x24c0acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_24c0b0:
    // 0x24c0b0: 0xf63821  addu        $a3, $a3, $s6
    ctx->pc = 0x24c0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
label_24c0b4:
    // 0x24c0b4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x24c0b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c0b8:
    // 0x24c0b8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x24c0b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c0bc:
    // 0x24c0bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x24c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_24c0c0:
    // 0x24c0c0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x24c0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24c0c4:
    // 0x24c0c4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x24c0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_24c0c8:
    // 0x24c0c8: 0xc0e6250  jal         func_398940
label_24c0cc:
    if (ctx->pc == 0x24C0CCu) {
        ctx->pc = 0x24C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0C8u;
        // 0x24c0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C0D0u;
        goto label_24c0d0;
    }
    ctx->pc = 0x24C0C8u;
    SET_GPR_U32(ctx, 31, 0x24C0D0u);
    ctx->pc = 0x24C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C0C8u;
    // 0x24c0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x24C0C8u, 0x24C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C0D0u;
label_24c0d0:
    // 0x24c0d0: 0x8e422c7c  lw          $v0, 0x2C7C($s2)
    ctx->pc = 0x24c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c0d4:
    // 0x24c0d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24c0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c0d8:
    // 0x24c0d8: 0xae910364  sw          $s1, 0x364($s4)
    ctx->pc = 0x24c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 868), GPR_U32(ctx, 17));
label_24c0dc:
    // 0x24c0dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24c0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24c0e0:
    // 0x24c0e0: 0xc0e637e  jal         func_398DF8
label_24c0e4:
    if (ctx->pc == 0x24C0E4u) {
        ctx->pc = 0x24C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0E0u;
        // 0x24c0e4: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C0E8u;
        goto label_24c0e8;
    }
    ctx->pc = 0x24C0E0u;
    SET_GPR_U32(ctx, 31, 0x24C0E8u);
    ctx->pc = 0x24C0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C0E0u;
    // 0x24c0e4: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x24C0E0u, 0x24C0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C0E8u;
label_24c0e8:
    // 0x24c0e8: 0x7ae30000  lq          $v1, 0x0($s7)
    ctx->pc = 0x24c0e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_24c0ec:
    // 0x24c0ec: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x24c0ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_24c0f0:
    // 0x24c0f0: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c0f4:
    // 0x24c0f4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x24c0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_24c0f8:
    // 0x24c0f8: 0xc0e8b48  jal         func_3A2D20
label_24c0fc:
    if (ctx->pc == 0x24C0FCu) {
        ctx->pc = 0x24C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0F8u;
        // 0x24c0fc: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C100u;
        goto label_24c100;
    }
    ctx->pc = 0x24C0F8u;
    SET_GPR_U32(ctx, 31, 0x24C100u);
    ctx->pc = 0x24C0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C0F8u;
    // 0x24c0fc: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x24C0F8u, 0x24C100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C100u;
label_24c100:
    // 0x24c100: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24c100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c104:
    // 0x24c104: 0xc0e8b70  jal         func_3A2DC0
label_24c108:
    if (ctx->pc == 0x24C108u) {
        ctx->pc = 0x24C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C104u;
        // 0x24c108: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C10Cu;
        goto label_24c10c;
    }
    ctx->pc = 0x24C104u;
    SET_GPR_U32(ctx, 31, 0x24C10Cu);
    ctx->pc = 0x24C108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C104u;
    // 0x24c108: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x24C104u, 0x24C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C10Cu;
label_24c10c:
    // 0x24c10c: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c110:
    // 0x24c110: 0xc0e8b68  jal         func_3A2DA0
label_24c114:
    if (ctx->pc == 0x24C114u) {
        ctx->pc = 0x24C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C110u;
        // 0x24c114: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C118u;
        goto label_24c118;
    }
    ctx->pc = 0x24C110u;
    SET_GPR_U32(ctx, 31, 0x24C118u);
    ctx->pc = 0x24C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C110u;
    // 0x24c114: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x24C110u, 0x24C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C118u;
label_24c118:
    // 0x24c118: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24c118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c11c:
    // 0x24c11c: 0xc0e8b58  jal         func_3A2D60
label_24c120:
    if (ctx->pc == 0x24C120u) {
        ctx->pc = 0x24C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C11Cu;
        // 0x24c120: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C124u;
        goto label_24c124;
    }
    ctx->pc = 0x24C11Cu;
    SET_GPR_U32(ctx, 31, 0x24C124u);
    ctx->pc = 0x24C120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C11Cu;
    // 0x24c120: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24C11Cu, 0x24C124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C124u;
label_24c124:
    // 0x24c124: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24c124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c128:
    // 0x24c128: 0xc0e8b58  jal         func_3A2D60
label_24c12c:
    if (ctx->pc == 0x24C12Cu) {
        ctx->pc = 0x24C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C128u;
        // 0x24c12c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C130u;
        goto label_24c130;
    }
    ctx->pc = 0x24C128u;
    SET_GPR_U32(ctx, 31, 0x24C130u);
    ctx->pc = 0x24C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C128u;
    // 0x24c12c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24C128u, 0x24C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C130u;
label_24c130:
    // 0x24c130: 0xc089f4a  jal         func_227D28
label_24c134:
    if (ctx->pc == 0x24C134u) {
        ctx->pc = 0x24C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C130u;
        // 0x24c134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C138u;
        goto label_24c138;
    }
    ctx->pc = 0x24C130u;
    SET_GPR_U32(ctx, 31, 0x24C138u);
    ctx->pc = 0x24C134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C130u;
    // 0x24c134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x24C130u, 0x24C138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C138u;
label_24c138:
    // 0x24c138: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24c138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c13c:
    // 0x24c13c: 0xc0e8b68  jal         func_3A2DA0
label_24c140:
    if (ctx->pc == 0x24C140u) {
        ctx->pc = 0x24C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C13Cu;
        // 0x24c140: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C144u;
        goto label_24c144;
    }
    ctx->pc = 0x24C13Cu;
    SET_GPR_U32(ctx, 31, 0x24C144u);
    ctx->pc = 0x24C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C13Cu;
    // 0x24c140: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x24C13Cu, 0x24C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C144u;
label_24c144:
    // 0x24c144: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x24c144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c148:
    // 0x24c148: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24c148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24c14c:
    // 0x24c14c: 0xc0e8b80  jal         func_3A2E00
label_24c150:
    if (ctx->pc == 0x24C150u) {
        ctx->pc = 0x24C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C14Cu;
        // 0x24c150: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C154u;
        goto label_24c154;
    }
    ctx->pc = 0x24C14Cu;
    SET_GPR_U32(ctx, 31, 0x24C154u);
    ctx->pc = 0x24C150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C14Cu;
    // 0x24c150: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x24C14Cu, 0x24C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C154u;
label_24c154:
    // 0x24c154: 0xc0e8b50  jal         func_3A2D40
label_24c158:
    if (ctx->pc == 0x24C158u) {
        ctx->pc = 0x24C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C154u;
        // 0x24c158: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C15Cu;
        goto label_24c15c;
    }
    ctx->pc = 0x24C154u;
    SET_GPR_U32(ctx, 31, 0x24C15Cu);
    ctx->pc = 0x24C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C154u;
    // 0x24c158: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x24C154u, 0x24C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C15Cu;
label_24c15c:
    // 0x24c15c: 0x8e422c7c  lw          $v0, 0x2C7C($s2)
    ctx->pc = 0x24c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_24c160:
    // 0x24c160: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24c160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24c164:
    // 0x24c164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24c164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c168:
    // 0x24c168: 0xc0e637e  jal         func_398DF8
label_24c16c:
    if (ctx->pc == 0x24C16Cu) {
        ctx->pc = 0x24C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C168u;
        // 0x24c16c: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C170u;
        goto label_24c170;
    }
    ctx->pc = 0x24C168u;
    SET_GPR_U32(ctx, 31, 0x24C170u);
    ctx->pc = 0x24C16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C168u;
    // 0x24c16c: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x24C168u, 0x24C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C170u;
label_24c170:
    // 0x24c170: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x24c170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_24c174:
    // 0x24c174: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x24c174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_24c178:
    // 0x24c178: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x24c178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_24c17c:
    // 0x24c17c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x24c17cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24c180:
    // 0x24c180: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x24c180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24c184:
    // 0x24c184: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x24c184u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24c188:
    // 0x24c188: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24c188u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24c18c:
    // 0x24c18c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x24c18cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24c190:
    // 0x24c190: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24c190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24c194:
    // 0x24c194: 0x3e00008  jr          $ra
label_24c198:
    if (ctx->pc == 0x24C198u) {
        ctx->pc = 0x24C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C194u;
        // 0x24c198: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C19Cu;
        goto label_24c19c;
    }
    ctx->pc = 0x24C194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C194u;
        // 0x24c198: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C19Cu;
label_24c19c:
    // 0x24c19c: 0x0  nop
    ctx->pc = 0x24c19cu;
    // NOP
    ctx->pc = 0x24c1a0u;
}
