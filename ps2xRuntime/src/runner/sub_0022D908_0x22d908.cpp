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

// Function: sub_0022D908
// Address: 0x22d908 - 0x22dc40
void sub_0022D908_0x22d908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D908_0x22d908");
#endif

    switch (ctx->pc) {
        case 0x22d908u: goto label_22d908;
        case 0x22d90cu: goto label_22d90c;
        case 0x22d910u: goto label_22d910;
        case 0x22d914u: goto label_22d914;
        case 0x22d918u: goto label_22d918;
        case 0x22d91cu: goto label_22d91c;
        case 0x22d920u: goto label_22d920;
        case 0x22d924u: goto label_22d924;
        case 0x22d928u: goto label_22d928;
        case 0x22d92cu: goto label_22d92c;
        case 0x22d930u: goto label_22d930;
        case 0x22d934u: goto label_22d934;
        case 0x22d938u: goto label_22d938;
        case 0x22d93cu: goto label_22d93c;
        case 0x22d940u: goto label_22d940;
        case 0x22d944u: goto label_22d944;
        case 0x22d948u: goto label_22d948;
        case 0x22d94cu: goto label_22d94c;
        case 0x22d950u: goto label_22d950;
        case 0x22d954u: goto label_22d954;
        case 0x22d958u: goto label_22d958;
        case 0x22d95cu: goto label_22d95c;
        case 0x22d960u: goto label_22d960;
        case 0x22d964u: goto label_22d964;
        case 0x22d968u: goto label_22d968;
        case 0x22d96cu: goto label_22d96c;
        case 0x22d970u: goto label_22d970;
        case 0x22d974u: goto label_22d974;
        case 0x22d978u: goto label_22d978;
        case 0x22d97cu: goto label_22d97c;
        case 0x22d980u: goto label_22d980;
        case 0x22d984u: goto label_22d984;
        case 0x22d988u: goto label_22d988;
        case 0x22d98cu: goto label_22d98c;
        case 0x22d990u: goto label_22d990;
        case 0x22d994u: goto label_22d994;
        case 0x22d998u: goto label_22d998;
        case 0x22d99cu: goto label_22d99c;
        case 0x22d9a0u: goto label_22d9a0;
        case 0x22d9a4u: goto label_22d9a4;
        case 0x22d9a8u: goto label_22d9a8;
        case 0x22d9acu: goto label_22d9ac;
        case 0x22d9b0u: goto label_22d9b0;
        case 0x22d9b4u: goto label_22d9b4;
        case 0x22d9b8u: goto label_22d9b8;
        case 0x22d9bcu: goto label_22d9bc;
        case 0x22d9c0u: goto label_22d9c0;
        case 0x22d9c4u: goto label_22d9c4;
        case 0x22d9c8u: goto label_22d9c8;
        case 0x22d9ccu: goto label_22d9cc;
        case 0x22d9d0u: goto label_22d9d0;
        case 0x22d9d4u: goto label_22d9d4;
        case 0x22d9d8u: goto label_22d9d8;
        case 0x22d9dcu: goto label_22d9dc;
        case 0x22d9e0u: goto label_22d9e0;
        case 0x22d9e4u: goto label_22d9e4;
        case 0x22d9e8u: goto label_22d9e8;
        case 0x22d9ecu: goto label_22d9ec;
        case 0x22d9f0u: goto label_22d9f0;
        case 0x22d9f4u: goto label_22d9f4;
        case 0x22d9f8u: goto label_22d9f8;
        case 0x22d9fcu: goto label_22d9fc;
        case 0x22da00u: goto label_22da00;
        case 0x22da04u: goto label_22da04;
        case 0x22da08u: goto label_22da08;
        case 0x22da0cu: goto label_22da0c;
        case 0x22da10u: goto label_22da10;
        case 0x22da14u: goto label_22da14;
        case 0x22da18u: goto label_22da18;
        case 0x22da1cu: goto label_22da1c;
        case 0x22da20u: goto label_22da20;
        case 0x22da24u: goto label_22da24;
        case 0x22da28u: goto label_22da28;
        case 0x22da2cu: goto label_22da2c;
        case 0x22da30u: goto label_22da30;
        case 0x22da34u: goto label_22da34;
        case 0x22da38u: goto label_22da38;
        case 0x22da3cu: goto label_22da3c;
        case 0x22da40u: goto label_22da40;
        case 0x22da44u: goto label_22da44;
        case 0x22da48u: goto label_22da48;
        case 0x22da4cu: goto label_22da4c;
        case 0x22da50u: goto label_22da50;
        case 0x22da54u: goto label_22da54;
        case 0x22da58u: goto label_22da58;
        case 0x22da5cu: goto label_22da5c;
        case 0x22da60u: goto label_22da60;
        case 0x22da64u: goto label_22da64;
        case 0x22da68u: goto label_22da68;
        case 0x22da6cu: goto label_22da6c;
        case 0x22da70u: goto label_22da70;
        case 0x22da74u: goto label_22da74;
        case 0x22da78u: goto label_22da78;
        case 0x22da7cu: goto label_22da7c;
        case 0x22da80u: goto label_22da80;
        case 0x22da84u: goto label_22da84;
        case 0x22da88u: goto label_22da88;
        case 0x22da8cu: goto label_22da8c;
        case 0x22da90u: goto label_22da90;
        case 0x22da94u: goto label_22da94;
        case 0x22da98u: goto label_22da98;
        case 0x22da9cu: goto label_22da9c;
        case 0x22daa0u: goto label_22daa0;
        case 0x22daa4u: goto label_22daa4;
        case 0x22daa8u: goto label_22daa8;
        case 0x22daacu: goto label_22daac;
        case 0x22dab0u: goto label_22dab0;
        case 0x22dab4u: goto label_22dab4;
        case 0x22dab8u: goto label_22dab8;
        case 0x22dabcu: goto label_22dabc;
        case 0x22dac0u: goto label_22dac0;
        case 0x22dac4u: goto label_22dac4;
        case 0x22dac8u: goto label_22dac8;
        case 0x22daccu: goto label_22dacc;
        case 0x22dad0u: goto label_22dad0;
        case 0x22dad4u: goto label_22dad4;
        case 0x22dad8u: goto label_22dad8;
        case 0x22dadcu: goto label_22dadc;
        case 0x22dae0u: goto label_22dae0;
        case 0x22dae4u: goto label_22dae4;
        case 0x22dae8u: goto label_22dae8;
        case 0x22daecu: goto label_22daec;
        case 0x22daf0u: goto label_22daf0;
        case 0x22daf4u: goto label_22daf4;
        case 0x22daf8u: goto label_22daf8;
        case 0x22dafcu: goto label_22dafc;
        case 0x22db00u: goto label_22db00;
        case 0x22db04u: goto label_22db04;
        case 0x22db08u: goto label_22db08;
        case 0x22db0cu: goto label_22db0c;
        case 0x22db10u: goto label_22db10;
        case 0x22db14u: goto label_22db14;
        case 0x22db18u: goto label_22db18;
        case 0x22db1cu: goto label_22db1c;
        case 0x22db20u: goto label_22db20;
        case 0x22db24u: goto label_22db24;
        case 0x22db28u: goto label_22db28;
        case 0x22db2cu: goto label_22db2c;
        case 0x22db30u: goto label_22db30;
        case 0x22db34u: goto label_22db34;
        case 0x22db38u: goto label_22db38;
        case 0x22db3cu: goto label_22db3c;
        case 0x22db40u: goto label_22db40;
        case 0x22db44u: goto label_22db44;
        case 0x22db48u: goto label_22db48;
        case 0x22db4cu: goto label_22db4c;
        case 0x22db50u: goto label_22db50;
        case 0x22db54u: goto label_22db54;
        case 0x22db58u: goto label_22db58;
        case 0x22db5cu: goto label_22db5c;
        case 0x22db60u: goto label_22db60;
        case 0x22db64u: goto label_22db64;
        case 0x22db68u: goto label_22db68;
        case 0x22db6cu: goto label_22db6c;
        case 0x22db70u: goto label_22db70;
        case 0x22db74u: goto label_22db74;
        case 0x22db78u: goto label_22db78;
        case 0x22db7cu: goto label_22db7c;
        case 0x22db80u: goto label_22db80;
        case 0x22db84u: goto label_22db84;
        case 0x22db88u: goto label_22db88;
        case 0x22db8cu: goto label_22db8c;
        case 0x22db90u: goto label_22db90;
        case 0x22db94u: goto label_22db94;
        case 0x22db98u: goto label_22db98;
        case 0x22db9cu: goto label_22db9c;
        case 0x22dba0u: goto label_22dba0;
        case 0x22dba4u: goto label_22dba4;
        case 0x22dba8u: goto label_22dba8;
        case 0x22dbacu: goto label_22dbac;
        case 0x22dbb0u: goto label_22dbb0;
        case 0x22dbb4u: goto label_22dbb4;
        case 0x22dbb8u: goto label_22dbb8;
        case 0x22dbbcu: goto label_22dbbc;
        case 0x22dbc0u: goto label_22dbc0;
        case 0x22dbc4u: goto label_22dbc4;
        case 0x22dbc8u: goto label_22dbc8;
        case 0x22dbccu: goto label_22dbcc;
        case 0x22dbd0u: goto label_22dbd0;
        case 0x22dbd4u: goto label_22dbd4;
        case 0x22dbd8u: goto label_22dbd8;
        case 0x22dbdcu: goto label_22dbdc;
        case 0x22dbe0u: goto label_22dbe0;
        case 0x22dbe4u: goto label_22dbe4;
        case 0x22dbe8u: goto label_22dbe8;
        case 0x22dbecu: goto label_22dbec;
        case 0x22dbf0u: goto label_22dbf0;
        case 0x22dbf4u: goto label_22dbf4;
        case 0x22dbf8u: goto label_22dbf8;
        case 0x22dbfcu: goto label_22dbfc;
        case 0x22dc00u: goto label_22dc00;
        case 0x22dc04u: goto label_22dc04;
        case 0x22dc08u: goto label_22dc08;
        case 0x22dc0cu: goto label_22dc0c;
        case 0x22dc10u: goto label_22dc10;
        case 0x22dc14u: goto label_22dc14;
        case 0x22dc18u: goto label_22dc18;
        case 0x22dc1cu: goto label_22dc1c;
        case 0x22dc20u: goto label_22dc20;
        case 0x22dc24u: goto label_22dc24;
        case 0x22dc28u: goto label_22dc28;
        case 0x22dc2cu: goto label_22dc2c;
        case 0x22dc30u: goto label_22dc30;
        case 0x22dc34u: goto label_22dc34;
        case 0x22dc38u: goto label_22dc38;
        case 0x22dc3cu: goto label_22dc3c;
        default: break;
    }

    ctx->pc = 0x22d908u;

