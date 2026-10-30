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

// Function: sub_001C8880
// Address: 0x1c8880 - 0x1c8aa0
void sub_001C8880_0x1c8880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8880_0x1c8880");
#endif

    switch (ctx->pc) {
        case 0x1c8880u: goto label_1c8880;
        case 0x1c8884u: goto label_1c8884;
        case 0x1c8888u: goto label_1c8888;
        case 0x1c888cu: goto label_1c888c;
        case 0x1c8890u: goto label_1c8890;
        case 0x1c8894u: goto label_1c8894;
        case 0x1c8898u: goto label_1c8898;
        case 0x1c889cu: goto label_1c889c;
        case 0x1c88a0u: goto label_1c88a0;
        case 0x1c88a4u: goto label_1c88a4;
        case 0x1c88a8u: goto label_1c88a8;
        case 0x1c88acu: goto label_1c88ac;
        case 0x1c88b0u: goto label_1c88b0;
        case 0x1c88b4u: goto label_1c88b4;
        case 0x1c88b8u: goto label_1c88b8;
        case 0x1c88bcu: goto label_1c88bc;
        case 0x1c88c0u: goto label_1c88c0;
        case 0x1c88c4u: goto label_1c88c4;
        case 0x1c88c8u: goto label_1c88c8;
        case 0x1c88ccu: goto label_1c88cc;
        case 0x1c88d0u: goto label_1c88d0;
        case 0x1c88d4u: goto label_1c88d4;
        case 0x1c88d8u: goto label_1c88d8;
        case 0x1c88dcu: goto label_1c88dc;
        case 0x1c88e0u: goto label_1c88e0;
        case 0x1c88e4u: goto label_1c88e4;
        case 0x1c88e8u: goto label_1c88e8;
        case 0x1c88ecu: goto label_1c88ec;
        case 0x1c88f0u: goto label_1c88f0;
        case 0x1c88f4u: goto label_1c88f4;
        case 0x1c88f8u: goto label_1c88f8;
        case 0x1c88fcu: goto label_1c88fc;
        case 0x1c8900u: goto label_1c8900;
        case 0x1c8904u: goto label_1c8904;
        case 0x1c8908u: goto label_1c8908;
        case 0x1c890cu: goto label_1c890c;
        case 0x1c8910u: goto label_1c8910;
        case 0x1c8914u: goto label_1c8914;
        case 0x1c8918u: goto label_1c8918;
        case 0x1c891cu: goto label_1c891c;
        case 0x1c8920u: goto label_1c8920;
        case 0x1c8924u: goto label_1c8924;
        case 0x1c8928u: goto label_1c8928;
        case 0x1c892cu: goto label_1c892c;
        case 0x1c8930u: goto label_1c8930;
        case 0x1c8934u: goto label_1c8934;
        case 0x1c8938u: goto label_1c8938;
        case 0x1c893cu: goto label_1c893c;
        case 0x1c8940u: goto label_1c8940;
        case 0x1c8944u: goto label_1c8944;
        case 0x1c8948u: goto label_1c8948;
        case 0x1c894cu: goto label_1c894c;
        case 0x1c8950u: goto label_1c8950;
        case 0x1c8954u: goto label_1c8954;
        case 0x1c8958u: goto label_1c8958;
        case 0x1c895cu: goto label_1c895c;
        case 0x1c8960u: goto label_1c8960;
        case 0x1c8964u: goto label_1c8964;
        case 0x1c8968u: goto label_1c8968;
        case 0x1c896cu: goto label_1c896c;
        case 0x1c8970u: goto label_1c8970;
        case 0x1c8974u: goto label_1c8974;
        case 0x1c8978u: goto label_1c8978;
        case 0x1c897cu: goto label_1c897c;
        case 0x1c8980u: goto label_1c8980;
        case 0x1c8984u: goto label_1c8984;
        case 0x1c8988u: goto label_1c8988;
        case 0x1c898cu: goto label_1c898c;
        case 0x1c8990u: goto label_1c8990;
        case 0x1c8994u: goto label_1c8994;
        case 0x1c8998u: goto label_1c8998;
        case 0x1c899cu: goto label_1c899c;
        case 0x1c89a0u: goto label_1c89a0;
        case 0x1c89a4u: goto label_1c89a4;
        case 0x1c89a8u: goto label_1c89a8;
        case 0x1c89acu: goto label_1c89ac;
        case 0x1c89b0u: goto label_1c89b0;
        case 0x1c89b4u: goto label_1c89b4;
        case 0x1c89b8u: goto label_1c89b8;
        case 0x1c89bcu: goto label_1c89bc;
        case 0x1c89c0u: goto label_1c89c0;
        case 0x1c89c4u: goto label_1c89c4;
        case 0x1c89c8u: goto label_1c89c8;
        case 0x1c89ccu: goto label_1c89cc;
        case 0x1c89d0u: goto label_1c89d0;
        case 0x1c89d4u: goto label_1c89d4;
        case 0x1c89d8u: goto label_1c89d8;
        case 0x1c89dcu: goto label_1c89dc;
        case 0x1c89e0u: goto label_1c89e0;
        case 0x1c89e4u: goto label_1c89e4;
        case 0x1c89e8u: goto label_1c89e8;
        case 0x1c89ecu: goto label_1c89ec;
        case 0x1c89f0u: goto label_1c89f0;
        case 0x1c89f4u: goto label_1c89f4;
        case 0x1c89f8u: goto label_1c89f8;
        case 0x1c89fcu: goto label_1c89fc;
        case 0x1c8a00u: goto label_1c8a00;
        case 0x1c8a04u: goto label_1c8a04;
        case 0x1c8a08u: goto label_1c8a08;
        case 0x1c8a0cu: goto label_1c8a0c;
        case 0x1c8a10u: goto label_1c8a10;
        case 0x1c8a14u: goto label_1c8a14;
        case 0x1c8a18u: goto label_1c8a18;
        case 0x1c8a1cu: goto label_1c8a1c;
        case 0x1c8a20u: goto label_1c8a20;
        case 0x1c8a24u: goto label_1c8a24;
        case 0x1c8a28u: goto label_1c8a28;
        case 0x1c8a2cu: goto label_1c8a2c;
        case 0x1c8a30u: goto label_1c8a30;
        case 0x1c8a34u: goto label_1c8a34;
        case 0x1c8a38u: goto label_1c8a38;
        case 0x1c8a3cu: goto label_1c8a3c;
        case 0x1c8a40u: goto label_1c8a40;
        case 0x1c8a44u: goto label_1c8a44;
        case 0x1c8a48u: goto label_1c8a48;
        case 0x1c8a4cu: goto label_1c8a4c;
        case 0x1c8a50u: goto label_1c8a50;
        case 0x1c8a54u: goto label_1c8a54;
        case 0x1c8a58u: goto label_1c8a58;
        case 0x1c8a5cu: goto label_1c8a5c;
        case 0x1c8a60u: goto label_1c8a60;
        case 0x1c8a64u: goto label_1c8a64;
        case 0x1c8a68u: goto label_1c8a68;
        case 0x1c8a6cu: goto label_1c8a6c;
        case 0x1c8a70u: goto label_1c8a70;
        case 0x1c8a74u: goto label_1c8a74;
        case 0x1c8a78u: goto label_1c8a78;
        case 0x1c8a7cu: goto label_1c8a7c;
        case 0x1c8a80u: goto label_1c8a80;
        case 0x1c8a84u: goto label_1c8a84;
        case 0x1c8a88u: goto label_1c8a88;
        case 0x1c8a8cu: goto label_1c8a8c;
        case 0x1c8a90u: goto label_1c8a90;
        case 0x1c8a94u: goto label_1c8a94;
        case 0x1c8a98u: goto label_1c8a98;
        case 0x1c8a9cu: goto label_1c8a9c;
        default: break;
    }

    ctx->pc = 0x1c8880u;

