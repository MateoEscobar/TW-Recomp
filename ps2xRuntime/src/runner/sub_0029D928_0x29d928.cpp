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

// Function: sub_0029D928
// Address: 0x29d928 - 0x29dc38
void sub_0029D928_0x29d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D928_0x29d928");
#endif

    switch (ctx->pc) {
        case 0x29d928u: goto label_29d928;
        case 0x29d92cu: goto label_29d92c;
        case 0x29d930u: goto label_29d930;
        case 0x29d934u: goto label_29d934;
        case 0x29d938u: goto label_29d938;
        case 0x29d93cu: goto label_29d93c;
        case 0x29d940u: goto label_29d940;
        case 0x29d944u: goto label_29d944;
        case 0x29d948u: goto label_29d948;
        case 0x29d94cu: goto label_29d94c;
        case 0x29d950u: goto label_29d950;
        case 0x29d954u: goto label_29d954;
        case 0x29d958u: goto label_29d958;
        case 0x29d95cu: goto label_29d95c;
        case 0x29d960u: goto label_29d960;
        case 0x29d964u: goto label_29d964;
        case 0x29d968u: goto label_29d968;
        case 0x29d96cu: goto label_29d96c;
        case 0x29d970u: goto label_29d970;
        case 0x29d974u: goto label_29d974;
        case 0x29d978u: goto label_29d978;
        case 0x29d97cu: goto label_29d97c;
        case 0x29d980u: goto label_29d980;
        case 0x29d984u: goto label_29d984;
        case 0x29d988u: goto label_29d988;
        case 0x29d98cu: goto label_29d98c;
        case 0x29d990u: goto label_29d990;
        case 0x29d994u: goto label_29d994;
        case 0x29d998u: goto label_29d998;
        case 0x29d99cu: goto label_29d99c;
        case 0x29d9a0u: goto label_29d9a0;
        case 0x29d9a4u: goto label_29d9a4;
        case 0x29d9a8u: goto label_29d9a8;
        case 0x29d9acu: goto label_29d9ac;
        case 0x29d9b0u: goto label_29d9b0;
        case 0x29d9b4u: goto label_29d9b4;
        case 0x29d9b8u: goto label_29d9b8;
        case 0x29d9bcu: goto label_29d9bc;
        case 0x29d9c0u: goto label_29d9c0;
        case 0x29d9c4u: goto label_29d9c4;
        case 0x29d9c8u: goto label_29d9c8;
        case 0x29d9ccu: goto label_29d9cc;
        case 0x29d9d0u: goto label_29d9d0;
        case 0x29d9d4u: goto label_29d9d4;
        case 0x29d9d8u: goto label_29d9d8;
        case 0x29d9dcu: goto label_29d9dc;
        case 0x29d9e0u: goto label_29d9e0;
        case 0x29d9e4u: goto label_29d9e4;
        case 0x29d9e8u: goto label_29d9e8;
        case 0x29d9ecu: goto label_29d9ec;
        case 0x29d9f0u: goto label_29d9f0;
        case 0x29d9f4u: goto label_29d9f4;
        case 0x29d9f8u: goto label_29d9f8;
        case 0x29d9fcu: goto label_29d9fc;
        case 0x29da00u: goto label_29da00;
        case 0x29da04u: goto label_29da04;
        case 0x29da08u: goto label_29da08;
        case 0x29da0cu: goto label_29da0c;
        case 0x29da10u: goto label_29da10;
        case 0x29da14u: goto label_29da14;
        case 0x29da18u: goto label_29da18;
        case 0x29da1cu: goto label_29da1c;
        case 0x29da20u: goto label_29da20;
        case 0x29da24u: goto label_29da24;
        case 0x29da28u: goto label_29da28;
        case 0x29da2cu: goto label_29da2c;
        case 0x29da30u: goto label_29da30;
        case 0x29da34u: goto label_29da34;
        case 0x29da38u: goto label_29da38;
        case 0x29da3cu: goto label_29da3c;
        case 0x29da40u: goto label_29da40;
        case 0x29da44u: goto label_29da44;
        case 0x29da48u: goto label_29da48;
        case 0x29da4cu: goto label_29da4c;
        case 0x29da50u: goto label_29da50;
        case 0x29da54u: goto label_29da54;
        case 0x29da58u: goto label_29da58;
        case 0x29da5cu: goto label_29da5c;
        case 0x29da60u: goto label_29da60;
        case 0x29da64u: goto label_29da64;
        case 0x29da68u: goto label_29da68;
        case 0x29da6cu: goto label_29da6c;
        case 0x29da70u: goto label_29da70;
        case 0x29da74u: goto label_29da74;
        case 0x29da78u: goto label_29da78;
        case 0x29da7cu: goto label_29da7c;
        case 0x29da80u: goto label_29da80;
        case 0x29da84u: goto label_29da84;
        case 0x29da88u: goto label_29da88;
        case 0x29da8cu: goto label_29da8c;
        case 0x29da90u: goto label_29da90;
        case 0x29da94u: goto label_29da94;
        case 0x29da98u: goto label_29da98;
        case 0x29da9cu: goto label_29da9c;
        case 0x29daa0u: goto label_29daa0;
        case 0x29daa4u: goto label_29daa4;
        case 0x29daa8u: goto label_29daa8;
        case 0x29daacu: goto label_29daac;
        case 0x29dab0u: goto label_29dab0;
        case 0x29dab4u: goto label_29dab4;
        case 0x29dab8u: goto label_29dab8;
        case 0x29dabcu: goto label_29dabc;
        case 0x29dac0u: goto label_29dac0;
        case 0x29dac4u: goto label_29dac4;
        case 0x29dac8u: goto label_29dac8;
        case 0x29daccu: goto label_29dacc;
        case 0x29dad0u: goto label_29dad0;
        case 0x29dad4u: goto label_29dad4;
        case 0x29dad8u: goto label_29dad8;
        case 0x29dadcu: goto label_29dadc;
        case 0x29dae0u: goto label_29dae0;
        case 0x29dae4u: goto label_29dae4;
        case 0x29dae8u: goto label_29dae8;
        case 0x29daecu: goto label_29daec;
        case 0x29daf0u: goto label_29daf0;
        case 0x29daf4u: goto label_29daf4;
        case 0x29daf8u: goto label_29daf8;
        case 0x29dafcu: goto label_29dafc;
        case 0x29db00u: goto label_29db00;
        case 0x29db04u: goto label_29db04;
        case 0x29db08u: goto label_29db08;
        case 0x29db0cu: goto label_29db0c;
        case 0x29db10u: goto label_29db10;
        case 0x29db14u: goto label_29db14;
        case 0x29db18u: goto label_29db18;
        case 0x29db1cu: goto label_29db1c;
        case 0x29db20u: goto label_29db20;
        case 0x29db24u: goto label_29db24;
        case 0x29db28u: goto label_29db28;
        case 0x29db2cu: goto label_29db2c;
        case 0x29db30u: goto label_29db30;
        case 0x29db34u: goto label_29db34;
        case 0x29db38u: goto label_29db38;
        case 0x29db3cu: goto label_29db3c;
        case 0x29db40u: goto label_29db40;
        case 0x29db44u: goto label_29db44;
        case 0x29db48u: goto label_29db48;
        case 0x29db4cu: goto label_29db4c;
        case 0x29db50u: goto label_29db50;
        case 0x29db54u: goto label_29db54;
        case 0x29db58u: goto label_29db58;
        case 0x29db5cu: goto label_29db5c;
        case 0x29db60u: goto label_29db60;
        case 0x29db64u: goto label_29db64;
        case 0x29db68u: goto label_29db68;
        case 0x29db6cu: goto label_29db6c;
        case 0x29db70u: goto label_29db70;
        case 0x29db74u: goto label_29db74;
        case 0x29db78u: goto label_29db78;
        case 0x29db7cu: goto label_29db7c;
        case 0x29db80u: goto label_29db80;
        case 0x29db84u: goto label_29db84;
        case 0x29db88u: goto label_29db88;
        case 0x29db8cu: goto label_29db8c;
        case 0x29db90u: goto label_29db90;
        case 0x29db94u: goto label_29db94;
        case 0x29db98u: goto label_29db98;
        case 0x29db9cu: goto label_29db9c;
        case 0x29dba0u: goto label_29dba0;
        case 0x29dba4u: goto label_29dba4;
        case 0x29dba8u: goto label_29dba8;
        case 0x29dbacu: goto label_29dbac;
        case 0x29dbb0u: goto label_29dbb0;
        case 0x29dbb4u: goto label_29dbb4;
        case 0x29dbb8u: goto label_29dbb8;
        case 0x29dbbcu: goto label_29dbbc;
        case 0x29dbc0u: goto label_29dbc0;
        case 0x29dbc4u: goto label_29dbc4;
        case 0x29dbc8u: goto label_29dbc8;
        case 0x29dbccu: goto label_29dbcc;
        case 0x29dbd0u: goto label_29dbd0;
        case 0x29dbd4u: goto label_29dbd4;
        case 0x29dbd8u: goto label_29dbd8;
        case 0x29dbdcu: goto label_29dbdc;
        case 0x29dbe0u: goto label_29dbe0;
        case 0x29dbe4u: goto label_29dbe4;
        case 0x29dbe8u: goto label_29dbe8;
        case 0x29dbecu: goto label_29dbec;
        case 0x29dbf0u: goto label_29dbf0;
        case 0x29dbf4u: goto label_29dbf4;
        case 0x29dbf8u: goto label_29dbf8;
        case 0x29dbfcu: goto label_29dbfc;
        case 0x29dc00u: goto label_29dc00;
        case 0x29dc04u: goto label_29dc04;
        case 0x29dc08u: goto label_29dc08;
        case 0x29dc0cu: goto label_29dc0c;
        case 0x29dc10u: goto label_29dc10;
        case 0x29dc14u: goto label_29dc14;
        case 0x29dc18u: goto label_29dc18;
        case 0x29dc1cu: goto label_29dc1c;
        case 0x29dc20u: goto label_29dc20;
        case 0x29dc24u: goto label_29dc24;
        case 0x29dc28u: goto label_29dc28;
        case 0x29dc2cu: goto label_29dc2c;
        case 0x29dc30u: goto label_29dc30;
        case 0x29dc34u: goto label_29dc34;
        default: break;
    }

    ctx->pc = 0x29d928u;