label_22d908:
    // 0x22d908: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22d908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22d90c:
    // 0x22d90c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x22d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_22d910:
    // 0x22d910: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x22d910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_22d914:
    // 0x22d914: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22d914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d918:
    // 0x22d918: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x22d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_22d91c:
    // 0x22d91c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22d91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_22d920:
    // 0x22d920: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22d920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22d924:
    // 0x22d924: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x22d924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_22d928:
    // 0x22d928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22d92c:
    // 0x22d92c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x22d92cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_22d930:
    // 0x22d930: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22d930u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22d934:
    // 0x22d934: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
label_22d938:
    if (ctx->pc == 0x22D938u) {
        ctx->pc = 0x22D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D934u;
        // 0x22d938: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D93Cu;
        goto label_22d93c;
    }
    ctx->pc = 0x22D934u;
    {
        const bool branch_taken_0x22d934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D934u;
        // 0x22d938: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d934) {
            ctx->pc = 0x22DC1Cu;
            goto label_22dc1c;
        }
    }
    ctx->pc = 0x22D93Cu;
label_22d93c:
    // 0x22d93c: 0xc088ac6  jal         func_222B18
label_22d940:
    if (ctx->pc == 0x22D940u) {
        ctx->pc = 0x22D944u;
        goto label_22d944;
    }
    ctx->pc = 0x22D93Cu;
    SET_GPR_U32(ctx, 31, 0x22D944u);
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22D93Cu, 0x22D944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D944u;
label_22d944:
    // 0x22d944: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x22d944u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_22d948:
    // 0x22d948: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22d948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22d94c:
    // 0x22d94c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22d94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22d950:
    // 0x22d950: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22d950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22d954:
    // 0x22d954: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22d958:
    // 0x22d958: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22d958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22d95c:
    // 0x22d95c: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22d960:
    // 0x22d960: 0x60f809  jalr        $v1