label_1c8880:
    // 0x1c8880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c8880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1c8884:
    // 0x1c8884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8888:
    // 0x1c8888: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1c8888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1c888c:
    // 0x1c888c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1c888cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1c8890:
    // 0x1c8890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c8890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c8894:
    // 0x1c8894: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1c8894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1c8898:
    // 0x1c8898: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c8898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1c889c:
    // 0x1c889c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1c889cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1c88a0:
    // 0x1c88a0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1c88a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1c88a4:
    // 0x1c88a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c88a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c88a8:
    // 0x1c88a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c88a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c88ac:
    // 0x1c88ac: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x1c88acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
label_1c88b0:
    // 0x1c88b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c88b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c88b4:
    // 0x1c88b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c88b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c88b8:
    // 0x1c88b8: 0xc06e424  jal         func_1B9090
label_1c88bc:
    if (ctx->pc == 0x1C88BCu) {
        ctx->pc = 0x1C88BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88B8u;
        // 0x1c88bc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C88C0u;
        goto label_1c88c0;
    }
    ctx->pc = 0x1C88B8u;
    SET_GPR_U32(ctx, 31, 0x1C88C0u);
    ctx->pc = 0x1C88BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88B8u;
    // 0x1c88bc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1C88B8u, 0x1C88C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C88C0u;