label_29d928:
    // 0x29d928: 0x27bdfc90  addiu       $sp, $sp, -0x370
    ctx->pc = 0x29d928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966416));
label_29d92c:
    // 0x29d92c: 0x7fb40320  sq          $s4, 0x320($sp)
    ctx->pc = 0x29d92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 20));
label_29d930:
    // 0x29d930: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29d930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d934:
    // 0x29d934: 0x7fb00360  sq          $s0, 0x360($sp)
    ctx->pc = 0x29d934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 16));
label_29d938:
    // 0x29d938: 0x7fb10350  sq          $s1, 0x350($sp)
    ctx->pc = 0x29d938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 17));
label_29d93c:
    // 0x29d93c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x29d93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_29d940:
    // 0x29d940: 0x7fb20340  sq          $s2, 0x340($sp)
    ctx->pc = 0x29d940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 18));
label_29d944:
    // 0x29d944: 0x7fb30330  sq          $s3, 0x330($sp)
    ctx->pc = 0x29d944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 19));
label_29d948:
    // 0x29d948: 0x7fb50310  sq          $s5, 0x310($sp)
    ctx->pc = 0x29d948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 21));
label_29d94c:
    // 0x29d94c: 0x7fb60300  sq          $s6, 0x300($sp)
    ctx->pc = 0x29d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 22));
