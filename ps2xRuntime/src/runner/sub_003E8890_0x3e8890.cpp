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

// Function: sub_003E8890
// Address: 0x3e8890 - 0x3e8a40
void sub_003E8890_0x3e8890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8890_0x3e8890");
#endif

    switch (ctx->pc) {
        case 0x3e8890u: goto label_3e8890;
        case 0x3e8894u: goto label_3e8894;
        case 0x3e8898u: goto label_3e8898;
        case 0x3e889cu: goto label_3e889c;
        case 0x3e88a0u: goto label_3e88a0;
        case 0x3e88a4u: goto label_3e88a4;
        case 0x3e88a8u: goto label_3e88a8;
        case 0x3e88acu: goto label_3e88ac;
        case 0x3e88b0u: goto label_3e88b0;
        case 0x3e88b4u: goto label_3e88b4;
        case 0x3e88b8u: goto label_3e88b8;
        case 0x3e88bcu: goto label_3e88bc;
        case 0x3e88c0u: goto label_3e88c0;
        case 0x3e88c4u: goto label_3e88c4;
        case 0x3e88c8u: goto label_3e88c8;
        case 0x3e88ccu: goto label_3e88cc;
        case 0x3e88d0u: goto label_3e88d0;
        case 0x3e88d4u: goto label_3e88d4;
        case 0x3e88d8u: goto label_3e88d8;
        case 0x3e88dcu: goto label_3e88dc;
        case 0x3e88e0u: goto label_3e88e0;
        case 0x3e88e4u: goto label_3e88e4;
        case 0x3e88e8u: goto label_3e88e8;
        case 0x3e88ecu: goto label_3e88ec;
        case 0x3e88f0u: goto label_3e88f0;
        case 0x3e88f4u: goto label_3e88f4;
        case 0x3e88f8u: goto label_3e88f8;
        case 0x3e88fcu: goto label_3e88fc;
        case 0x3e8900u: goto label_3e8900;
        case 0x3e8904u: goto label_3e8904;
        case 0x3e8908u: goto label_3e8908;
        case 0x3e890cu: goto label_3e890c;
        case 0x3e8910u: goto label_3e8910;
        case 0x3e8914u: goto label_3e8914;
        case 0x3e8918u: goto label_3e8918;
        case 0x3e891cu: goto label_3e891c;
        case 0x3e8920u: goto label_3e8920;
        case 0x3e8924u: goto label_3e8924;
        case 0x3e8928u: goto label_3e8928;
        case 0x3e892cu: goto label_3e892c;
        case 0x3e8930u: goto label_3e8930;
        case 0x3e8934u: goto label_3e8934;
        case 0x3e8938u: goto label_3e8938;
        case 0x3e893cu: goto label_3e893c;
        case 0x3e8940u: goto label_3e8940;
        case 0x3e8944u: goto label_3e8944;
        case 0x3e8948u: goto label_3e8948;
        case 0x3e894cu: goto label_3e894c;
        case 0x3e8950u: goto label_3e8950;
        case 0x3e8954u: goto label_3e8954;
        case 0x3e8958u: goto label_3e8958;
        case 0x3e895cu: goto label_3e895c;
        case 0x3e8960u: goto label_3e8960;
        case 0x3e8964u: goto label_3e8964;
        case 0x3e8968u: goto label_3e8968;
        case 0x3e896cu: goto label_3e896c;
        case 0x3e8970u: goto label_3e8970;
        case 0x3e8974u: goto label_3e8974;
        case 0x3e8978u: goto label_3e8978;
        case 0x3e897cu: goto label_3e897c;
        case 0x3e8980u: goto label_3e8980;
        case 0x3e8984u: goto label_3e8984;
        case 0x3e8988u: goto label_3e8988;
        case 0x3e898cu: goto label_3e898c;
        case 0x3e8990u: goto label_3e8990;
        case 0x3e8994u: goto label_3e8994;
        case 0x3e8998u: goto label_3e8998;
        case 0x3e899cu: goto label_3e899c;
        case 0x3e89a0u: goto label_3e89a0;
        case 0x3e89a4u: goto label_3e89a4;
        case 0x3e89a8u: goto label_3e89a8;
        case 0x3e89acu: goto label_3e89ac;
        case 0x3e89b0u: goto label_3e89b0;
        case 0x3e89b4u: goto label_3e89b4;
        case 0x3e89b8u: goto label_3e89b8;
        case 0x3e89bcu: goto label_3e89bc;
        case 0x3e89c0u: goto label_3e89c0;
        case 0x3e89c4u: goto label_3e89c4;
        case 0x3e89c8u: goto label_3e89c8;
        case 0x3e89ccu: goto label_3e89cc;
        case 0x3e89d0u: goto label_3e89d0;
        case 0x3e89d4u: goto label_3e89d4;
        case 0x3e89d8u: goto label_3e89d8;
        case 0x3e89dcu: goto label_3e89dc;
        case 0x3e89e0u: goto label_3e89e0;
        case 0x3e89e4u: goto label_3e89e4;
        case 0x3e89e8u: goto label_3e89e8;
        case 0x3e89ecu: goto label_3e89ec;
        case 0x3e89f0u: goto label_3e89f0;
        case 0x3e89f4u: goto label_3e89f4;
        case 0x3e89f8u: goto label_3e89f8;
        case 0x3e89fcu: goto label_3e89fc;
        case 0x3e8a00u: goto label_3e8a00;
        case 0x3e8a04u: goto label_3e8a04;
        case 0x3e8a08u: goto label_3e8a08;
        case 0x3e8a0cu: goto label_3e8a0c;
        case 0x3e8a10u: goto label_3e8a10;
        case 0x3e8a14u: goto label_3e8a14;
        case 0x3e8a18u: goto label_3e8a18;
        case 0x3e8a1cu: goto label_3e8a1c;
        case 0x3e8a20u: goto label_3e8a20;
        case 0x3e8a24u: goto label_3e8a24;
        case 0x3e8a28u: goto label_3e8a28;
        case 0x3e8a2cu: goto label_3e8a2c;
        case 0x3e8a30u: goto label_3e8a30;
        case 0x3e8a34u: goto label_3e8a34;
        case 0x3e8a38u: goto label_3e8a38;
        case 0x3e8a3cu: goto label_3e8a3c;
        default: break;
    }

    ctx->pc = 0x3e8890u;

