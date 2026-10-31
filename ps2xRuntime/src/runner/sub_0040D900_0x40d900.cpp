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

// Function: sub_0040D900
// Address: 0x40d900 - 0x40db88
void sub_0040D900_0x40d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D900_0x40d900");
#endif

    switch (ctx->pc) {
        case 0x40d900u: goto label_40d900;
        case 0x40d904u: goto label_40d904;
        case 0x40d908u: goto label_40d908;
        case 0x40d90cu: goto label_40d90c;
        case 0x40d910u: goto label_40d910;
        case 0x40d914u: goto label_40d914;
        case 0x40d918u: goto label_40d918;
        case 0x40d91cu: goto label_40d91c;
        case 0x40d920u: goto label_40d920;
        case 0x40d924u: goto label_40d924;
        case 0x40d928u: goto label_40d928;
        case 0x40d92cu: goto label_40d92c;
        case 0x40d930u: goto label_40d930;
        case 0x40d934u: goto label_40d934;
        case 0x40d938u: goto label_40d938;
        case 0x40d93cu: goto label_40d93c;
        case 0x40d940u: goto label_40d940;
        case 0x40d944u: goto label_40d944;
        case 0x40d948u: goto label_40d948;
        case 0x40d94cu: goto label_40d94c;
        case 0x40d950u: goto label_40d950;
        case 0x40d954u: goto label_40d954;
        case 0x40d958u: goto label_40d958;
        case 0x40d95cu: goto label_40d95c;
        case 0x40d960u: goto label_40d960;
        case 0x40d964u: goto label_40d964;
        case 0x40d968u: goto label_40d968;
        case 0x40d96cu: goto label_40d96c;
        case 0x40d970u: goto label_40d970;
        case 0x40d974u: goto label_40d974;
        case 0x40d978u: goto label_40d978;
        case 0x40d97cu: goto label_40d97c;
        case 0x40d980u: goto label_40d980;
        case 0x40d984u: goto label_40d984;
        case 0x40d988u: goto label_40d988;
        case 0x40d98cu: goto label_40d98c;
        case 0x40d990u: goto label_40d990;
        case 0x40d994u: goto label_40d994;
        case 0x40d998u: goto label_40d998;
        case 0x40d99cu: goto label_40d99c;
        case 0x40d9a0u: goto label_40d9a0;
        case 0x40d9a4u: goto label_40d9a4;
        case 0x40d9a8u: goto label_40d9a8;
        case 0x40d9acu: goto label_40d9ac;
        case 0x40d9b0u: goto label_40d9b0;
        case 0x40d9b4u: goto label_40d9b4;
        case 0x40d9b8u: goto label_40d9b8;
        case 0x40d9bcu: goto label_40d9bc;
        case 0x40d9c0u: goto label_40d9c0;
        case 0x40d9c4u: goto label_40d9c4;
        case 0x40d9c8u: goto label_40d9c8;
        case 0x40d9ccu: goto label_40d9cc;
        case 0x40d9d0u: goto label_40d9d0;
        case 0x40d9d4u: goto label_40d9d4;
        case 0x40d9d8u: goto label_40d9d8;
        case 0x40d9dcu: goto label_40d9dc;
        case 0x40d9e0u: goto label_40d9e0;
        case 0x40d9e4u: goto label_40d9e4;
        case 0x40d9e8u: goto label_40d9e8;
        case 0x40d9ecu: goto label_40d9ec;
        case 0x40d9f0u: goto label_40d9f0;
        case 0x40d9f4u: goto label_40d9f4;
        case 0x40d9f8u: goto label_40d9f8;
        case 0x40d9fcu: goto label_40d9fc;
        case 0x40da00u: goto label_40da00;
        case 0x40da04u: goto label_40da04;
        case 0x40da08u: goto label_40da08;
        case 0x40da0cu: goto label_40da0c;
        case 0x40da10u: goto label_40da10;
        case 0x40da14u: goto label_40da14;
        case 0x40da18u: goto label_40da18;
        case 0x40da1cu: goto label_40da1c;
        case 0x40da20u: goto label_40da20;
        case 0x40da24u: goto label_40da24;
        case 0x40da28u: goto label_40da28;
        case 0x40da2cu: goto label_40da2c;
        case 0x40da30u: goto label_40da30;
        case 0x40da34u: goto label_40da34;
        case 0x40da38u: goto label_40da38;
        case 0x40da3cu: goto label_40da3c;
        case 0x40da40u: goto label_40da40;
        case 0x40da44u: goto label_40da44;
        case 0x40da48u: goto label_40da48;
        case 0x40da4cu: goto label_40da4c;
        case 0x40da50u: goto label_40da50;
        case 0x40da54u: goto label_40da54;
        case 0x40da58u: goto label_40da58;
        case 0x40da5cu: goto label_40da5c;
        case 0x40da60u: goto label_40da60;
        case 0x40da64u: goto label_40da64;
        case 0x40da68u: goto label_40da68;
        case 0x40da6cu: goto label_40da6c;
        case 0x40da70u: goto label_40da70;
        case 0x40da74u: goto label_40da74;
        case 0x40da78u: goto label_40da78;
        case 0x40da7cu: goto label_40da7c;
        case 0x40da80u: goto label_40da80;
        case 0x40da84u: goto label_40da84;
        case 0x40da88u: goto label_40da88;
        case 0x40da8cu: goto label_40da8c;
        case 0x40da90u: goto label_40da90;
        case 0x40da94u: goto label_40da94;
        case 0x40da98u: goto label_40da98;
        case 0x40da9cu: goto label_40da9c;
        case 0x40daa0u: goto label_40daa0;
        case 0x40daa4u: goto label_40daa4;
        case 0x40daa8u: goto label_40daa8;
        case 0x40daacu: goto label_40daac;
        case 0x40dab0u: goto label_40dab0;
        case 0x40dab4u: goto label_40dab4;
        case 0x40dab8u: goto label_40dab8;
        case 0x40dabcu: goto label_40dabc;
        case 0x40dac0u: goto label_40dac0;
        case 0x40dac4u: goto label_40dac4;
        case 0x40dac8u: goto label_40dac8;
        case 0x40daccu: goto label_40dacc;
        case 0x40dad0u: goto label_40dad0;
        case 0x40dad4u: goto label_40dad4;
        case 0x40dad8u: goto label_40dad8;
        case 0x40dadcu: goto label_40dadc;
        case 0x40dae0u: goto label_40dae0;
        case 0x40dae4u: goto label_40dae4;
        case 0x40dae8u: goto label_40dae8;
        case 0x40daecu: goto label_40daec;
        case 0x40daf0u: goto label_40daf0;
        case 0x40daf4u: goto label_40daf4;
        case 0x40daf8u: goto label_40daf8;
        case 0x40dafcu: goto label_40dafc;
        case 0x40db00u: goto label_40db00;
        case 0x40db04u: goto label_40db04;
        case 0x40db08u: goto label_40db08;
        case 0x40db0cu: goto label_40db0c;
        case 0x40db10u: goto label_40db10;
        case 0x40db14u: goto label_40db14;
        case 0x40db18u: goto label_40db18;
        case 0x40db1cu: goto label_40db1c;
        case 0x40db20u: goto label_40db20;
        case 0x40db24u: goto label_40db24;
        case 0x40db28u: goto label_40db28;
        case 0x40db2cu: goto label_40db2c;
        case 0x40db30u: goto label_40db30;
        case 0x40db34u: goto label_40db34;
        case 0x40db38u: goto label_40db38;
        case 0x40db3cu: goto label_40db3c;
        case 0x40db40u: goto label_40db40;
        case 0x40db44u: goto label_40db44;
        case 0x40db48u: goto label_40db48;
        case 0x40db4cu: goto label_40db4c;
        case 0x40db50u: goto label_40db50;
        case 0x40db54u: goto label_40db54;
        case 0x40db58u: goto label_40db58;
        case 0x40db5cu: goto label_40db5c;
        case 0x40db60u: goto label_40db60;
        case 0x40db64u: goto label_40db64;
        case 0x40db68u: goto label_40db68;
        case 0x40db6cu: goto label_40db6c;
        case 0x40db70u: goto label_40db70;
        case 0x40db74u: goto label_40db74;
        case 0x40db78u: goto label_40db78;
        case 0x40db7cu: goto label_40db7c;
        case 0x40db80u: goto label_40db80;
        case 0x40db84u: goto label_40db84;
        default: break;
    }

    ctx->pc = 0x40d900u;