label_29d950:
    // 0x29d950: 0x7fb702f0  sq          $s7, 0x2F0($sp)
    ctx->pc = 0x29d950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 23));
label_29d954:
    // 0x29d954: 0x7fbe02e0  sq          $fp, 0x2E0($sp)
    ctx->pc = 0x29d954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 30));
label_29d958:
    // 0x29d958: 0xffbf02d0  sd          $ra, 0x2D0($sp)
    ctx->pc = 0x29d958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 31));
label_29d95c:
    // 0x29d95c: 0xafa502b4  sw          $a1, 0x2B4($sp)
    ctx->pc = 0x29d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 5));
label_29d960:
    // 0x29d960: 0xafa602b8  sw          $a2, 0x2B8($sp)
    ctx->pc = 0x29d960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 6));
label_29d964:
    // 0x29d964: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
label_29d968:
    if (ctx->pc == 0x29D968u) {
        ctx->pc = 0x29D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D964u;
        // 0x29d968: 0xafa702bc  sw          $a3, 0x2BC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D96Cu;
        goto label_29d96c;
    }
    ctx->pc = 0x29D964u;
    {
        const bool branch_taken_0x29d964 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D964u;
        // 0x29d968: 0xafa702bc  sw          $a3, 0x2BC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d964) {
            ctx->pc = 0x29D97Cu;
            goto label_29d97c;
        }
    }
    ctx->pc = 0x29D96Cu;
label_29d96c:
    // 0x29d96c: 0x86820092  lh          $v0, 0x92($s4)
    ctx->pc = 0x29d96cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_29d970:
    // 0x29d970: 0x24834b00  addiu       $v1, $a0, 0x4B00
    ctx->pc = 0x29d970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_29d974:
    // 0x29d974: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x29d974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29d978:
    // 0x29d978: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x29d978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29d97c:
    // 0x29d97c: 0x79050000  lq          $a1, 0x0($t0)
    ctx->pc = 0x29d97cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_29d980:
    // 0x29d980: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x29d980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_29d984:
    // 0x29d984: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x29d984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_29d988:
    // 0x29d988: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_29d98c:
    // 0x29d98c: 0x7fa50200  sq          $a1, 0x200($sp)
    ctx->pc = 0x29d98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 5));
label_29d990:
    // 0x29d990: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x29d990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_29d994:
    // 0x29d994: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29d994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_29d998:
    // 0x29d998: 0x8c492c7c  lw          $t1, 0x2C7C($v0)
    ctx->pc = 0x29d998u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_29d99c:
    // 0x29d99c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29d9a0:
    // 0x29d9a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_29d9a4:
    // 0x29d9a4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x29d9a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_29d9a8:
    // 0x29d9a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29d9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29d9ac:
    // 0x29d9ac: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x29d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_29d9b0:
    // 0x29d9b0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x29d9b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29d9b4:
    // 0x29d9b4: 0x7fa40210  sq          $a0, 0x210($sp)
    ctx->pc = 0x29d9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 4));
label_29d9b8:
    // 0x29d9b8: 0x27a80200  addiu       $t0, $sp, 0x200
    ctx->pc = 0x29d9b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_29d9bc:
    // 0x29d9bc: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x29d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_29d9c0:
    // 0x29d9c0: 0xafa302c0  sw          $v1, 0x2C0($sp)
    ctx->pc = 0x29d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 3));
label_29d9c4:
    // 0x29d9c4: 0x8d24084c  lw          $a0, 0x84C($t1)
    ctx->pc = 0x29d9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 2124)));