label_3e8890:
    // 0x3e8890: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x3e8890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_3e8894:
    // 0x3e8894: 0x7fb004a0  sq          $s0, 0x4A0($sp)
    ctx->pc = 0x3e8894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 16));
label_3e8898:
    // 0x3e8898: 0x7fb10490  sq          $s1, 0x490($sp)
    ctx->pc = 0x3e8898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 17));
label_3e889c:
    // 0x3e889c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e889cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e88a0:
    // 0x3e88a0: 0x7fb20480  sq          $s2, 0x480($sp)
    ctx->pc = 0x3e88a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 18));
label_3e88a4:
    // 0x3e88a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e88a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e88a8:
    // 0x3e88a8: 0x7fb30470  sq          $s3, 0x470($sp)
    ctx->pc = 0x3e88a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 19));
label_3e88ac:
    // 0x3e88ac: 0x7fb40460  sq          $s4, 0x460($sp)
    ctx->pc = 0x3e88acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 20));
label_3e88b0:
    // 0x3e88b0: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x3e88b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
label_3e88b4:
    // 0x3e88b4: 0x26340010  addiu       $s4, $s1, 0x10
    ctx->pc = 0x3e88b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3e88b8:
    // 0x3e88b8: 0xe7b504b8  swc1        $f21, 0x4B8($sp)
    ctx->pc = 0x3e88b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1208), bits); }
label_3e88bc:
    // 0x3e88bc: 0xe7b404b0  swc1        $f20, 0x4B0($sp)
    ctx->pc = 0x3e88bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1200), bits); }