label_40d900:
    // 0x40d900: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x40d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_40d904:
    // 0x40d904: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40d904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d908:
    // 0x40d908: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x40d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_40d90c:
    // 0x40d90c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40d90cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40d910:
    // 0x40d910: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x40d910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_40d914:
    // 0x40d914: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x40d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_40d918:
    // 0x40d918: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x40d918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_40d91c:
    // 0x40d91c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x40d91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_40d920:
    // 0x40d920: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x40d920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_40d924:
    // 0x40d924: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x40d924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_40d928:
    // 0x40d928: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x40d928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_40d92c:
    // 0x40d92c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x40d92cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_40d930:
    // 0x40d930: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x40d930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_40d934:
    // 0x40d934: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x40d934u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_40d938:
    // 0x40d938: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40d938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40d93c:
    // 0x40d93c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x40d93cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_40d940:
    // 0x40d940: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x40d940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_40d944:
    // 0x40d944: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x40d944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_40d948:
    // 0x40d948: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x40d948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_40d94c:
    // 0x40d94c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x40d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_40d950:
    // 0x40d950: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x40d950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_40d954:
    // 0x40d954: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x40d954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_40d958:
    // 0x40d958: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x40d958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_40d95c:
    // 0x40d95c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x40d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_40d960:
    // 0x40d960: 0xc13d348  jal         func_4F4D20