label_29d9c8:
    // 0x29d9c8: 0xc0e3f1c  jal         func_38FC70
label_29d9cc:
    if (ctx->pc == 0x29D9CCu) {
        ctx->pc = 0x29D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9C8u;
        // 0x29d9cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D9D0u;
        goto label_29d9d0;
    }
    ctx->pc = 0x29D9C8u;
    SET_GPR_U32(ctx, 31, 0x29D9D0u);
    ctx->pc = 0x29D9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D9C8u;
    // 0x29d9cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x29D9C8u, 0x29D9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D9D0u;
label_29d9d0:
    // 0x29d9d0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x29d9d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d9d4:
    // 0x29d9d4: 0x12e0008b  beqz        $s7, . + 4 + (0x8B << 2)
label_29d9d8:
    if (ctx->pc == 0x29D9D8u) {
        ctx->pc = 0x29D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9D4u;
        // 0x29d9d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D9DCu;
        goto label_29d9dc;
    }
    ctx->pc = 0x29D9D4u;
    {
        const bool branch_taken_0x29d9d4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9D4u;
        // 0x29d9d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9d4) {
            ctx->pc = 0x29DC04u;
            goto label_29dc04;
        }
    }
    ctx->pc = 0x29D9DCu;
label_29d9dc:
    // 0x29d9dc: 0xc0e1a34  jal         func_3868D0
label_29d9e0:
    if (ctx->pc == 0x29D9E0u) {
        ctx->pc = 0x29D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9DCu;
        // 0x29d9e0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D9E4u;
        goto label_29d9e4;
    }
    ctx->pc = 0x29D9DCu;
    SET_GPR_U32(ctx, 31, 0x29D9E4u);
    ctx->pc = 0x29D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D9DCu;
    // 0x29d9e0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x29D9DCu, 0x29D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D9E4u;
label_29d9e4:
    // 0x29d9e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x29d9e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d9e8:
    // 0x29d9e8: 0xc087502  jal         func_21D408
label_29d9ec:
    if (ctx->pc == 0x29D9ECu) {
        ctx->pc = 0x29D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9E8u;
        // 0x29d9ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D9F0u;
        goto label_29d9f0;
    }
    ctx->pc = 0x29D9E8u;
    SET_GPR_U32(ctx, 31, 0x29D9F0u);
    ctx->pc = 0x29D9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D9E8u;
    // 0x29d9ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29D9E8u, 0x29D9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D9F0u;
label_29d9f0:
    // 0x29d9f0: 0x8c5e020c  lw          $fp, 0x20C($v0)
    ctx->pc = 0x29d9f0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_29d9f4:
    // 0x29d9f4: 0x7a820540  lq          $v0, 0x540($s4)
    ctx->pc = 0x29d9f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 1344)));
label_29d9f8:
    // 0x29d9f8: 0x7a830550  lq          $v1, 0x550($s4)
    ctx->pc = 0x29d9f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 1360)));
label_29d9fc:
    // 0x29d9fc: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x29d9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_29da00:
    // 0x29da00: 0x12e00080  beqz        $s7, . + 4 + (0x80 << 2)
label_29da04:
    if (ctx->pc == 0x29DA04u) {
        ctx->pc = 0x29DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA00u;
        // 0x29da04: 0x7fa30230  sq          $v1, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA08u;
        goto label_29da08;
    }
    ctx->pc = 0x29DA00u;
    {
        const bool branch_taken_0x29da00 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA00u;
        // 0x29da04: 0x7fa30230  sq          $v1, 0x230($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da00) {
            ctx->pc = 0x29DC04u;
            goto label_29dc04;
        }
    }
    ctx->pc = 0x29DA08u;
label_29da08:
    // 0x29da08: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x29da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_29da0c:
    // 0x29da0c: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x29da0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29da10:
    // 0x29da10: 0xafa202c4  sw          $v0, 0x2C4($sp)
    ctx->pc = 0x29da10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 2));
label_29da14:
    // 0x29da14: 0x0  nop
    ctx->pc = 0x29da14u;
    // NOP
label_29da18:
    // 0x29da18: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x29da18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_29da1c:
    // 0x29da1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29da20:
    // 0x29da20: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x29da20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_29da24:
    // 0x29da24: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x29da24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_29da28:
    // 0x29da28: 0x40f809  jalr        $v0
label_29da2c:
    if (ctx->pc == 0x29DA2Cu) {
        ctx->pc = 0x29DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA28u;
        // 0x29da2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA30u;
        goto label_29da30;
    }
    ctx->pc = 0x29DA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29DA30u);
        ctx->pc = 0x29DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA28u;
        // 0x29da2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DA28u, 0x29DA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DA30u;
label_29da30:
    // 0x29da30: 0x50400071  beql        $v0, $zero, . + 4 + (0x71 << 2)
label_29da34:
    if (ctx->pc == 0x29DA34u) {
        ctx->pc = 0x29DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA30u;
        // 0x29da34: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA38u;
        goto label_29da38;
    }
    ctx->pc = 0x29DA30u;
    {
        const bool branch_taken_0x29da30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29da30) {
            ctx->pc = 0x29DA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DA30u;
            // 0x29da34: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DBF8u;
            goto label_29dbf8;
        }
    }
    ctx->pc = 0x29DA38u;