label_3e88c0:
    // 0x3e88c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e88c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e88c4:
    // 0x3e88c4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3e88c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3e88c8:
    // 0x3e88c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e88c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e88cc:
    // 0x3e88cc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e88ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e88d0:
    // 0x3e88d0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e88d4:
    // 0x3e88d4: 0x40f809  jalr        $v0
label_3e88d8:
    if (ctx->pc == 0x3E88D8u) {
        ctx->pc = 0x3E88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E88D4u;
        // 0x3e88d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E88DCu;
        goto label_3e88dc;
    }
    ctx->pc = 0x3E88D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E88DCu);
        ctx->pc = 0x3E88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E88D4u;
        // 0x3e88d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E88D4u, 0x3E88DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E88DCu;
label_3e88dc:
    // 0x3e88dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e88dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e88e0:
    // 0x3e88e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e88e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e88e4:
    // 0x3e88e4: 0xc0ea12a  jal         func_3A84A8
label_3e88e8:
    if (ctx->pc == 0x3E88E8u) {
        ctx->pc = 0x3E88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E88E4u;
        // 0x3e88e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E88ECu;
        goto label_3e88ec;
    }
    ctx->pc = 0x3E88E4u;
    SET_GPR_U32(ctx, 31, 0x3E88ECu);
    ctx->pc = 0x3E88E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E88E4u;
    // 0x3e88e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E88E4u, 0x3E88ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E88ECu;
label_3e88ec:
    // 0x3e88ec: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e88ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e88f0:
    // 0x3e88f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e88f4:
    // 0x3e88f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e88f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e88f8:
    // 0x3e88f8: 0xc0ea12a  jal         func_3A84A8
label_3e88fc:
    if (ctx->pc == 0x3E88FCu) {
        ctx->pc = 0x3E88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E88F8u;
        // 0x3e88fc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8900u;
        goto label_3e8900;
    }
    ctx->pc = 0x3E88F8u;
    SET_GPR_U32(ctx, 31, 0x3E8900u);
    ctx->pc = 0x3E88FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E88F8u;
    // 0x3e88fc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E88F8u, 0x3E8900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8900u;
label_3e8900:
    // 0x3e8900: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e8900u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e8904:
    // 0x3e8904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e8904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e8908:
    // 0x3e8908: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e8908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e890c:
    // 0x3e890c: 0xc0e858c  jal         func_3A1630
label_3e8910:
    if (ctx->pc == 0x3E8910u) {
        ctx->pc = 0x3E8910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E890Cu;
        // 0x3e8910: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8914u;
        goto label_3e8914;
    }
    ctx->pc = 0x3E890Cu;
    SET_GPR_U32(ctx, 31, 0x3E8914u);
    ctx->pc = 0x3E8910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E890Cu;
    // 0x3e8910: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E890Cu, 0x3E8914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8914u;
label_3e8914:
    // 0x3e8914: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3e8914u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e8918:
    // 0x3e8918: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x3e8918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_3e891c:
    // 0x3e891c: 0x3c03e0e0  lui         $v1, 0xE0E0
    ctx->pc = 0x3e891cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57568 << 16));
label_3e8920:
    // 0x3e8920: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3e8920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3e8924:
    // 0x3e8924: 0x3463ffe4  ori         $v1, $v1, 0xFFE4
    ctx->pc = 0x3e8924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65508);
label_3e8928:
    // 0x3e8928: 0xe63500c0  swc1        $f21, 0xC0($s1)
    ctx->pc = 0x3e8928u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3e892c:
    // 0x3e892c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e8930:
    // 0x3e8930: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3e8930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e8934:
    // 0x3e8934: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x3e8934u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
label_3e8938:
    // 0x3e8938: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3e8938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3e893c:
    // 0x3e893c: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x3e893cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_3e8940:
    // 0x3e8940: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3e8940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3e8944:
    // 0x3e8944: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3e8944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3e8948:
    // 0x3e8948: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3e8948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3e894c:
    // 0x3e894c: 0x60f809  jalr        $v1