label_40d964:
    if (ctx->pc == 0x40D964u) {
        ctx->pc = 0x40D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D960u;
        // 0x40d964: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D968u;
        goto label_40d968;
    }
    ctx->pc = 0x40D960u;
    SET_GPR_U32(ctx, 31, 0x40D968u);
    ctx->pc = 0x40D964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D960u;
    // 0x40d964: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4D20u, 0x40D960u, 0x40D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D968u;
label_40d968:
    // 0x40d968: 0x8ea4b788  lw          $a0, -0x4878($s5)
    ctx->pc = 0x40d968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948744)));
label_40d96c:
    // 0x40d96c: 0x2642004c  addiu       $v0, $s2, 0x4C
    ctx->pc = 0x40d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_40d970:
    // 0x40d970: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x40d970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_40d974:
    // 0x40d974: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x40d974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_40d978:
    // 0x40d978: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x40d978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_40d97c:
    // 0x40d97c: 0x24768ae0  addiu       $s6, $v1, -0x7520
    ctx->pc = 0x40d97cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937312));
label_40d980:
    // 0x40d980: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x40d980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_40d984:
    // 0x40d984: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x40d984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_40d988:
    // 0x40d988: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x40d988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_40d98c:
    // 0x40d98c: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x40d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_40d990:
    // 0x40d990: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x40d990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_40d994:
    // 0x40d994: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x40d994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_40d998:
    // 0x40d998: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x40d998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_40d99c:
    // 0x40d99c: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x40d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_40d9a0:
    // 0x40d9a0: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x40d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_40d9a4:
    // 0x40d9a4: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x40d9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_40d9a8:
    // 0x40d9a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x40d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40d9ac:
    // 0x40d9ac: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x40d9acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_40d9b0:
    // 0x40d9b0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x40d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_40d9b4:
    // 0x40d9b4: 0x40f809  jalr        $v0
label_40d9b8:
    if (ctx->pc == 0x40D9B8u) {
        ctx->pc = 0x40D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D9B4u;
        // 0x40d9b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D9BCu;
        goto label_40d9bc;
    }
    ctx->pc = 0x40D9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D9BCu);
        ctx->pc = 0x40D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D9B4u;
        // 0x40d9b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D9B4u, 0x40D9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D9BCu;
label_40d9bc:
    // 0x40d9bc: 0x8e8727e4  lw          $a3, 0x27E4($s4)
    ctx->pc = 0x40d9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_40d9c0:
    // 0x40d9c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40d9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40d9c4:
    // 0x40d9c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40d9c8:
    // 0x40d9c8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40d9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40d9cc:
    // 0x40d9cc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x40d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_40d9d0:
    // 0x40d9d0: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x40d9d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_40d9d4:
    // 0x40d9d4: 0x8c53b9c8  lw          $s3, -0x4638($v0)
    ctx->pc = 0x40d9d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949320)));
label_40d9d8:
    // 0x40d9d8: 0x24a58910  addiu       $a1, $a1, -0x76F0
    ctx->pc = 0x40d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
label_40d9dc:
    // 0x40d9dc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x40d9dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_40d9e0:
    // 0x40d9e0: 0x25088a88  addiu       $t0, $t0, -0x7578
    ctx->pc = 0x40d9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937224));