label_1c88c0:
    // 0x1c88c0: 0x8e4a27e4  lw          $t2, 0x27E4($s2)
    ctx->pc = 0x1c88c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1c88c4:
    // 0x1c88c4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1c88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1c88c8:
    // 0x1c88c8: 0x24535548  addiu       $s3, $v0, 0x5548
    ctx->pc = 0x1c88c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 21832));
label_1c88cc:
    // 0x1c88cc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c88ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c88d0:
    // 0x1c88d0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1c88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1c88d4:
    // 0x1c88d4: 0x24a55530  addiu       $a1, $a1, 0x5530
    ctx->pc = 0x1c88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21808));
label_1c88d8:
    // 0x1c88d8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1c88d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c88dc:
    // 0x1c88dc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c88dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c88e0:
    // 0x1c88e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c88e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c88e4:
    // 0x1c88e4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1c88e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c88e8:
    // 0x1c88e8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c88ec:
    // 0x1c88ec: 0x24090041  addiu       $t1, $zero, 0x41
    ctx->pc = 0x1c88ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1c88f0:
    // 0x1c88f0: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1c88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1c88f4:
    // 0x1c88f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c88f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c88f8:
    // 0x1c88f8: 0x40f809  jalr        $v0
label_1c88fc:
    if (ctx->pc == 0x1C88FCu) {
        ctx->pc = 0x1C88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88F8u;
        // 0x1c88fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8900u;
        goto label_1c8900;
    }
    ctx->pc = 0x1C88F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C8900u);
        ctx->pc = 0x1C88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88F8u;
        // 0x1c88fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C88F8u, 0x1C8900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8900u;
label_1c8900:
    // 0x1c8900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c8900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c8904:
    // 0x1c8904: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1c8908:
    if (ctx->pc == 0x1C8908u) {
        ctx->pc = 0x1C8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8904u;
        // 0x1c8908: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C890Cu;
        goto label_1c890c;
    }
    ctx->pc = 0x1C8904u;
    {
        const bool branch_taken_0x1c8904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8904u;
        // 0x1c8908: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8904) {
            ctx->pc = 0x1C895Cu;
            goto label_1c895c;
        }
    }
    ctx->pc = 0x1C890Cu;
label_1c890c:
    // 0x1c890c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c890cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c8910:
    // 0x1c8910: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x1c8910u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1c8914:
    // 0x1c8914: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1c8914u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1c8918:
    // 0x1c8918: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1c8918u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1c891c:
    // 0x1c891c: 0x24a554f0  addiu       $a1, $a1, 0x54F0
    ctx->pc = 0x1c891cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21744));
label_1c8920:
    // 0x1c8920: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1c8920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1c8924:
    // 0x1c8924: 0x250854f8  addiu       $t0, $t0, 0x54F8
    ctx->pc = 0x1c8924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21752));
label_1c8928:
    // 0x1c8928: 0x254a5520  addiu       $t2, $t2, 0x5520
    ctx->pc = 0x1c8928u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 21792));
label_1c892c:
    // 0x1c892c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1c892cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c8930:
    // 0x1c8930: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c8930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c8934:
    // 0x1c8934: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c8934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c8938:
    // 0x1c8938: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c8938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c893c:
    // 0x1c893c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1c893cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1c8940:
    // 0x1c8940: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1c8940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1c8944:
    // 0x1c8944: 0x40f809  jalr        $v0
label_1c8948:
    if (ctx->pc == 0x1C8948u) {
        ctx->pc = 0x1C8948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8944u;
        // 0x1c8948: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C894Cu;
        goto label_1c894c;
    }
    ctx->pc = 0x1C8944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C894Cu);
        ctx->pc = 0x1C8948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8944u;
        // 0x1c8948: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8944u, 0x1C894Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C894Cu;
label_1c894c:
    // 0x1c894c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1c894cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1c8950:
    // 0x1c8950: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x1c8950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
label_1c8954:
    // 0x1c8954: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c8954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c8958:
    // 0x1c8958: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1c8958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
label_1c895c:
    // 0x1c895c: 0xae300544  sw          $s0, 0x544($s1)
    ctx->pc = 0x1c895cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1348), GPR_U32(ctx, 16));
label_1c8960:
    // 0x1c8960: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c8960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c8964:
    // 0x1c8964: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1c8964u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1c8968:
    // 0x1c8968: 0x24a555a0  addiu       $a1, $a1, 0x55A0
    ctx->pc = 0x1c8968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21920));