label_3e8950:
    if (ctx->pc == 0x3E8950u) {
        ctx->pc = 0x3E8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E894Cu;
        // 0x3e8950: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8954u;
        goto label_3e8954;
    }
    ctx->pc = 0x3E894Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E8954u);
        ctx->pc = 0x3E8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E894Cu;
        // 0x3e8950: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E894Cu, 0x3E8954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8954u;
label_3e8954:
    // 0x3e8954: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3e8954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_3e8958:
    // 0x3e8958: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e8958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e895c:
    // 0x3e895c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3e895cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e8960:
    // 0x3e8960: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e8960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8964:
    // 0x3e8964: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x3e8964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_3e8968:
    // 0x3e8968: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3e8968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3e896c:
    // 0x3e896c: 0xc0e93a2  jal         func_3A4E88
label_3e8970:
    if (ctx->pc == 0x3E8970u) {
        ctx->pc = 0x3E8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E896Cu;
        // 0x3e8970: 0x3c040199  lui         $a0, 0x199 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)409 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8974u;
        goto label_3e8974;
    }
    ctx->pc = 0x3E896Cu;
    SET_GPR_U32(ctx, 31, 0x3E8974u);
    ctx->pc = 0x3E8970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E896Cu;
    // 0x3e8970: 0x3c040199  lui         $a0, 0x199 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)409 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3E896Cu, 0x3E8974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8974u;
label_3e8974:
    // 0x3e8974: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e8974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3e8978:
    // 0x3e8978: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x3e8978u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_3e897c:
    // 0x3e897c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x3e897cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e8980:
    // 0x3e8980: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x3e8980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
label_3e8984:
    // 0x3e8984: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3e8984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3e8988:
    // 0x3e8988: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3e8988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3e898c:
    // 0x3e898c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e898cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e8990:
    // 0x3e8990: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3e8990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3e8994:
    // 0x3e8994: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x3e8994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e8998:
    // 0x3e8998: 0xc0cd5ea  jal         func_3357A8
label_3e899c:
    if (ctx->pc == 0x3E899Cu) {
        ctx->pc = 0x3E899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8998u;
        // 0x3e899c: 0xc7ad0024  lwc1        $f13, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E89A0u;
        goto label_3e89a0;
    }
    ctx->pc = 0x3E8998u;
    SET_GPR_U32(ctx, 31, 0x3E89A0u);
    ctx->pc = 0x3E899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8998u;
    // 0x3e899c: 0xc7ad0024  lwc1        $f13, 0x24($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x3E8998u, 0x3E89A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E89A0u;
label_3e89a0:
    // 0x3e89a0: 0x46150502  mul.s       $f20, $f0, $f21
    ctx->pc = 0x3e89a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3e89a4:
    // 0x3e89a4: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x3e89a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_3e89a8:
    // 0x3e89a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3e89a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3e89ac:
    // 0x3e89ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e89acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e89b0:
    // 0x3e89b0: 0x0  nop
    ctx->pc = 0x3e89b0u;
    // NOP
label_3e89b4:
    // 0x3e89b4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x3e89b4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3e89b8:
    // 0x3e89b8: 0xc12e310  jal         func_4B8C40
label_3e89bc:
    if (ctx->pc == 0x3E89BCu) {
        ctx->pc = 0x3E89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E89B8u;
        // 0x3e89bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E89C0u;
        goto label_3e89c0;
    }
    ctx->pc = 0x3E89B8u;
    SET_GPR_U32(ctx, 31, 0x3E89C0u);
    ctx->pc = 0x3E89BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E89B8u;
    // 0x3e89bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3E89B8u, 0x3E89C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E89C0u;
label_3e89c0:
    // 0x3e89c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3e89c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3e89c4:
    // 0x3e89c4: 0xc12e29c  jal         func_4B8A70
label_3e89c8:
    if (ctx->pc == 0x3E89C8u) {
        ctx->pc = 0x3E89C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E89C4u;
        // 0x3e89c8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E89CCu;
        goto label_3e89cc;
    }
    ctx->pc = 0x3E89C4u;
    SET_GPR_U32(ctx, 31, 0x3E89CCu);
    ctx->pc = 0x3E89C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E89C4u;
    // 0x3e89c8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3E89C4u, 0x3E89CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E89CCu;