label_29da38:
    // 0x29da38: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x29da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_29da3c:
    // 0x29da3c: 0x545e0007  bnel        $v0, $fp, . + 4 + (0x7 << 2)
label_29da40:
    if (ctx->pc == 0x29DA40u) {
        ctx->pc = 0x29DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA3Cu;
        // 0x29da40: 0x960300f8  lhu         $v1, 0xF8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA44u;
        goto label_29da44;
    }
    ctx->pc = 0x29DA3Cu;
    {
        const bool branch_taken_0x29da3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x29da3c) {
            ctx->pc = 0x29DA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DA3Cu;
            // 0x29da40: 0x960300f8  lhu         $v1, 0xF8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DA5Cu;
            goto label_29da5c;
        }
    }
    ctx->pc = 0x29DA44u;
label_29da44:
    // 0x29da44: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x29da44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_29da48:
    // 0x29da48: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x29da48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_29da4c:
    // 0x29da4c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x29da4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29da50:
    // 0x29da50: 0x54400069  bnel        $v0, $zero, . + 4 + (0x69 << 2)
label_29da54:
    if (ctx->pc == 0x29DA54u) {
        ctx->pc = 0x29DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA50u;
        // 0x29da54: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA58u;
        goto label_29da58;
    }
    ctx->pc = 0x29DA50u;
    {
        const bool branch_taken_0x29da50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29da50) {
            ctx->pc = 0x29DA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DA50u;
            // 0x29da54: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DBF8u;
            goto label_29dbf8;
        }
    }
    ctx->pc = 0x29DA58u;
label_29da58:
    // 0x29da58: 0x960300f8  lhu         $v1, 0xF8($s0)
    ctx->pc = 0x29da58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 248)));
label_29da5c:
    // 0x29da5c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x29da5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_29da60:
    // 0x29da60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29da64:
    if (ctx->pc == 0x29DA64u) {
        ctx->pc = 0x29DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA60u;
        // 0x29da64: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA68u;
        goto label_29da68;
    }
    ctx->pc = 0x29DA60u;
    {
        const bool branch_taken_0x29da60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA60u;
        // 0x29da64: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da60) {
            ctx->pc = 0x29DA70u;
            goto label_29da70;
        }
    }
    ctx->pc = 0x29DA68u;
label_29da68:
    // 0x29da68: 0x54400063  bnel        $v0, $zero, . + 4 + (0x63 << 2)
label_29da6c:
    if (ctx->pc == 0x29DA6Cu) {
        ctx->pc = 0x29DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA68u;
        // 0x29da6c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA70u;
        goto label_29da70;
    }
    ctx->pc = 0x29DA68u;
    {
        const bool branch_taken_0x29da68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29da68) {
            ctx->pc = 0x29DA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DA68u;
            // 0x29da6c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DBF8u;
            goto label_29dbf8;
        }
    }
    ctx->pc = 0x29DA70u;
label_29da70:
    // 0x29da70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29da70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29da74:
    // 0x29da74: 0x27b20240  addiu       $s2, $sp, 0x240
    ctx->pc = 0x29da74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_29da78:
    // 0x29da78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29da78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29da7c:
    // 0x29da7c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x29da7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_29da80:
    // 0x29da80: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x29da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_29da84:
    // 0x29da84: 0x40f809  jalr        $v0
label_29da88:
    if (ctx->pc == 0x29DA88u) {
        ctx->pc = 0x29DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA84u;
        // 0x29da88: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA8Cu;
        goto label_29da8c;
    }
    ctx->pc = 0x29DA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29DA8Cu);
        ctx->pc = 0x29DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA84u;
        // 0x29da88: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DA84u, 0x29DA8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DA8Cu;
label_29da8c:
    // 0x29da8c: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x29da8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_29da90:
    // 0x29da90: 0xc0cd8ec  jal         func_3363B0
label_29da94:
    if (ctx->pc == 0x29DA94u) {
        ctx->pc = 0x29DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA90u;
        // 0x29da94: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA98u;
        goto label_29da98;
    }
    ctx->pc = 0x29DA90u;
    SET_GPR_U32(ctx, 31, 0x29DA98u);
    ctx->pc = 0x29DA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DA90u;
    // 0x29da94: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x29DA90u, 0x29DA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DA98u;
label_29da98:
    // 0x29da98: 0xc7a00268  lwc1        $f0, 0x268($sp)
    ctx->pc = 0x29da98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29da9c:
    // 0x29da9c: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x29da9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_29daa0:
    // 0x29daa0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x29daa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_29daa4:
    // 0x29daa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29daa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29daa8:
    // 0x29daa8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x29daa8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_29daac:
    // 0x29daac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29daacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29dab0:
    // 0x29dab0: 0x0  nop
    ctx->pc = 0x29dab0u;
    // NOP
label_29dab4:
    // 0x29dab4: 0x45030050  bc1tl       . + 4 + (0x50 << 2)