label_1c896c:
    // 0x1c896c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1c896cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c8970:
    // 0x1c8970: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1c8970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c8974:
    // 0x1c8974: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1c8974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1c8978:
    // 0x1c8978: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c8978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c897c:
    // 0x1c897c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1c897cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1c8980:
    // 0x1c8980: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c8980u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8984:
    // 0x1c8984: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c8984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c8988:
    // 0x1c8988: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c8988u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c898c:
    // 0x1c898c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c8990:
    // 0x1c8990: 0x40f809  jalr        $v0
label_1c8994:
    if (ctx->pc == 0x1C8994u) {
        ctx->pc = 0x1C8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8990u;
        // 0x1c8994: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8998u;
        goto label_1c8998;
    }
    ctx->pc = 0x1C8990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C8998u);
        ctx->pc = 0x1C8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8990u;
        // 0x1c8994: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8990u, 0x1C8998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8998u;
label_1c8998:
    // 0x1c8998: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c8998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c899c:
    // 0x1c899c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1c89a0:
    if (ctx->pc == 0x1C89A0u) {
        ctx->pc = 0x1C89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C899Cu;
        // 0x1c89a0: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C89A4u;
        goto label_1c89a4;
    }
    ctx->pc = 0x1C899Cu;
    {
        const bool branch_taken_0x1c899c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C899Cu;
        // 0x1c89a0: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c899c) {
            ctx->pc = 0x1C89F4u;
            goto label_1c89f4;
        }
    }
    ctx->pc = 0x1C89A4u;
label_1c89a4:
    // 0x1c89a4: 0x8e4b27e4  lw          $t3, 0x27E4($s2)
    ctx->pc = 0x1c89a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1c89a8:
    // 0x1c89a8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1c89a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1c89ac:
    // 0x1c89ac: 0x24a55570  addiu       $a1, $a1, 0x5570
    ctx->pc = 0x1c89acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21872));
label_1c89b0:
    // 0x1c89b0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1c89b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1c89b4:
    // 0x1c89b4: 0x25085580  addiu       $t0, $t0, 0x5580
    ctx->pc = 0x1c89b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21888));
label_1c89b8:
    // 0x1c89b8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1c89b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c89bc:
    // 0x1c89bc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c89bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c89c0:
    // 0x1c89c0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c89c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c89c4:
    // 0x1c89c4: 0x24090033  addiu       $t1, $zero, 0x33
    ctx->pc = 0x1c89c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1c89c8:
    // 0x1c89c8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c89cc:
    // 0x1c89cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c89ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c89d0:
    // 0x1c89d0: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1c89d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1c89d4:
    // 0x1c89d4: 0x40f809  jalr        $v0
label_1c89d8:
    if (ctx->pc == 0x1C89D8u) {
        ctx->pc = 0x1C89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89D4u;
        // 0x1c89d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C89DCu;
        goto label_1c89dc;
    }
    ctx->pc = 0x1C89D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C89DCu);
        ctx->pc = 0x1C89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89D4u;
        // 0x1c89d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C89D4u, 0x1C89DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C89DCu;
label_1c89dc:
    // 0x1c89dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c89dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c89e0:
    // 0x1c89e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c89e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c89e4:
    // 0x1c89e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1c89e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1c89e8:
    // 0x1c89e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c89e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1c89ec:
    // 0x1c89ec: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c89ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1c89f0:
    // 0x1c89f0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1c89f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1c89f4:
    // 0x1c89f4: 0xae300548  sw          $s0, 0x548($s1)
    ctx->pc = 0x1c89f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1352), GPR_U32(ctx, 16));
label_1c89f8:
    // 0x1c89f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c89f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c89fc:
    // 0x1c89fc: 0x26270440  addiu       $a3, $s1, 0x440
    ctx->pc = 0x1c89fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
label_1c8a00:
    // 0x1c8a00: 0x8e260548  lw          $a2, 0x548($s1)
    ctx->pc = 0x1c8a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1352)));
label_1c8a04:
    // 0x1c8a04: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x1c8a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1c8a08:
    // 0x1c8a08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1c8a0c:
    // 0x1c8a0c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c8a10:
    // 0x1c8a10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c8a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c8a14:
    // 0x1c8a14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c8a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c8a18:
    // 0x1c8a18: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1c8a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_1c8a1c:
    // 0x1c8a1c: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x1c8a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