label_22d964:
    if (ctx->pc == 0x22D964u) {
        ctx->pc = 0x22D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D960u;
        // 0x22d964: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D968u;
        goto label_22d968;
    }
    ctx->pc = 0x22D960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22D968u);
        ctx->pc = 0x22D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D960u;
        // 0x22d964: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D960u, 0x22D968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D968u;
label_22d968:
    // 0x22d968: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x22d968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_22d96c:
    // 0x22d96c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x22d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_22d970:
    // 0x22d970: 0xc06cece  jal         func_1B3B38
label_22d974:
    if (ctx->pc == 0x22D974u) {
        ctx->pc = 0x22D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D970u;
        // 0x22d974: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D978u;
        goto label_22d978;
    }
    ctx->pc = 0x22D970u;
    SET_GPR_U32(ctx, 31, 0x22D978u);
    ctx->pc = 0x22D974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D970u;
    // 0x22d974: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3B38u, 0x22D970u, 0x22D978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D978u;
label_22d978:
    // 0x22d978: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x22d978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_22d97c:
    // 0x22d97c: 0xc089988  jal         func_226620
label_22d980:
    if (ctx->pc == 0x22D980u) {
        ctx->pc = 0x22D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D97Cu;
        // 0x22d980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D984u;
        goto label_22d984;
    }
    ctx->pc = 0x22D97Cu;
    SET_GPR_U32(ctx, 31, 0x22D984u);
    ctx->pc = 0x22D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D97Cu;
    // 0x22d980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22D97Cu, 0x22D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D984u;
label_22d984:
    // 0x22d984: 0xc089c18  jal         func_227060
label_22d988:
    if (ctx->pc == 0x22D988u) {
        ctx->pc = 0x22D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D984u;
        // 0x22d988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D98Cu;
        goto label_22d98c;
    }
    ctx->pc = 0x22D984u;
    SET_GPR_U32(ctx, 31, 0x22D98Cu);
    ctx->pc = 0x22D988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D984u;
    // 0x22d988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x22D984u, 0x22D98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D98Cu;
label_22d98c:
    // 0x22d98c: 0xc0e57ce  jal         func_395F38
label_22d990:
    if (ctx->pc == 0x22D990u) {
        ctx->pc = 0x22D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D98Cu;
        // 0x22d990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D994u;
        goto label_22d994;
    }
    ctx->pc = 0x22D98Cu;
    SET_GPR_U32(ctx, 31, 0x22D994u);
    ctx->pc = 0x22D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D98Cu;
    // 0x22d990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x22D98Cu, 0x22D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D994u;
label_22d994:
    // 0x22d994: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22d994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d998:
    // 0x22d998: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_22d99c:
    if (ctx->pc == 0x22D99Cu) {
        ctx->pc = 0x22D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D998u;
        // 0x22d99c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D9A0u;
        goto label_22d9a0;
    }
    ctx->pc = 0x22D998u;
    {
        const bool branch_taken_0x22d998 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D998u;
        // 0x22d99c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d998) {
            ctx->pc = 0x22D9BCu;
            goto label_22d9bc;
        }
    }
    ctx->pc = 0x22D9A0u;