label_29dab8:
    if (ctx->pc == 0x29DAB8u) {
        ctx->pc = 0x29DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAB4u;
        // 0x29dab8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DABCu;
        goto label_29dabc;
    }
    ctx->pc = 0x29DAB4u;
    {
        const bool branch_taken_0x29dab4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29dab4) {
            ctx->pc = 0x29DAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DAB4u;
            // 0x29dab8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DBF8u;
            goto label_29dbf8;
        }
    }
    ctx->pc = 0x29DABCu;
label_29dabc:
    // 0x29dabc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x29dabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_29dac0:
    // 0x29dac0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29dac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29dac4:
    // 0x29dac4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x29dac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29dac8:
    // 0x29dac8: 0x8fa202c4  lw          $v0, 0x2C4($sp)
    ctx->pc = 0x29dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_29dacc:
    // 0x29dacc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29daccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_29dad0:
    // 0x29dad0: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x29dad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_29dad4:
    // 0x29dad4: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x29dad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29dad8:
    // 0x29dad8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x29dad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29dadc:
    // 0x29dadc: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x29dadcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_29dae0:
    // 0x29dae0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x29dae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_29dae4:
    // 0x29dae4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x29dae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29dae8:
    // 0x29dae8: 0x0  nop
    ctx->pc = 0x29dae8u;
    // NOP
label_29daec:
    // 0x29daec: 0x45030042  bc1tl       . + 4 + (0x42 << 2)
label_29daf0:
    if (ctx->pc == 0x29DAF0u) {
        ctx->pc = 0x29DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAECu;
        // 0x29daf0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DAF4u;
        goto label_29daf4;
    }
    ctx->pc = 0x29DAECu;
    {
        const bool branch_taken_0x29daec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29daec) {
            ctx->pc = 0x29DAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DAECu;
            // 0x29daf0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DBF8u;
            goto label_29dbf8;
        }
    }
    ctx->pc = 0x29DAF4u;
label_29daf4:
    // 0x29daf4: 0x8fa302b4  lw          $v1, 0x2B4($sp)
    ctx->pc = 0x29daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_29daf8:
    // 0x29daf8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x29daf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29dafc:
    // 0x29dafc: 0x1473000e  bne         $v1, $s3, . + 4 + (0xE << 2)
label_29db00:
    if (ctx->pc == 0x29DB00u) {
        ctx->pc = 0x29DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAFCu;
        // 0x29db00: 0x8fa202bc  lw          $v0, 0x2BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB04u;
        goto label_29db04;
    }
    ctx->pc = 0x29DAFCu;
    {
        const bool branch_taken_0x29dafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x29DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAFCu;
        // 0x29db00: 0x8fa202bc  lw          $v0, 0x2BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dafc) {
            ctx->pc = 0x29DB38u;
            goto label_29db38;
        }
    }
    ctx->pc = 0x29DB04u;
label_29db04:
    // 0x29db04: 0xafb302b0  sw          $s3, 0x2B0($sp)
    ctx->pc = 0x29db04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 19));
label_29db08:
    // 0x29db08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29db08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29db0c:
    // 0x29db0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29db0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29db10:
    // 0x29db10: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x29db10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_29db14:
    // 0x29db14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29db14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29db18:
    // 0x29db18: 0xc0888dc  jal         func_222370
label_29db1c:
    if (ctx->pc == 0x29DB1Cu) {
        ctx->pc = 0x29DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB18u;
        // 0x29db1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB20u;
        goto label_29db20;
    }
    ctx->pc = 0x29DB18u;
    SET_GPR_U32(ctx, 31, 0x29DB20u);
    ctx->pc = 0x29DB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB18u;
    // 0x29db1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222370u, 0x29DB18u, 0x29DB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB20u;
label_29db20:
    // 0x29db20: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_29db24:
    if (ctx->pc == 0x29DB24u) {
        ctx->pc = 0x29DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB20u;
        // 0x29db24: 0x8fa302b0  lw          $v1, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB28u;
        goto label_29db28;
    }
    ctx->pc = 0x29DB20u;
    {
        const bool branch_taken_0x29db20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB20u;
        // 0x29db24: 0x8fa302b0  lw          $v1, 0x2B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db20) {
            ctx->pc = 0x29DBF4u;
            goto label_29dbf4;
        }
    }
    ctx->pc = 0x29DB28u;
label_29db28:
    // 0x29db28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29db28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29db2c:
    // 0x29db2c: 0x54620032  bnel        $v1, $v0, . + 4 + (0x32 << 2)
label_29db30:
    if (ctx->pc == 0x29DB30u) {
        ctx->pc = 0x29DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB2Cu;
        // 0x29db30: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB34u;
        goto label_29db34;
    }
    ctx->pc = 0x29DB2Cu;
    {
        const bool branch_taken_0x29db2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29db2c) {
            ctx->pc = 0x29DB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DB2Cu;
            // 0x29db30: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DBF8u;
            goto label_29dbf8;
        }
    }
    ctx->pc = 0x29DB34u;
label_29db34:
    // 0x29db34: 0x8fa202bc  lw          $v0, 0x2BC($sp)
    ctx->pc = 0x29db34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