label_40d9e4:
    // 0x40d9e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x40d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_40d9e8:
    // 0x40d9e8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x40d9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_40d9ec:
    // 0x40d9ec: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x40d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_40d9f0:
    // 0x40d9f0: 0x240900b3  addiu       $t1, $zero, 0xB3
    ctx->pc = 0x40d9f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_40d9f4:
    // 0x40d9f4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x40d9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40d9f8:
    // 0x40d9f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x40d9f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d9fc:
    // 0x40d9fc: 0x40f809  jalr        $v0
label_40da00:
    if (ctx->pc == 0x40DA00u) {
        ctx->pc = 0x40DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D9FCu;
        // 0x40da00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DA04u;
        goto label_40da04;
    }
    ctx->pc = 0x40D9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DA04u);
        ctx->pc = 0x40DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D9FCu;
        // 0x40da00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D9FCu, 0x40DA04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DA04u;
label_40da04:
    // 0x40da04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40da04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40da08:
    // 0x40da08: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_40da0c:
    if (ctx->pc == 0x40DA0Cu) {
        ctx->pc = 0x40DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA08u;
        // 0x40da0c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DA10u;
        goto label_40da10;
    }
    ctx->pc = 0x40DA08u;
    {
        const bool branch_taken_0x40da08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA08u;
        // 0x40da0c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40da08) {
            ctx->pc = 0x40DA18u;
            goto label_40da18;
        }
    }
    ctx->pc = 0x40DA10u;
label_40da10:
    // 0x40da10: 0x24424370  addiu       $v0, $v0, 0x4370
    ctx->pc = 0x40da10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17264));
label_40da14:
    // 0x40da14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x40da14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_40da18:
    // 0x40da18: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x40da18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_40da1c:
    // 0x40da1c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x40da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_40da20:
    // 0x40da20: 0x2263018  mult        $a2, $s1, $a2
    ctx->pc = 0x40da20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_40da24:
    // 0x40da24: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x40da24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
label_40da28:
    // 0x40da28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40da28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40da2c:
    // 0x40da2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40da2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40da30:
    // 0x40da30: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_40da34:
    if (ctx->pc == 0x40DA34u) {
        ctx->pc = 0x40DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA30u;
        // 0x40da34: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DA38u;
        goto label_40da38;
    }
    ctx->pc = 0x40DA30u;
    {
        const bool branch_taken_0x40da30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40da30) {
            ctx->pc = 0x40DA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40DA30u;
            // 0x40da34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x40DA38u;
            goto label_40da38;
        }
    }
    ctx->pc = 0x40DA38u;
label_40da38:
    // 0x40da38: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x40da38u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_40da3c:
    // 0x40da3c: 0x3012  mflo        $a2
    ctx->pc = 0x40da3cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_40da40:
    // 0x40da40: 0xc0ce108  jal         func_338420
label_40da44:
    if (ctx->pc == 0x40DA44u) {
        ctx->pc = 0x40DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA40u;
        // 0x40da44: 0x24e78af0  addiu       $a3, $a3, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DA48u;
        goto label_40da48;
    }
    ctx->pc = 0x40DA40u;
    SET_GPR_U32(ctx, 31, 0x40DA48u);
    ctx->pc = 0x40DA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DA40u;
    // 0x40da44: 0x24e78af0  addiu       $a3, $a3, -0x7510 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338420u, 0x40DA40u, 0x40DA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DA48u;
label_40da48:
    // 0x40da48: 0x8e8827e4  lw          $t0, 0x27E4($s4)
    ctx->pc = 0x40da48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_40da4c:
    // 0x40da4c: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40da4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_40da50:
    // 0x40da50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40da50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40da54:
    // 0x40da54: 0x24c68b00  addiu       $a2, $a2, -0x7500
    ctx->pc = 0x40da54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937344));
label_40da58:
    // 0x40da58: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x40da58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_40da5c:
    // 0x40da5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40da5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40da60:
    // 0x40da60: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x40da60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_40da64:
    // 0x40da64: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x40da64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_40da68:
    // 0x40da68: 0x40f809  jalr        $v0