label_22d9a0:
    // 0x22d9a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22d9a4:
    // 0x22d9a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22d9a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22d9a8:
    // 0x22d9a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22d9ac:
    // 0x22d9ac: 0x40f809  jalr        $v0
label_22d9b0:
    if (ctx->pc == 0x22D9B0u) {
        ctx->pc = 0x22D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9ACu;
        // 0x22d9b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D9B4u;
        goto label_22d9b4;
    }
    ctx->pc = 0x22D9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D9B4u);
        ctx->pc = 0x22D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9ACu;
        // 0x22d9b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D9ACu, 0x22D9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D9B4u;
label_22d9b4:
    // 0x22d9b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_22d9b8:
    if (ctx->pc == 0x22D9B8u) {
        ctx->pc = 0x22D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9B4u;
        // 0x22d9b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D9BCu;
        goto label_22d9bc;
    }
    ctx->pc = 0x22D9B4u;
    {
        const bool branch_taken_0x22d9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9B4u;
        // 0x22d9b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9b4) {
            ctx->pc = 0x22D9C0u;
            goto label_22d9c0;
        }
    }
    ctx->pc = 0x22D9BCu;
label_22d9bc:
    // 0x22d9bc: 0x8c53bd30  lw          $s3, -0x42D0($v0)
    ctx->pc = 0x22d9bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22d9c0:
    // 0x22d9c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d9c4:
    // 0x22d9c4: 0xc089c20  jal         func_227080
label_22d9c8:
    if (ctx->pc == 0x22D9C8u) {
        ctx->pc = 0x22D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9C4u;
        // 0x22d9c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D9CCu;
        goto label_22d9cc;
    }
    ctx->pc = 0x22D9C4u;
    SET_GPR_U32(ctx, 31, 0x22D9CCu);
    ctx->pc = 0x22D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D9C4u;
    // 0x22d9c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x22D9C4u, 0x22D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D9CCu;
label_22d9cc:
    // 0x22d9cc: 0x1680000f  bnez        $s4, . + 4 + (0xF << 2)
label_22d9d0:
    if (ctx->pc == 0x22D9D0u) {
        ctx->pc = 0x22D9D4u;
        goto label_22d9d4;
    }
    ctx->pc = 0x22D9CCu;
    {
        const bool branch_taken_0x22d9cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d9cc) {
            ctx->pc = 0x22DA0Cu;
            goto label_22da0c;
        }
    }
    ctx->pc = 0x22D9D4u;
label_22d9d4:
    // 0x22d9d4: 0xc090222  jal         func_240888
label_22d9d8:
    if (ctx->pc == 0x22D9D8u) {
        ctx->pc = 0x22D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9D4u;
        // 0x22d9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D9DCu;
        goto label_22d9dc;
    }
    ctx->pc = 0x22D9D4u;
    SET_GPR_U32(ctx, 31, 0x22D9DCu);
    ctx->pc = 0x22D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D9D4u;
    // 0x22d9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240888u, 0x22D9D4u, 0x22D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D9DCu;
label_22d9dc:
    // 0x22d9dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22d9e0:
    if (ctx->pc == 0x22D9E0u) {
        ctx->pc = 0x22D9E4u;
        goto label_22d9e4;
    }
    ctx->pc = 0x22D9DCu;
    {
        const bool branch_taken_0x22d9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d9dc) {
            ctx->pc = 0x22DA04u;
            goto label_22da04;
        }
    }
    ctx->pc = 0x22D9E4u;
label_22d9e4:
    // 0x22d9e4: 0xc090222  jal         func_240888
label_22d9e8:
    if (ctx->pc == 0x22D9E8u) {
        ctx->pc = 0x22D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9E4u;
        // 0x22d9e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D9ECu;
        goto label_22d9ec;
    }
    ctx->pc = 0x22D9E4u;
    SET_GPR_U32(ctx, 31, 0x22D9ECu);
    ctx->pc = 0x22D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D9E4u;
    // 0x22d9e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240888u, 0x22D9E4u, 0x22D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D9ECu;
label_22d9ec:
    // 0x22d9ec: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x22d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_22d9f0:
    // 0x22d9f0: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
label_22d9f4:
    if (ctx->pc == 0x22D9F4u) {
        ctx->pc = 0x22D9F8u;
        goto label_22d9f8;
    }
    ctx->pc = 0x22D9F0u;
    {
        const bool branch_taken_0x22d9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x22d9f0) {
            ctx->pc = 0x22DA04u;
            goto label_22da04;
        }
    }
    ctx->pc = 0x22D9F8u;
label_22d9f8:
    // 0x22d9f8: 0xc090222  jal         func_240888
label_22d9fc:
    if (ctx->pc == 0x22D9FCu) {
        ctx->pc = 0x22D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9F8u;
        // 0x22d9fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA00u;
        goto label_22da00;
    }
    ctx->pc = 0x22D9F8u;
    SET_GPR_U32(ctx, 31, 0x22DA00u);
    ctx->pc = 0x22D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D9F8u;
    // 0x22d9fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240888u, 0x22D9F8u, 0x22DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA00u;
label_22da00:
    // 0x22da00: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x22da00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_22da04:
    // 0x22da04: 0x52800040  beql        $s4, $zero, . + 4 + (0x40 << 2)