label_29db38:
    // 0x29db38: 0x14530026  bne         $v0, $s3, . + 4 + (0x26 << 2)
label_29db3c:
    if (ctx->pc == 0x29DB3Cu) {
        ctx->pc = 0x29DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB38u;
        // 0x29db3c: 0x8fa302b8  lw          $v1, 0x2B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB40u;
        goto label_29db40;
    }
    ctx->pc = 0x29DB38u;
    {
        const bool branch_taken_0x29db38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x29DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB38u;
        // 0x29db3c: 0x8fa302b8  lw          $v1, 0x2B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29db38) {
            ctx->pc = 0x29DBD4u;
            goto label_29dbd4;
        }
    }
    ctx->pc = 0x29DB40u;
label_29db40:
    // 0x29db40: 0x7ba30240  lq          $v1, 0x240($sp)
    ctx->pc = 0x29db40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_29db44:
    // 0x29db44: 0x27b10270  addiu       $s1, $sp, 0x270
    ctx->pc = 0x29db44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_29db48:
    // 0x29db48: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x29db48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_29db4c:
    // 0x29db4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29db4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29db50:
    // 0x29db50: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29db50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29db54:
    // 0x29db54: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x29db54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_29db58:
    // 0x29db58: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x29db58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29db5c:
    // 0x29db5c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x29db5cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_29db60:
    // 0x29db60: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x29db60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_29db64:
    // 0x29db64: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x29db64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_29db68:
    // 0x29db68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29db68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29db6c:
    // 0x29db6c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x29db6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_29db70:
    // 0x29db70: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x29db70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29db74:
    // 0x29db74: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x29db74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29db78:
    // 0x29db78: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x29db78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_29db7c:
    // 0x29db7c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x29db7cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_29db80:
    // 0x29db80: 0x4a0003bf  vwaitq
    ctx->pc = 0x29db80u;
    // VWAITQ (Q already resolved in this runtime)
label_29db84:
    // 0x29db84: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x29db84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_29db88:
    // 0x29db88: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x29db88u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_29db8c:
    // 0x29db8c: 0x7fa20290  sq          $v0, 0x290($sp)
    ctx->pc = 0x29db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
label_29db90:
    // 0x29db90: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x29db90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
label_29db94:
    // 0x29db94: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x29db94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_29db98:
    // 0x29db98: 0x7fa30280  sq          $v1, 0x280($sp)
    ctx->pc = 0x29db98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 3));
label_29db9c:
    // 0x29db9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29db9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29dba0:
    // 0x29dba0: 0x7fa202a0  sq          $v0, 0x2A0($sp)
    ctx->pc = 0x29dba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 2));
label_29dba4:
    // 0x29dba4: 0xc094904  jal         func_252410
label_29dba8:
    if (ctx->pc == 0x29DBA8u) {
        ctx->pc = 0x29DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBA4u;
        // 0x29dba8: 0x7fa30290  sq          $v1, 0x290($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBACu;
        goto label_29dbac;
    }
    ctx->pc = 0x29DBA4u;
    SET_GPR_U32(ctx, 31, 0x29DBACu);
    ctx->pc = 0x29DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DBA4u;
    // 0x29dba8: 0x7fa30290  sq          $v1, 0x290($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x29DBA4u, 0x29DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBACu;
label_29dbac:
    // 0x29dbac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_29dbb0:
    if (ctx->pc == 0x29DBB0u) {
        ctx->pc = 0x29DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBACu;
        // 0x29dbb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBB4u;
        goto label_29dbb4;
    }
    ctx->pc = 0x29DBACu;
    {
        const bool branch_taken_0x29dbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBACu;
        // 0x29dbb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbac) {
            ctx->pc = 0x29DBF4u;
            goto label_29dbf4;
        }
    }
    ctx->pc = 0x29DBB4u;
label_29dbb4:
    // 0x29dbb4: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x29dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_29dbb8:
    // 0x29dbb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29dbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29dbbc:
    // 0x29dbbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29dbbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29dbc0:
    // 0x29dbc0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29dbc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29dbc4:
    // 0x29dbc4: 0xc09381e  jal         func_24E078
label_29dbc8:
    if (ctx->pc == 0x29DBC8u) {
        ctx->pc = 0x29DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBC4u;
        // 0x29dbc8: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBCCu;
        goto label_29dbcc;
    }
    ctx->pc = 0x29DBC4u;
    SET_GPR_U32(ctx, 31, 0x29DBCCu);
    ctx->pc = 0x29DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DBC4u;
    // 0x29dbc8: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x29DBC4u, 0x29DBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBCCu;
label_29dbcc:
    // 0x29dbcc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_29dbd0:
    if (ctx->pc == 0x29DBD0u) {
        ctx->pc = 0x29DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBCCu;
        // 0x29dbd0: 0x8fa302b8  lw          $v1, 0x2B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBD4u;
        goto label_29dbd4;
    }
    ctx->pc = 0x29DBCCu;
    {
        const bool branch_taken_0x29dbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBCCu;
        // 0x29dbd0: 0x8fa302b8  lw          $v1, 0x2B8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbcc) {
            ctx->pc = 0x29DBF4u;
            goto label_29dbf4;
        }
    }
    ctx->pc = 0x29DBD4u;