label_40da6c:
    if (ctx->pc == 0x40DA6Cu) {
        ctx->pc = 0x40DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA68u;
        // 0x40da6c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DA70u;
        goto label_40da70;
    }
    ctx->pc = 0x40DA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DA70u);
        ctx->pc = 0x40DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA68u;
        // 0x40da6c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DA68u, 0x40DA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DA70u;
label_40da70:
    // 0x40da70: 0x8e8827e4  lw          $t0, 0x27E4($s4)
    ctx->pc = 0x40da70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_40da74:
    // 0x40da74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x40da74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40da78:
    // 0x40da78: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x40da78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_40da7c:
    // 0x40da7c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40da7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40da80:
    // 0x40da80: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x40da80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40da84:
    // 0x40da84: 0x24a58b10  addiu       $a1, $a1, -0x74F0
    ctx->pc = 0x40da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937360));
label_40da88:
    // 0x40da88: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x40da88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_40da8c:
    // 0x40da8c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x40da8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_40da90:
    // 0x40da90: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x40da90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_40da94:
    // 0x40da94: 0x40f809  jalr        $v0
label_40da98:
    if (ctx->pc == 0x40DA98u) {
        ctx->pc = 0x40DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA94u;
        // 0x40da98: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DA9Cu;
        goto label_40da9c;
    }
    ctx->pc = 0x40DA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DA9Cu);
        ctx->pc = 0x40DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA94u;
        // 0x40da98: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DA94u, 0x40DA9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DA9Cu;
label_40da9c:
    // 0x40da9c: 0x8ea4b788  lw          $a0, -0x4878($s5)
    ctx->pc = 0x40da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948744)));
label_40daa0:
    // 0x40daa0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x40daa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_40daa4:
    // 0x40daa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40daa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40daa8:
    // 0x40daa8: 0x8c870090  lw          $a3, 0x90($a0)
    ctx->pc = 0x40daa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_40daac:
    // 0x40daac: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x40daacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_40dab0:
    // 0x40dab0: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40dab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40dab4:
    // 0x40dab4: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40dab8:
    // 0x40dab8: 0x40f809  jalr        $v0
label_40dabc:
    if (ctx->pc == 0x40DABCu) {
        ctx->pc = 0x40DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DAB8u;
        // 0x40dabc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DAC0u;
        goto label_40dac0;
    }
    ctx->pc = 0x40DAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40DAC0u);
        ctx->pc = 0x40DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DAB8u;
        // 0x40dabc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DAB8u, 0x40DAC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DAC0u;
label_40dac0:
    // 0x40dac0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40dac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40dac4:
    // 0x40dac4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x40dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_40dac8:
    // 0x40dac8: 0x8c625340  lw          $v0, 0x5340($v1)
    ctx->pc = 0x40dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21312)));
label_40dacc:
    // 0x40dacc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x40daccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_40dad0:
    // 0x40dad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40dad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40dad4:
    // 0x40dad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40dad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40dad8:
    // 0x40dad8: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x40dad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_40dadc:
    // 0x40dadc: 0xc055130  jal         func_1544C0
label_40dae0:
    if (ctx->pc == 0x40DAE0u) {
        ctx->pc = 0x40DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DADCu;
        // 0x40dae0: 0x8c46003c  lw          $a2, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DAE4u;
        goto label_40dae4;
    }
    ctx->pc = 0x40DADCu;
    SET_GPR_U32(ctx, 31, 0x40DAE4u);
    ctx->pc = 0x40DAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DADCu;
    // 0x40dae0: 0x8c46003c  lw          $a2, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1544C0u, 0x40DADCu, 0x40DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DAE4u;
label_40dae4:
    // 0x40dae4: 0x8e8627e4  lw          $a2, 0x27E4($s4)
    ctx->pc = 0x40dae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_40dae8:
    // 0x40dae8: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x40dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_40daec:
    // 0x40daec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40daf0:
    // 0x40daf0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x40daf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_40daf4:
    // 0x40daf4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x40daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_40daf8:
    // 0x40daf8: 0x60f809  jalr        $v1
label_40dafc:
    if (ctx->pc == 0x40DAFCu) {
        ctx->pc = 0x40DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DAF8u;
        // 0x40dafc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DB00u;
        goto label_40db00;
    }
    ctx->pc = 0x40DAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40DB00u);
        ctx->pc = 0x40DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DAF8u;
        // 0x40dafc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DAF8u, 0x40DB00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DB00u;
label_40db00:
    // 0x40db00: 0xc051060  jal         func_144180