label_22da08:
    if (ctx->pc == 0x22DA08u) {
        ctx->pc = 0x22DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA04u;
        // 0x22da08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA0Cu;
        goto label_22da0c;
    }
    ctx->pc = 0x22DA04u;
    {
        const bool branch_taken_0x22da04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x22da04) {
            ctx->pc = 0x22DA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DA04u;
            // 0x22da08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DB08u;
            goto label_22db08;
        }
    }
    ctx->pc = 0x22DA0Cu;
label_22da0c:
    // 0x22da0c: 0x1240003d  beqz        $s2, . + 4 + (0x3D << 2)
label_22da10:
    if (ctx->pc == 0x22DA10u) {
        ctx->pc = 0x22DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA0Cu;
        // 0x22da10: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA14u;
        goto label_22da14;
    }
    ctx->pc = 0x22DA0Cu;
    {
        const bool branch_taken_0x22da0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA0Cu;
        // 0x22da10: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da0c) {
            ctx->pc = 0x22DB04u;
            goto label_22db04;
        }
    }
    ctx->pc = 0x22DA14u;
label_22da14:
    // 0x22da14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22da14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22da18:
    // 0x22da18: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x22da18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22da1c:
    // 0x22da1c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22da1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22da20:
    // 0x22da20: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22da24:
    // 0x22da24: 0x40f809  jalr        $v0
label_22da28:
    if (ctx->pc == 0x22DA28u) {
        ctx->pc = 0x22DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA24u;
        // 0x22da28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA2Cu;
        goto label_22da2c;
    }
    ctx->pc = 0x22DA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22DA2Cu);
        ctx->pc = 0x22DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA24u;
        // 0x22da28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DA24u, 0x22DA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22DA2Cu;
label_22da2c:
    // 0x22da2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22da2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22da30:
    // 0x22da30: 0xc08da34  jal         func_2368D0
label_22da34:
    if (ctx->pc == 0x22DA34u) {
        ctx->pc = 0x22DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA30u;
        // 0x22da34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA38u;
        goto label_22da38;
    }
    ctx->pc = 0x22DA30u;
    SET_GPR_U32(ctx, 31, 0x22DA38u);
    ctx->pc = 0x22DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA30u;
    // 0x22da34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2368D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2368D0u, 0x22DA30u, 0x22DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA38u;
label_22da38:
    // 0x22da38: 0xc0e5c72  jal         func_3971C8
label_22da3c:
    if (ctx->pc == 0x22DA3Cu) {
        ctx->pc = 0x22DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA38u;
        // 0x22da3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA40u;
        goto label_22da40;
    }
    ctx->pc = 0x22DA38u;
    SET_GPR_U32(ctx, 31, 0x22DA40u);
    ctx->pc = 0x22DA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA38u;
    // 0x22da3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3971C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3971C8u, 0x22DA38u, 0x22DA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA40u;
label_22da40:
    // 0x22da40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22da40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22da44:
    // 0x22da44: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22da44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22da48:
    // 0x22da48: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22da4c:
    // 0x22da4c: 0x40f809  jalr        $v0
label_22da50:
    if (ctx->pc == 0x22DA50u) {
        ctx->pc = 0x22DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA4Cu;
        // 0x22da50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA54u;
        goto label_22da54;
    }
    ctx->pc = 0x22DA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22DA54u);
        ctx->pc = 0x22DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA4Cu;
        // 0x22da50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DA4Cu, 0x22DA54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22DA54u;
label_22da54:
    // 0x22da54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22da54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22da58:
    // 0x22da58: 0xc0e5bea  jal         func_396FA8
label_22da5c:
    if (ctx->pc == 0x22DA5Cu) {
        ctx->pc = 0x22DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA58u;
        // 0x22da5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA60u;
        goto label_22da60;
    }
    ctx->pc = 0x22DA58u;
    SET_GPR_U32(ctx, 31, 0x22DA60u);
    ctx->pc = 0x22DA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA58u;
    // 0x22da5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396FA8u, 0x22DA58u, 0x22DA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA60u;
label_22da60:
    // 0x22da60: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x22da60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_22da64:
    // 0x22da64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22da64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22da68:
    // 0x22da68: 0xc107442  jal         func_41D108
label_22da6c:
    if (ctx->pc == 0x22DA6Cu) {
        ctx->pc = 0x22DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA68u;
        // 0x22da6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA70u;
        goto label_22da70;
    }
    ctx->pc = 0x22DA68u;
    SET_GPR_U32(ctx, 31, 0x22DA70u);
    ctx->pc = 0x22DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA68u;
    // 0x22da6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D108u, 0x22DA68u, 0x22DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA70u;
label_22da70:
    // 0x22da70: 0xc088ac6  jal         func_222B18
label_22da74:
    if (ctx->pc == 0x22DA74u) {
        ctx->pc = 0x22DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA70u;
        // 0x22da74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA78u;
        goto label_22da78;
    }
    ctx->pc = 0x22DA70u;
    SET_GPR_U32(ctx, 31, 0x22DA78u);
    ctx->pc = 0x22DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA70u;
    // 0x22da74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DA70u, 0x22DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA78u;
label_22da78:
    // 0x22da78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22da78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22da7c:
    // 0x22da7c: 0xc088ac6  jal         func_222B18
label_22da80:
    if (ctx->pc == 0x22DA80u) {
        ctx->pc = 0x22DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA7Cu;
        // 0x22da80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA84u;
        goto label_22da84;
    }
    ctx->pc = 0x22DA7Cu;
    SET_GPR_U32(ctx, 31, 0x22DA84u);
    ctx->pc = 0x22DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DA7Cu;
    // 0x22da80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DA7Cu, 0x22DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DA84u;