label_3e89cc:
    // 0x3e89cc: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x3e89ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3e89d0:
    // 0x3e89d0: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x3e89d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3e89d4:
    // 0x3e89d4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3e89d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3e89d8:
    // 0x3e89d8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3e89d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3e89dc:
    // 0x3e89dc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3e89dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3e89e0:
    // 0x3e89e0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3e89e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e89e4:
    // 0x3e89e4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3e89e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3e89e8:
    // 0x3e89e8: 0x261058d0  addiu       $s0, $s0, 0x58D0
    ctx->pc = 0x3e89e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22736));
label_3e89ec:
    // 0x3e89ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e89ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e89f0:
    // 0x3e89f0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e89f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e89f4:
    // 0x3e89f4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3e89f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3e89f8:
    // 0x3e89f8: 0x7e820010  sq          $v0, 0x10($s4)
    ctx->pc = 0x3e89f8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 2));
label_3e89fc:
    // 0x3e89fc: 0xc0e9f6a  jal         func_3A7DA8
label_3e8a00:
    if (ctx->pc == 0x3E8A00u) {
        ctx->pc = 0x3E8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E89FCu;
        // 0x3e8a00: 0xafb10020  sw          $s1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8A04u;
        goto label_3e8a04;
    }
    ctx->pc = 0x3E89FCu;
    SET_GPR_U32(ctx, 31, 0x3E8A04u);
    ctx->pc = 0x3E8A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E89FCu;
    // 0x3e8a00: 0xafb10020  sw          $s1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3E89FCu, 0x3E8A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8A04u;
label_3e8a04:
    // 0x3e8a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8a08:
    // 0x3e8a08: 0xc0f15bc  jal         func_3C56F0
label_3e8a0c:
    if (ctx->pc == 0x3E8A0Cu) {
        ctx->pc = 0x3E8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8A08u;
        // 0x3e8a0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8A10u;
        goto label_3e8a10;
    }
    ctx->pc = 0x3E8A08u;
    SET_GPR_U32(ctx, 31, 0x3E8A10u);
    ctx->pc = 0x3E8A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8A08u;
    // 0x3e8a0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E8A08u, 0x3E8A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8A10u;
label_3e8a10:
    // 0x3e8a10: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3e8a10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_3e8a14:
    // 0x3e8a14: 0x7bb004a0  lq          $s0, 0x4A0($sp)
    ctx->pc = 0x3e8a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3e8a18:
    // 0x3e8a18: 0x7bb10490  lq          $s1, 0x490($sp)
    ctx->pc = 0x3e8a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3e8a1c:
    // 0x3e8a1c: 0x7bb20480  lq          $s2, 0x480($sp)
    ctx->pc = 0x3e8a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e8a20:
    // 0x3e8a20: 0x7bb30470  lq          $s3, 0x470($sp)
    ctx->pc = 0x3e8a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3e8a24:
    // 0x3e8a24: 0x7bb40460  lq          $s4, 0x460($sp)
    ctx->pc = 0x3e8a24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e8a28:
    // 0x3e8a28: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x3e8a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
label_3e8a2c:
    // 0x3e8a2c: 0xc7b504b8  lwc1        $f21, 0x4B8($sp)
    ctx->pc = 0x3e8a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e8a30:
    // 0x3e8a30: 0xc7b404b0  lwc1        $f20, 0x4B0($sp)
    ctx->pc = 0x3e8a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e8a34:
    // 0x3e8a34: 0x3e00008  jr          $ra
label_3e8a38:
    if (ctx->pc == 0x3E8A38u) {
        ctx->pc = 0x3E8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8A34u;
        // 0x3e8a38: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8A3Cu;
        goto label_3e8a3c;
    }
    ctx->pc = 0x3E8A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8A34u;
        // 0x3e8a38: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8A3Cu;
label_3e8a3c:
    // 0x3e8a3c: 0x0  nop
    ctx->pc = 0x3e8a3cu;
    // NOP
    ctx->pc = 0x3e8a40u;
}