label_40db04:
    if (ctx->pc == 0x40DB04u) {
        ctx->pc = 0x40DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DB00u;
        // 0x40db04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DB08u;
        goto label_40db08;
    }
    ctx->pc = 0x40DB00u;
    SET_GPR_U32(ctx, 31, 0x40DB08u);
    ctx->pc = 0x40DB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DB00u;
    // 0x40db04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144180u, 0x40DB00u, 0x40DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DB08u;
label_40db08:
    // 0x40db08: 0x8e8627e4  lw          $a2, 0x27E4($s4)
    ctx->pc = 0x40db08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_40db0c:
    // 0x40db0c: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x40db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_40db10:
    // 0x40db10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40db10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40db14:
    // 0x40db14: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x40db14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_40db18:
    // 0x40db18: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x40db18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_40db1c:
    // 0x40db1c: 0x60f809  jalr        $v1
label_40db20:
    if (ctx->pc == 0x40DB20u) {
        ctx->pc = 0x40DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DB1Cu;
        // 0x40db20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DB24u;
        goto label_40db24;
    }
    ctx->pc = 0x40DB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40DB24u);
        ctx->pc = 0x40DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DB1Cu;
        // 0x40db20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DB1Cu, 0x40DB24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DB24u;
label_40db24:
    // 0x40db24: 0xc0551c6  jal         func_154718
label_40db28:
    if (ctx->pc == 0x40DB28u) {
        ctx->pc = 0x40DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DB24u;
        // 0x40db28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DB2Cu;
        goto label_40db2c;
    }
    ctx->pc = 0x40DB24u;
    SET_GPR_U32(ctx, 31, 0x40DB2Cu);
    ctx->pc = 0x40DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DB24u;
    // 0x40db28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154718u, 0x40DB24u, 0x40DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DB2Cu;
label_40db2c:
    // 0x40db2c: 0x8ea3b788  lw          $v1, -0x4878($s5)
    ctx->pc = 0x40db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948744)));
label_40db30:
    // 0x40db30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40db30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40db34:
    // 0x40db34: 0x8c660090  lw          $a2, 0x90($v1)
    ctx->pc = 0x40db34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_40db38:
    // 0x40db38: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40db3c:
    // 0x40db3c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x40db3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_40db40:
    // 0x40db40: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x40db40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_40db44:
    // 0x40db44: 0x60f809  jalr        $v1
label_40db48:
    if (ctx->pc == 0x40DB48u) {
        ctx->pc = 0x40DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DB44u;
        // 0x40db48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DB4Cu;
        goto label_40db4c;
    }
    ctx->pc = 0x40DB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40DB4Cu);
        ctx->pc = 0x40DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DB44u;
        // 0x40db48: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DB44u, 0x40DB4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40DB4Cu;
label_40db4c:
    // 0x40db4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40db4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40db50:
    // 0x40db50: 0xc055168  jal         func_1545A0
label_40db54:
    if (ctx->pc == 0x40DB54u) {
        ctx->pc = 0x40DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DB50u;
        // 0x40db54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DB58u;
        goto label_40db58;
    }
    ctx->pc = 0x40DB50u;
    SET_GPR_U32(ctx, 31, 0x40DB58u);
    ctx->pc = 0x40DB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40DB50u;
    // 0x40db54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1545A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1545A0u, 0x40DB50u, 0x40DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40DB58u;
label_40db58:
    // 0x40db58: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x40db58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40db5c:
    // 0x40db5c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x40db5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_40db60:
    // 0x40db60: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x40db60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_40db64:
    // 0x40db64: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x40db64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_40db68:
    // 0x40db68: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x40db68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_40db6c:
    // 0x40db6c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x40db6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_40db70:
    // 0x40db70: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x40db70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40db74:
    // 0x40db74: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x40db74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40db78:
    // 0x40db78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40db78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40db7c:
    // 0x40db7c: 0x3e00008  jr          $ra
label_40db80:
    if (ctx->pc == 0x40DB80u) {
        ctx->pc = 0x40DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DB7Cu;
        // 0x40db80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DB84u;
        goto label_40db84;
    }
    ctx->pc = 0x40DB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DB7Cu;
        // 0x40db80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40DB84u;
label_40db84:
    // 0x40db84: 0x0  nop
    ctx->pc = 0x40db84u;
    // NOP
    ctx->pc = 0x40db88u;
}