label_1c8a20:
    // 0x1c8a20: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1c8a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1c8a24:
    // 0x1c8a24: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x1c8a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1c8a28:
    // 0x1c8a28: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1c8a2c:
    if (ctx->pc == 0x1C8A2Cu) {
        ctx->pc = 0x1C8A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A28u;
        // 0x1c8a2c: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A30u;
        goto label_1c8a30;
    }
    ctx->pc = 0x1C8A28u;
    {
        const bool branch_taken_0x1c8a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a28) {
            ctx->pc = 0x1C8A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8A28u;
            // 0x1c8a2c: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8A48u;
            goto label_1c8a48;
        }
    }
    ctx->pc = 0x1C8A30u;
label_1c8a30:
    // 0x1c8a30: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1c8a30u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1c8a34:
    // 0x1c8a34: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_1c8a38:
    if (ctx->pc == 0x1C8A38u) {
        ctx->pc = 0x1C8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A34u;
        // 0x1c8a38: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A3Cu;
        goto label_1c8a3c;
    }
    ctx->pc = 0x1C8A34u;
    {
        const bool branch_taken_0x1c8a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a34) {
            ctx->pc = 0x1C8A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8A34u;
            // 0x1c8a38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8A3Cu;
            goto label_1c8a3c;
        }
    }
    ctx->pc = 0x1C8A3Cu;
label_1c8a3c:
    // 0x1c8a3c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c8a3cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1c8a40:
    // 0x1c8a40: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x1c8a40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_1c8a44:
    // 0x1c8a44: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1c8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c8a48:
    // 0x1c8a48: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c8a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1c8a4c:
    // 0x1c8a4c: 0x24e70034  addiu       $a3, $a3, 0x34
    ctx->pc = 0x1c8a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 52));
label_1c8a50:
    // 0x1c8a50: 0x2d030005  sltiu       $v1, $t0, 0x5
    ctx->pc = 0x1c8a50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1c8a54:
    // 0x1c8a54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c8a58:
    // 0x1c8a58: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_1c8a5c:
    if (ctx->pc == 0x1C8A5Cu) {
        ctx->pc = 0x1C8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A58u;
        // 0x1c8a5c: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A60u;
        goto label_1c8a60;
    }
    ctx->pc = 0x1C8A58u;
    {
        const bool branch_taken_0x1c8a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A58u;
        // 0x1c8a5c: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a58) {
            ctx->pc = 0x1C8A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8a00;
        }
    }
    ctx->pc = 0x1C8A60u;
label_1c8a60:
    // 0x1c8a60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c8a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c8a64:
    // 0x1c8a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c8a68:
    // 0x1c8a68: 0xc079bd4  jal         func_1E6F50
label_1c8a6c:
    if (ctx->pc == 0x1C8A6Cu) {
        ctx->pc = 0x1C8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A68u;
        // 0x1c8a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8A70u;
        goto label_1c8a70;
    }
    ctx->pc = 0x1C8A68u;
    SET_GPR_U32(ctx, 31, 0x1C8A70u);
    ctx->pc = 0x1C8A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A68u;
    // 0x1c8a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6F50u, 0x1C8A68u, 0x1C8A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A70u;
label_1c8a70:
    // 0x1c8a70: 0xae20057c  sw          $zero, 0x57C($s1)
    ctx->pc = 0x1c8a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1404), GPR_U32(ctx, 0));
label_1c8a74:
    // 0x1c8a74: 0xae200570  sw          $zero, 0x570($s1)
    ctx->pc = 0x1c8a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 0));
label_1c8a78:
    // 0x1c8a78: 0xae200574  sw          $zero, 0x574($s1)
    ctx->pc = 0x1c8a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1396), GPR_U32(ctx, 0));
label_1c8a7c:
    // 0x1c8a7c: 0xae200578  sw          $zero, 0x578($s1)
    ctx->pc = 0x1c8a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1400), GPR_U32(ctx, 0));
label_1c8a80:
    // 0x1c8a80: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1c8a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c8a84:
    // 0x1c8a84: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1c8a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c8a88:
    // 0x1c8a88: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1c8a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c8a8c:
    // 0x1c8a8c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c8a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c8a90:
    // 0x1c8a90: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1c8a90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c8a94:
    // 0x1c8a94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c8a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8a98:
    // 0x1c8a98: 0x3e00008  jr          $ra
label_1c8a9c:
    if (ctx->pc == 0x1C8A9Cu) {
        ctx->pc = 0x1C8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A98u;
        // 0x1c8a9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8AA0u;
        goto label_fallthrough_0x1c8a98;
    }
    ctx->pc = 0x1C8A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A98u;
        // 0x1c8a9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c8a98:
    ctx->pc = 0x1C8AA0u;
}