label_22da84:
    // 0x22da84: 0x86040042  lh          $a0, 0x42($s0)
    ctx->pc = 0x22da84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_22da88:
    // 0x22da88: 0x84430044  lh          $v1, 0x44($v0)
    ctx->pc = 0x22da88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
label_22da8c:
    // 0x22da8c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
label_22da90:
    if (ctx->pc == 0x22DA90u) {
        ctx->pc = 0x22DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA8Cu;
        // 0x22da90: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DA94u;
        goto label_22da94;
    }
    ctx->pc = 0x22DA8Cu;
    {
        const bool branch_taken_0x22da8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA8Cu;
        // 0x22da90: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da8c) {
            ctx->pc = 0x22DAD0u;
            goto label_22dad0;
        }
    }
    ctx->pc = 0x22DA94u;
label_22da94:
    // 0x22da94: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x22da94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_22da98:
    // 0x22da98: 0x8c67bd30  lw          $a3, -0x42D0($v1)
    ctx->pc = 0x22da98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_22da9c:
    // 0x22da9c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x22da9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_22daa0:
    // 0x22daa0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x22daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_22daa4:
    // 0x22daa4: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x22daa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_22daa8:
    // 0x22daa8: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x22daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_22daac:
    // 0x22daac: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x22daacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_22dab0:
    // 0x22dab0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22dab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22dab4:
    // 0x22dab4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x22dab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22dab8:
    // 0x22dab8: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x22dab8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22dabc:
    // 0x22dabc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x22dabcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22dac0:
    // 0x22dac0: 0xc106e2c  jal         func_41B8B0
label_22dac4:
    if (ctx->pc == 0x22DAC4u) {
        ctx->pc = 0x22DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAC0u;
        // 0x22dac4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DAC8u;
        goto label_22dac8;
    }
    ctx->pc = 0x22DAC0u;
    SET_GPR_U32(ctx, 31, 0x22DAC8u);
    ctx->pc = 0x22DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DAC0u;
    // 0x22dac4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x22DAC0u, 0x22DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DAC8u;
label_22dac8:
    // 0x22dac8: 0x10000008  b           . + 4 + (0x8 << 2)
label_22dacc:
    if (ctx->pc == 0x22DACCu) {
        ctx->pc = 0x22DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAC8u;
        // 0x22dacc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DAD0u;
        goto label_22dad0;
    }
    ctx->pc = 0x22DAC8u;
    {
        const bool branch_taken_0x22dac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAC8u;
        // 0x22dacc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dac8) {
            ctx->pc = 0x22DAECu;
            goto label_22daec;
        }
    }
    ctx->pc = 0x22DAD0u;
label_22dad0:
    // 0x22dad0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x22dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_22dad4:
    // 0x22dad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22dad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22dad8:
    // 0x22dad8: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x22dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_22dadc:
    // 0x22dadc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x22dadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22dae0:
    // 0x22dae0: 0xc13b622  jal         func_4ED888
label_22dae4:
    if (ctx->pc == 0x22DAE4u) {
        ctx->pc = 0x22DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAE0u;
        // 0x22dae4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DAE8u;
        goto label_22dae8;
    }
    ctx->pc = 0x22DAE0u;
    SET_GPR_U32(ctx, 31, 0x22DAE8u);
    ctx->pc = 0x22DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DAE0u;
    // 0x22dae4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED888u, 0x22DAE0u, 0x22DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DAE8u;
label_22dae8:
    // 0x22dae8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22daec:
    // 0x22daec: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x22daecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_22daf0:
    // 0x22daf0: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x22daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_22daf4:
    // 0x22daf4: 0x60f809  jalr        $v1
label_22daf8:
    if (ctx->pc == 0x22DAF8u) {
        ctx->pc = 0x22DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAF4u;
        // 0x22daf8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DAFCu;
        goto label_22dafc;
    }
    ctx->pc = 0x22DAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22DAFCu);
        ctx->pc = 0x22DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAF4u;
        // 0x22daf8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DAF4u, 0x22DAFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22DAFCu;
label_22dafc:
    // 0x22dafc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_22db00:
    if (ctx->pc == 0x22DB00u) {
        ctx->pc = 0x22DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAFCu;
        // 0x22db00: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB04u;
        goto label_22db04;
    }
    ctx->pc = 0x22DAFCu;
    {
        const bool branch_taken_0x22dafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAFCu;
        // 0x22db00: 0x8ea3489c  lw          $v1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dafc) {
            ctx->pc = 0x22DB70u;
            goto label_22db70;
        }
    }
    ctx->pc = 0x22DB04u;
label_22db04:
    // 0x22db04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22db04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22db08:
    // 0x22db08: 0xc0fe012  jal         func_3F8048
label_22db0c:
    if (ctx->pc == 0x22DB0Cu) {
        ctx->pc = 0x22DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB08u;
        // 0x22db0c: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB10u;
        goto label_22db10;
    }
    ctx->pc = 0x22DB08u;
    SET_GPR_U32(ctx, 31, 0x22DB10u);
    ctx->pc = 0x22DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB08u;
    // 0x22db0c: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F8048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F8048u, 0x22DB08u, 0x22DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB10u;