label_29dbd4:
    // 0x29dbd4: 0x1473000c  bne         $v1, $s3, . + 4 + (0xC << 2)
label_29dbd8:
    if (ctx->pc == 0x29DBD8u) {
        ctx->pc = 0x29DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBD4u;
        // 0x29dbd8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBDCu;
        goto label_29dbdc;
    }
    ctx->pc = 0x29DBD4u;
    {
        const bool branch_taken_0x29dbd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x29DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBD4u;
        // 0x29dbd8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbd4) {
            ctx->pc = 0x29DC08u;
            goto label_29dc08;
        }
    }
    ctx->pc = 0x29DBDCu;
label_29dbdc:
    // 0x29dbdc: 0xae1e00ec  sw          $fp, 0xEC($s0)
    ctx->pc = 0x29dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 30));
label_29dbe0:
    // 0x29dbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29dbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29dbe4:
    // 0x29dbe4: 0xc0e3d76  jal         func_38F5D8
label_29dbe8:
    if (ctx->pc == 0x29DBE8u) {
        ctx->pc = 0x29DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBE4u;
        // 0x29dbe8: 0x24051b58  addiu       $a1, $zero, 0x1B58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBECu;
        goto label_29dbec;
    }
    ctx->pc = 0x29DBE4u;
    SET_GPR_U32(ctx, 31, 0x29DBECu);
    ctx->pc = 0x29DBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DBE4u;
    // 0x29dbe8: 0x24051b58  addiu       $a1, $zero, 0x1B58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F5D8u, 0x29DBE4u, 0x29DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBECu;
label_29dbec:
    // 0x29dbec: 0x10000006  b           . + 4 + (0x6 << 2)
label_29dbf0:
    if (ctx->pc == 0x29DBF0u) {
        ctx->pc = 0x29DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBECu;
        // 0x29dbf0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DBF4u;
        goto label_29dbf4;
    }
    ctx->pc = 0x29DBECu;
    {
        const bool branch_taken_0x29dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBECu;
        // 0x29dbf0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbec) {
            ctx->pc = 0x29DC08u;
            goto label_29dc08;
        }
    }
    ctx->pc = 0x29DBF4u;
label_29dbf4:
    // 0x29dbf4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x29dbf4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_29dbf8:
    // 0x29dbf8: 0x2d7102b  sltu        $v0, $s6, $s7
    ctx->pc = 0x29dbf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_29dbfc:
    // 0x29dbfc: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
label_29dc00:
    if (ctx->pc == 0x29DC00u) {
        ctx->pc = 0x29DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBFCu;
        // 0x29dc00: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC04u;
        goto label_29dc04;
    }
    ctx->pc = 0x29DBFCu;
    {
        const bool branch_taken_0x29dbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DBFCu;
        // 0x29dc00: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbfc) {
            ctx->pc = 0x29DA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29da18;
        }
    }
    ctx->pc = 0x29DC04u;
label_29dc04:
    // 0x29dc04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29dc04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29dc08:
    // 0x29dc08: 0x7bb00360  lq          $s0, 0x360($sp)
    ctx->pc = 0x29dc08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_29dc0c:
    // 0x29dc0c: 0x7bb10350  lq          $s1, 0x350($sp)
    ctx->pc = 0x29dc0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_29dc10:
    // 0x29dc10: 0x7bb20340  lq          $s2, 0x340($sp)
    ctx->pc = 0x29dc10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 832)));
label_29dc14:
    // 0x29dc14: 0x7bb30330  lq          $s3, 0x330($sp)
    ctx->pc = 0x29dc14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_29dc18:
    // 0x29dc18: 0x7bb40320  lq          $s4, 0x320($sp)
    ctx->pc = 0x29dc18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_29dc1c:
    // 0x29dc1c: 0x7bb50310  lq          $s5, 0x310($sp)
    ctx->pc = 0x29dc1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_29dc20:
    // 0x29dc20: 0x7bb60300  lq          $s6, 0x300($sp)
    ctx->pc = 0x29dc20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_29dc24:
    // 0x29dc24: 0x7bb702f0  lq          $s7, 0x2F0($sp)
    ctx->pc = 0x29dc24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_29dc28:
    // 0x29dc28: 0x7bbe02e0  lq          $fp, 0x2E0($sp)
    ctx->pc = 0x29dc28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_29dc2c:
    // 0x29dc2c: 0xdfbf02d0  ld          $ra, 0x2D0($sp)
    ctx->pc = 0x29dc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_29dc30:
    // 0x29dc30: 0x3e00008  jr          $ra
label_29dc34:
    if (ctx->pc == 0x29DC34u) {
        ctx->pc = 0x29DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC30u;
        // 0x29dc34: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DC38u;
        goto label_fallthrough_0x29dc30;
    }
    ctx->pc = 0x29DC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC30u;
        // 0x29dc34: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29dc30:
    ctx->pc = 0x29DC38u;
}