label_22db10:
    // 0x22db10: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_22db14:
    if (ctx->pc == 0x22DB14u) {
        ctx->pc = 0x22DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB10u;
        // 0x22db14: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB18u;
        goto label_22db18;
    }
    ctx->pc = 0x22DB10u;
    {
        const bool branch_taken_0x22db10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB10u;
        // 0x22db14: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db10) {
            ctx->pc = 0x22DB4Cu;
            goto label_22db4c;
        }
    }
    ctx->pc = 0x22DB18u;
label_22db18:
    // 0x22db18: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x22db18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_22db1c:
    // 0x22db1c: 0x8c67bd30  lw          $a3, -0x42D0($v1)
    ctx->pc = 0x22db1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_22db20:
    // 0x22db20: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x22db20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_22db24:
    // 0x22db24: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x22db24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_22db28:
    // 0x22db28: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x22db28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_22db2c:
    // 0x22db2c: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x22db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_22db30:
    // 0x22db30: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x22db30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_22db34:
    // 0x22db34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22db34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22db38:
    // 0x22db38: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x22db38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22db3c:
    // 0x22db3c: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x22db3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22db40:
    // 0x22db40: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x22db40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22db44:
    // 0x22db44: 0xc106e2c  jal         func_41B8B0
label_22db48:
    if (ctx->pc == 0x22DB48u) {
        ctx->pc = 0x22DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB44u;
        // 0x22db48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB4Cu;
        goto label_22db4c;
    }
    ctx->pc = 0x22DB44u;
    SET_GPR_U32(ctx, 31, 0x22DB4Cu);
    ctx->pc = 0x22DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB44u;
    // 0x22db48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x22DB44u, 0x22DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB4Cu;
label_22db4c:
    // 0x22db4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22db50:
    // 0x22db50: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22db50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22db54:
    // 0x22db54: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22db54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22db58:
    // 0x22db58: 0x40f809  jalr        $v0
label_22db5c:
    if (ctx->pc == 0x22DB5Cu) {
        ctx->pc = 0x22DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB58u;
        // 0x22db5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB60u;
        goto label_22db60;
    }
    ctx->pc = 0x22DB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22DB60u);
        ctx->pc = 0x22DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB58u;
        // 0x22db5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DB58u, 0x22DB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22DB60u;
label_22db60:
    // 0x22db60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22db60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22db64:
    // 0x22db64: 0xc08da0a  jal         func_236828
label_22db68:
    if (ctx->pc == 0x22DB68u) {
        ctx->pc = 0x22DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB64u;
        // 0x22db68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB6Cu;
        goto label_22db6c;
    }
    ctx->pc = 0x22DB64u;
    SET_GPR_U32(ctx, 31, 0x22DB6Cu);
    ctx->pc = 0x22DB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB64u;
    // 0x22db68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236828u, 0x22DB64u, 0x22DB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB6Cu;
label_22db6c:
    // 0x22db6c: 0x8ea3489c  lw          $v1, 0x489C($s5)
    ctx->pc = 0x22db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_22db70:
    // 0x22db70: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x22db70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_22db74:
    // 0x22db74: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x22db74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
label_22db78:
    // 0x22db78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22db78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22db7c:
    // 0x22db7c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22db7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22db80:
    // 0x22db80: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22db80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22db84:
    // 0x22db84: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_22db88:
    if (ctx->pc == 0x22DB88u) {
        ctx->pc = 0x22DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB84u;
        // 0x22db88: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB8Cu;
        goto label_22db8c;
    }
    ctx->pc = 0x22DB84u;
    {
        const bool branch_taken_0x22db84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB84u;
        // 0x22db88: 0x3c040061  lui         $a0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db84) {
            ctx->pc = 0x22DC04u;
            goto label_22dc04;
        }
    }
    ctx->pc = 0x22DB8Cu;
label_22db8c:
    // 0x22db8c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x22db8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_22db90:
    // 0x22db90: 0xc0739c6  jal         func_1CE718
label_22db94:
    if (ctx->pc == 0x22DB94u) {
        ctx->pc = 0x22DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB90u;
        // 0x22db94: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DB98u;
        goto label_22db98;
    }
    ctx->pc = 0x22DB90u;
    SET_GPR_U32(ctx, 31, 0x22DB98u);
    ctx->pc = 0x22DB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB90u;
    // 0x22db94: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE718u, 0x22DB90u, 0x22DB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB98u;
label_22db98:
    // 0x22db98: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x22db98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_22db9c:
    // 0x22db9c: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x22db9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_22dba0:
    // 0x22dba0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22dba4:
    if (ctx->pc == 0x22DBA4u) {
        ctx->pc = 0x22DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBA0u;
        // 0x22dba4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DBA8u;
        goto label_22dba8;
    }
    ctx->pc = 0x22DBA0u;
    {
        const bool branch_taken_0x22dba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBA0u;
        // 0x22dba4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dba0) {
            ctx->pc = 0x22DBB4u;
            goto label_22dbb4;
        }
    }
    ctx->pc = 0x22DBA8u;
label_22dba8:
    // 0x22dba8: 0xc107444  jal         func_41D110
label_22dbac:
    if (ctx->pc == 0x22DBACu) {
        ctx->pc = 0x22DBB0u;
        goto label_22dbb0;
    }
    ctx->pc = 0x22DBA8u;
    SET_GPR_U32(ctx, 31, 0x22DBB0u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x22DBA8u, 0x22DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DBB0u;
label_22dbb0:
    // 0x22dbb0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x22dbb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22dbb4:
    // 0x22dbb4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_22dbb8:
    if (ctx->pc == 0x22DBB8u) {
        ctx->pc = 0x22DBBCu;
        goto label_22dbbc;
    }
    ctx->pc = 0x22DBB4u;
    {
        const bool branch_taken_0x22dbb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dbb4) {
            ctx->pc = 0x22DC04u;
            goto label_22dc04;
        }
    }
    ctx->pc = 0x22DBBCu;
label_22dbbc:
    // 0x22dbbc: 0xc073a8e  jal         func_1CEA38
label_22dbc0:
    if (ctx->pc == 0x22DBC0u) {
        ctx->pc = 0x22DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBBCu;
        // 0x22dbc0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DBC4u;
        goto label_22dbc4;
    }
    ctx->pc = 0x22DBBCu;
    SET_GPR_U32(ctx, 31, 0x22DBC4u);
    ctx->pc = 0x22DBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBBCu;
    // 0x22dbc0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x22DBBCu, 0x22DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DBC4u;
label_22dbc4:
    // 0x22dbc4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_22dbc8:
    if (ctx->pc == 0x22DBC8u) {
        ctx->pc = 0x22DBCCu;
        goto label_22dbcc;
    }
    ctx->pc = 0x22DBC4u;
    {
        const bool branch_taken_0x22dbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dbc4) {
            ctx->pc = 0x22DC04u;
            goto label_22dc04;
        }
    }
    ctx->pc = 0x22DBCCu;
label_22dbcc:
    // 0x22dbcc: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_22dbd0:
    if (ctx->pc == 0x22DBD0u) {
        ctx->pc = 0x22DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBCCu;
        // 0x22dbd0: 0x8ea5489c  lw          $a1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DBD4u;
        goto label_22dbd4;
    }
    ctx->pc = 0x22DBCCu;
    {
        const bool branch_taken_0x22dbcc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBCCu;
        // 0x22dbd0: 0x8ea5489c  lw          $a1, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbcc) {
            ctx->pc = 0x22DC04u;
            goto label_22dc04;
        }
    }
    ctx->pc = 0x22DBD4u;
label_22dbd4:
    // 0x22dbd4: 0x3c04f3ff  lui         $a0, 0xF3FF
    ctx->pc = 0x22dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62463 << 16));
label_22dbd8:
    // 0x22dbd8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x22dbd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_22dbdc:
    // 0x22dbdc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x22dbdcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_22dbe0:
    // 0x22dbe0: 0x311b8  dsll        $v0, $v1, 6
    ctx->pc = 0x22dbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 6);
label_22dbe4:
    // 0x22dbe4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22dbe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22dbe8:
    // 0x22dbe8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22dbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22dbec:
    // 0x22dbec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22dbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22dbf0:
    // 0x22dbf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22dbf4:
    // 0x22dbf4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22dbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22dbf8:
    // 0x22dbf8: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x22dbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
label_22dbfc:
    // 0x22dbfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22dbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22dc00:
    // 0x22dc00: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x22dc00u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_22dc04:
    // 0x22dc04: 0xc088ac6  jal         func_222B18
label_22dc08:
    if (ctx->pc == 0x22DC08u) {
        ctx->pc = 0x22DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC04u;
        // 0x22dc08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DC0Cu;
        goto label_22dc0c;
    }
    ctx->pc = 0x22DC04u;
    SET_GPR_U32(ctx, 31, 0x22DC0Cu);
    ctx->pc = 0x22DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC04u;
    // 0x22dc08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DC04u, 0x22DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC0Cu;
label_22dc0c:
    // 0x22dc0c: 0xa4400042  sh          $zero, 0x42($v0)
    ctx->pc = 0x22dc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 0));
label_22dc10:
    // 0x22dc10: 0xc088ac6  jal         func_222B18
label_22dc14:
    if (ctx->pc == 0x22DC14u) {
        ctx->pc = 0x22DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC10u;
        // 0x22dc14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DC18u;
        goto label_22dc18;
    }
    ctx->pc = 0x22DC10u;
    SET_GPR_U32(ctx, 31, 0x22DC18u);
    ctx->pc = 0x22DC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC10u;
    // 0x22dc14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22DC10u, 0x22DC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC18u;
label_22dc18:
    // 0x22dc18: 0xa4400044  sh          $zero, 0x44($v0)
    ctx->pc = 0x22dc18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 0));
label_22dc1c:
    // 0x22dc1c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x22dc1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22dc20:
    // 0x22dc20: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x22dc20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22dc24:
    // 0x22dc24: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x22dc24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22dc28:
    // 0x22dc28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22dc28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22dc2c:
    // 0x22dc2c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x22dc2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22dc30:
    // 0x22dc30: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x22dc30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22dc34:
    // 0x22dc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22dc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22dc38:
    // 0x22dc38: 0x3e00008  jr          $ra
label_22dc3c:
    if (ctx->pc == 0x22DC3Cu) {
        ctx->pc = 0x22DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC38u;
        // 0x22dc3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22DC40u;
        goto label_fallthrough_0x22dc38;
    }
    ctx->pc = 0x22DC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC38u;
        // 0x22dc3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22dc38:
    ctx->pc = 0x22DC40u;
}
