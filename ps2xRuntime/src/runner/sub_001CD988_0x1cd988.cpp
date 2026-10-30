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

// Function: sub_001CD988
// Address: 0x1cd988 - 0x1cdc20
void sub_001CD988_0x1cd988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD988_0x1cd988");
#endif

    switch (ctx->pc) {
        case 0x1cd988u: goto label_1cd988;
        case 0x1cd98cu: goto label_1cd98c;
        case 0x1cd990u: goto label_1cd990;
        case 0x1cd994u: goto label_1cd994;
        case 0x1cd998u: goto label_1cd998;
        case 0x1cd99cu: goto label_1cd99c;
        case 0x1cd9a0u: goto label_1cd9a0;
        case 0x1cd9a4u: goto label_1cd9a4;
        case 0x1cd9a8u: goto label_1cd9a8;
        case 0x1cd9acu: goto label_1cd9ac;
        case 0x1cd9b0u: goto label_1cd9b0;
        case 0x1cd9b4u: goto label_1cd9b4;
        case 0x1cd9b8u: goto label_1cd9b8;
        case 0x1cd9bcu: goto label_1cd9bc;
        case 0x1cd9c0u: goto label_1cd9c0;
        case 0x1cd9c4u: goto label_1cd9c4;
        case 0x1cd9c8u: goto label_1cd9c8;
        case 0x1cd9ccu: goto label_1cd9cc;
        case 0x1cd9d0u: goto label_1cd9d0;
        case 0x1cd9d4u: goto label_1cd9d4;
        case 0x1cd9d8u: goto label_1cd9d8;
        case 0x1cd9dcu: goto label_1cd9dc;
        case 0x1cd9e0u: goto label_1cd9e0;
        case 0x1cd9e4u: goto label_1cd9e4;
        case 0x1cd9e8u: goto label_1cd9e8;
        case 0x1cd9ecu: goto label_1cd9ec;
        case 0x1cd9f0u: goto label_1cd9f0;
        case 0x1cd9f4u: goto label_1cd9f4;
        case 0x1cd9f8u: goto label_1cd9f8;
        case 0x1cd9fcu: goto label_1cd9fc;
        case 0x1cda00u: goto label_1cda00;
        case 0x1cda04u: goto label_1cda04;
        case 0x1cda08u: goto label_1cda08;
        case 0x1cda0cu: goto label_1cda0c;
        case 0x1cda10u: goto label_1cda10;
        case 0x1cda14u: goto label_1cda14;
        case 0x1cda18u: goto label_1cda18;
        case 0x1cda1cu: goto label_1cda1c;
        case 0x1cda20u: goto label_1cda20;
        case 0x1cda24u: goto label_1cda24;
        case 0x1cda28u: goto label_1cda28;
        case 0x1cda2cu: goto label_1cda2c;
        case 0x1cda30u: goto label_1cda30;
        case 0x1cda34u: goto label_1cda34;
        case 0x1cda38u: goto label_1cda38;
        case 0x1cda3cu: goto label_1cda3c;
        case 0x1cda40u: goto label_1cda40;
        case 0x1cda44u: goto label_1cda44;
        case 0x1cda48u: goto label_1cda48;
        case 0x1cda4cu: goto label_1cda4c;
        case 0x1cda50u: goto label_1cda50;
        case 0x1cda54u: goto label_1cda54;
        case 0x1cda58u: goto label_1cda58;
        case 0x1cda5cu: goto label_1cda5c;
        case 0x1cda60u: goto label_1cda60;
        case 0x1cda64u: goto label_1cda64;
        case 0x1cda68u: goto label_1cda68;
        case 0x1cda6cu: goto label_1cda6c;
        case 0x1cda70u: goto label_1cda70;
        case 0x1cda74u: goto label_1cda74;
        case 0x1cda78u: goto label_1cda78;
        case 0x1cda7cu: goto label_1cda7c;
        case 0x1cda80u: goto label_1cda80;
        case 0x1cda84u: goto label_1cda84;
        case 0x1cda88u: goto label_1cda88;
        case 0x1cda8cu: goto label_1cda8c;
        case 0x1cda90u: goto label_1cda90;
        case 0x1cda94u: goto label_1cda94;
        case 0x1cda98u: goto label_1cda98;
        case 0x1cda9cu: goto label_1cda9c;
        case 0x1cdaa0u: goto label_1cdaa0;
        case 0x1cdaa4u: goto label_1cdaa4;
        case 0x1cdaa8u: goto label_1cdaa8;
        case 0x1cdaacu: goto label_1cdaac;
        case 0x1cdab0u: goto label_1cdab0;
        case 0x1cdab4u: goto label_1cdab4;
        case 0x1cdab8u: goto label_1cdab8;
        case 0x1cdabcu: goto label_1cdabc;
        case 0x1cdac0u: goto label_1cdac0;
        case 0x1cdac4u: goto label_1cdac4;
        case 0x1cdac8u: goto label_1cdac8;
        case 0x1cdaccu: goto label_1cdacc;
        case 0x1cdad0u: goto label_1cdad0;
        case 0x1cdad4u: goto label_1cdad4;
        case 0x1cdad8u: goto label_1cdad8;
        case 0x1cdadcu: goto label_1cdadc;
        case 0x1cdae0u: goto label_1cdae0;
        case 0x1cdae4u: goto label_1cdae4;
        case 0x1cdae8u: goto label_1cdae8;
        case 0x1cdaecu: goto label_1cdaec;
        case 0x1cdaf0u: goto label_1cdaf0;
        case 0x1cdaf4u: goto label_1cdaf4;
        case 0x1cdaf8u: goto label_1cdaf8;
        case 0x1cdafcu: goto label_1cdafc;
        case 0x1cdb00u: goto label_1cdb00;
        case 0x1cdb04u: goto label_1cdb04;
        case 0x1cdb08u: goto label_1cdb08;
        case 0x1cdb0cu: goto label_1cdb0c;
        case 0x1cdb10u: goto label_1cdb10;
        case 0x1cdb14u: goto label_1cdb14;
        case 0x1cdb18u: goto label_1cdb18;
        case 0x1cdb1cu: goto label_1cdb1c;
        case 0x1cdb20u: goto label_1cdb20;
        case 0x1cdb24u: goto label_1cdb24;
        case 0x1cdb28u: goto label_1cdb28;
        case 0x1cdb2cu: goto label_1cdb2c;
        case 0x1cdb30u: goto label_1cdb30;
        case 0x1cdb34u: goto label_1cdb34;
        case 0x1cdb38u: goto label_1cdb38;
        case 0x1cdb3cu: goto label_1cdb3c;
        case 0x1cdb40u: goto label_1cdb40;
        case 0x1cdb44u: goto label_1cdb44;
        case 0x1cdb48u: goto label_1cdb48;
        case 0x1cdb4cu: goto label_1cdb4c;
        case 0x1cdb50u: goto label_1cdb50;
        case 0x1cdb54u: goto label_1cdb54;
        case 0x1cdb58u: goto label_1cdb58;
        case 0x1cdb5cu: goto label_1cdb5c;
        case 0x1cdb60u: goto label_1cdb60;
        case 0x1cdb64u: goto label_1cdb64;
        case 0x1cdb68u: goto label_1cdb68;
        case 0x1cdb6cu: goto label_1cdb6c;
        case 0x1cdb70u: goto label_1cdb70;
        case 0x1cdb74u: goto label_1cdb74;
        case 0x1cdb78u: goto label_1cdb78;
        case 0x1cdb7cu: goto label_1cdb7c;
        case 0x1cdb80u: goto label_1cdb80;
        case 0x1cdb84u: goto label_1cdb84;
        case 0x1cdb88u: goto label_1cdb88;
        case 0x1cdb8cu: goto label_1cdb8c;
        case 0x1cdb90u: goto label_1cdb90;
        case 0x1cdb94u: goto label_1cdb94;
        case 0x1cdb98u: goto label_1cdb98;
        case 0x1cdb9cu: goto label_1cdb9c;
        case 0x1cdba0u: goto label_1cdba0;
        case 0x1cdba4u: goto label_1cdba4;
        case 0x1cdba8u: goto label_1cdba8;
        case 0x1cdbacu: goto label_1cdbac;
        case 0x1cdbb0u: goto label_1cdbb0;
        case 0x1cdbb4u: goto label_1cdbb4;
        case 0x1cdbb8u: goto label_1cdbb8;
        case 0x1cdbbcu: goto label_1cdbbc;
        case 0x1cdbc0u: goto label_1cdbc0;
        case 0x1cdbc4u: goto label_1cdbc4;
        case 0x1cdbc8u: goto label_1cdbc8;
        case 0x1cdbccu: goto label_1cdbcc;
        case 0x1cdbd0u: goto label_1cdbd0;
        case 0x1cdbd4u: goto label_1cdbd4;
        case 0x1cdbd8u: goto label_1cdbd8;
        case 0x1cdbdcu: goto label_1cdbdc;
        case 0x1cdbe0u: goto label_1cdbe0;
        case 0x1cdbe4u: goto label_1cdbe4;
        case 0x1cdbe8u: goto label_1cdbe8;
        case 0x1cdbecu: goto label_1cdbec;
        case 0x1cdbf0u: goto label_1cdbf0;
        case 0x1cdbf4u: goto label_1cdbf4;
        case 0x1cdbf8u: goto label_1cdbf8;
        case 0x1cdbfcu: goto label_1cdbfc;
        case 0x1cdc00u: goto label_1cdc00;
        case 0x1cdc04u: goto label_1cdc04;
        case 0x1cdc08u: goto label_1cdc08;
        case 0x1cdc0cu: goto label_1cdc0c;
        case 0x1cdc10u: goto label_1cdc10;
        case 0x1cdc14u: goto label_1cdc14;
        case 0x1cdc18u: goto label_1cdc18;
        case 0x1cdc1cu: goto label_1cdc1c;
        default: break;
    }

    ctx->pc = 0x1cd988u;

label_1cd988:
    // 0x1cd988: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1cd988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1cd98c:
    // 0x1cd98c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cd98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cd990:
    // 0x1cd990: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1cd990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1cd994:
    // 0x1cd994: 0x2442eb50  addiu       $v0, $v0, -0x14B0
    ctx->pc = 0x1cd994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962000));
label_1cd998:
    // 0x1cd998: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1cd998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1cd99c:
    // 0x1cd99c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd9a0:
    // 0x1cd9a0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1cd9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1cd9a4:
    // 0x1cd9a4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1cd9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1cd9a8:
    // 0x1cd9a8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1cd9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1cd9ac:
    // 0x1cd9ac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1cd9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1cd9b0:
    // 0x1cd9b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cd9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1cd9b4:
    // 0x1cd9b4: 0xae2203a4  sw          $v0, 0x3A4($s1)
    ctx->pc = 0x1cd9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 2));
label_1cd9b8:
    // 0x1cd9b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cd9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd9bc:
    // 0x1cd9bc: 0x8c70d310  lw          $s0, -0x2CF0($v1)
    ctx->pc = 0x1cd9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955792)));
label_1cd9c0:
    // 0x1cd9c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1cd9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd9c4:
    // 0x1cd9c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1cd9c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1cd9c8:
    // 0x1cd9c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cd9c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd9cc:
    // 0x1cd9cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cd9ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd9d0:
    // 0x1cd9d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd9d4:
    // 0x1cd9d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cd9d8:
    // 0x1cd9d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1cd9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cd9dc:
    // 0x1cd9dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cd9dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd9e0:
    // 0x1cd9e0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1cd9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1cd9e4:
    // 0x1cd9e4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1cd9e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd9e8:
    // 0x1cd9e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cd9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1cd9ec:
    // 0x1cd9ec: 0xc06e424  jal         func_1B9090
label_1cd9f0:
    if (ctx->pc == 0x1CD9F0u) {
        ctx->pc = 0x1CD9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9ECu;
        // 0x1cd9f0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD9F4u;
        goto label_1cd9f4;
    }
    ctx->pc = 0x1CD9ECu;
    SET_GPR_U32(ctx, 31, 0x1CD9F4u);
    ctx->pc = 0x1CD9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9ECu;
    // 0x1cd9f0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1CD9ECu, 0x1CD9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9F4u;
label_1cd9f4:
    // 0x1cd9f4: 0x8e2c03a4  lw          $t4, 0x3A4($s1)
    ctx->pc = 0x1cd9f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
label_1cd9f8:
    // 0x1cd9f8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1cd9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cd9fc:
    // 0x1cd9fc: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1cd9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1cda00:
    // 0x1cda00: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1cda00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1cda04:
    // 0x1cda04: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1cda04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cda08:
    // 0x1cda08: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1cda08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1cda0c:
    // 0x1cda0c: 0x79820020  lq          $v0, 0x20($t4)
    ctx->pc = 0x1cda0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 32)));
label_1cda10:
    // 0x1cda10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cda10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cda14:
    // 0x1cda14: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1cda14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1cda18:
    // 0x1cda18: 0x262402a0  addiu       $a0, $s1, 0x2A0
    ctx->pc = 0x1cda18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
label_1cda1c:
    // 0x1cda1c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1cda1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1cda20:
    // 0x1cda20: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1cda20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cda24:
    // 0x1cda24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cda24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1cda28:
    // 0x1cda28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cda28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cda2c:
    // 0x1cda2c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cda2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1cda30:
    // 0x1cda30: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1cda30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cda34:
    // 0x1cda34: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x1cda34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1cda38:
    // 0x1cda38: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cda38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cda3c:
    // 0x1cda3c: 0xc06876e  jal         func_1A1DB8
label_1cda40:
    if (ctx->pc == 0x1CDA40u) {
        ctx->pc = 0x1CDA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA3Cu;
        // 0x1cda40: 0xc58c0030  lwc1        $f12, 0x30($t4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA44u;
        goto label_1cda44;
    }
    ctx->pc = 0x1CDA3Cu;
    SET_GPR_U32(ctx, 31, 0x1CDA44u);
    ctx->pc = 0x1CDA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDA3Cu;
    // 0x1cda40: 0xc58c0030  lwc1        $f12, 0x30($t4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1CDA3Cu, 0x1CDA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA44u;
label_1cda44:
    // 0x1cda44: 0x8e4a27e4  lw          $t2, 0x27E4($s2)
    ctx->pc = 0x1cda44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1cda48:
    // 0x1cda48: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1cda48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1cda4c:
    // 0x1cda4c: 0x245359e8  addiu       $s3, $v0, 0x59E8
    ctx->pc = 0x1cda4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 23016));
label_1cda50:
    // 0x1cda50: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1cda50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1cda54:
    // 0x1cda54: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1cda54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1cda58:
    // 0x1cda58: 0x24a559d0  addiu       $a1, $a1, 0x59D0
    ctx->pc = 0x1cda58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22992));
label_1cda5c:
    // 0x1cda5c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1cda5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cda60:
    // 0x1cda60: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1cda60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cda64:
    // 0x1cda64: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1cda64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1cda68:
    // 0x1cda68: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1cda68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cda6c:
    // 0x1cda6c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1cda6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1cda70:
    // 0x1cda70: 0x2409006c  addiu       $t1, $zero, 0x6C
    ctx->pc = 0x1cda70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1cda74:
    // 0x1cda74: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1cda74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1cda78:
    // 0x1cda78: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cda78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cda7c:
    // 0x1cda7c: 0x40f809  jalr        $v0
label_1cda80:
    if (ctx->pc == 0x1CDA80u) {
        ctx->pc = 0x1CDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA7Cu;
        // 0x1cda80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA84u;
        goto label_1cda84;
    }
    ctx->pc = 0x1CDA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CDA84u);
        ctx->pc = 0x1CDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA7Cu;
        // 0x1cda80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDA7Cu, 0x1CDA84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDA84u;
label_1cda84:
    // 0x1cda84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cda84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cda88:
    // 0x1cda88: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1cda8c:
    if (ctx->pc == 0x1CDA8Cu) {
        ctx->pc = 0x1CDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA88u;
        // 0x1cda8c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDA90u;
        goto label_1cda90;
    }
    ctx->pc = 0x1CDA88u;
    {
        const bool branch_taken_0x1cda88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA88u;
        // 0x1cda8c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda88) {
            ctx->pc = 0x1CDAE0u;
            goto label_1cdae0;
        }
    }
    ctx->pc = 0x1CDA90u;
label_1cda90:
    // 0x1cda90: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1cda90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1cda94:
    // 0x1cda94: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x1cda94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1cda98:
    // 0x1cda98: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1cda98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1cda9c:
    // 0x1cda9c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1cda9cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1cdaa0:
    // 0x1cdaa0: 0x24a55990  addiu       $a1, $a1, 0x5990
    ctx->pc = 0x1cdaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22928));
label_1cdaa4:
    // 0x1cdaa4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1cdaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1cdaa8:
    // 0x1cdaa8: 0x25085998  addiu       $t0, $t0, 0x5998
    ctx->pc = 0x1cdaa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22936));
label_1cdaac:
    // 0x1cdaac: 0x254a59c0  addiu       $t2, $t2, 0x59C0
    ctx->pc = 0x1cdaacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 22976));
label_1cdab0:
    // 0x1cdab0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1cdab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1cdab4:
    // 0x1cdab4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1cdab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1cdab8:
    // 0x1cdab8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1cdab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cdabc:
    // 0x1cdabc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1cdabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1cdac0:
    // 0x1cdac0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1cdac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1cdac4:
    // 0x1cdac4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1cdac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1cdac8:
    // 0x1cdac8: 0x40f809  jalr        $v0
label_1cdacc:
    if (ctx->pc == 0x1CDACCu) {
        ctx->pc = 0x1CDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAC8u;
        // 0x1cdacc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDAD0u;
        goto label_1cdad0;
    }
    ctx->pc = 0x1CDAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CDAD0u);
        ctx->pc = 0x1CDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAC8u;
        // 0x1cdacc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDAC8u, 0x1CDAD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDAD0u;
label_1cdad0:
    // 0x1cdad0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1cdad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1cdad4:
    // 0x1cdad4: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x1cdad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
label_1cdad8:
    // 0x1cdad8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cdad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1cdadc:
    // 0x1cdadc: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x1cdadcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
label_1cdae0:
    // 0x1cdae0: 0xae300290  sw          $s0, 0x290($s1)
    ctx->pc = 0x1cdae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 16));
label_1cdae4:
    // 0x1cdae4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1cdae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1cdae8:
    // 0x1cdae8: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1cdae8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1cdaec:
    // 0x1cdaec: 0x24a55a40  addiu       $a1, $a1, 0x5A40
    ctx->pc = 0x1cdaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23104));
label_1cdaf0:
    // 0x1cdaf0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1cdaf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cdaf4:
    // 0x1cdaf4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1cdaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cdaf8:
    // 0x1cdaf8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1cdaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1cdafc:
    // 0x1cdafc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1cdafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cdb00:
    // 0x1cdb00: 0x2409006d  addiu       $t1, $zero, 0x6D
    ctx->pc = 0x1cdb00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_1cdb04:
    // 0x1cdb04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cdb04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdb08:
    // 0x1cdb08: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1cdb08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1cdb0c:
    // 0x1cdb0c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cdb0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdb10:
    // 0x1cdb10: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1cdb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1cdb14:
    // 0x1cdb14: 0x40f809  jalr        $v0
label_1cdb18:
    if (ctx->pc == 0x1CDB18u) {
        ctx->pc = 0x1CDB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB14u;
        // 0x1cdb18: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDB1Cu;
        goto label_1cdb1c;
    }
    ctx->pc = 0x1CDB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CDB1Cu);
        ctx->pc = 0x1CDB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB14u;
        // 0x1cdb18: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB14u, 0x1CDB1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDB1Cu;
label_1cdb1c:
    // 0x1cdb1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cdb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cdb20:
    // 0x1cdb20: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1cdb24:
    if (ctx->pc == 0x1CDB24u) {
        ctx->pc = 0x1CDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB20u;
        // 0x1cdb24: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDB28u;
        goto label_1cdb28;
    }
    ctx->pc = 0x1CDB20u;
    {
        const bool branch_taken_0x1cdb20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB20u;
        // 0x1cdb24: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb20) {
            ctx->pc = 0x1CDB78u;
            goto label_1cdb78;
        }
    }
    ctx->pc = 0x1CDB28u;
label_1cdb28:
    // 0x1cdb28: 0x8e4b27e4  lw          $t3, 0x27E4($s2)
    ctx->pc = 0x1cdb28u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1cdb2c:
    // 0x1cdb2c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1cdb2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1cdb30:
    // 0x1cdb30: 0x24a55a10  addiu       $a1, $a1, 0x5A10
    ctx->pc = 0x1cdb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23056));
label_1cdb34:
    // 0x1cdb34: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1cdb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1cdb38:
    // 0x1cdb38: 0x25085a20  addiu       $t0, $t0, 0x5A20
    ctx->pc = 0x1cdb38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23072));
label_1cdb3c:
    // 0x1cdb3c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1cdb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1cdb40:
    // 0x1cdb40: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1cdb40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cdb44:
    // 0x1cdb44: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1cdb44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1cdb48:
    // 0x1cdb48: 0x24090033  addiu       $t1, $zero, 0x33
    ctx->pc = 0x1cdb48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1cdb4c:
    // 0x1cdb4c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1cdb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1cdb50:
    // 0x1cdb50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cdb50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdb54:
    // 0x1cdb54: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1cdb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1cdb58:
    // 0x1cdb58: 0x40f809  jalr        $v0
label_1cdb5c:
    if (ctx->pc == 0x1CDB5Cu) {
        ctx->pc = 0x1CDB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB58u;
        // 0x1cdb5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDB60u;
        goto label_1cdb60;
    }
    ctx->pc = 0x1CDB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CDB60u);
        ctx->pc = 0x1CDB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB58u;
        // 0x1cdb5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB58u, 0x1CDB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDB60u;
label_1cdb60:
    // 0x1cdb60: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cdb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cdb64:
    // 0x1cdb64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cdb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cdb68:
    // 0x1cdb68: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1cdb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1cdb6c:
    // 0x1cdb6c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1cdb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1cdb70:
    // 0x1cdb70: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1cdb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1cdb74:
    // 0x1cdb74: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1cdb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1cdb78:
    // 0x1cdb78: 0xae300294  sw          $s0, 0x294($s1)
    ctx->pc = 0x1cdb78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 16));
label_1cdb7c:
    // 0x1cdb7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdb7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdb80:
    // 0x1cdb80: 0x262701f0  addiu       $a3, $s1, 0x1F0
    ctx->pc = 0x1cdb80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_1cdb84:
    // 0x1cdb84: 0x0  nop
    ctx->pc = 0x1cdb84u;
    // NOP
label_1cdb88:
    // 0x1cdb88: 0x8e260294  lw          $a2, 0x294($s1)
    ctx->pc = 0x1cdb88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
label_1cdb8c:
    // 0x1cdb8c: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x1cdb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1cdb90:
    // 0x1cdb90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1cdb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cdb94:
    // 0x1cdb94: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cdb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cdb98:
    // 0x1cdb98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cdb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cdb9c:
    // 0x1cdb9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cdb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cdba0:
    // 0x1cdba0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1cdba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_1cdba4:
    // 0x1cdba4: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x1cdba4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
label_1cdba8:
    // 0x1cdba8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1cdba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1cdbac:
    // 0x1cdbac: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x1cdbacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1cdbb0:
    // 0x1cdbb0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1cdbb4:
    if (ctx->pc == 0x1CDBB4u) {
        ctx->pc = 0x1CDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBB0u;
        // 0x1cdbb4: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBB8u;
        goto label_1cdbb8;
    }
    ctx->pc = 0x1CDBB0u;
    {
        const bool branch_taken_0x1cdbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdbb0) {
            ctx->pc = 0x1CDBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDBB0u;
            // 0x1cdbb4: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDBD0u;
            goto label_1cdbd0;
        }
    }
    ctx->pc = 0x1CDBB8u;
label_1cdbb8:
    // 0x1cdbb8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1cdbb8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cdbbc:
    // 0x1cdbbc: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_1cdbc0:
    if (ctx->pc == 0x1CDBC0u) {
        ctx->pc = 0x1CDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBBCu;
        // 0x1cdbc0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBC4u;
        goto label_1cdbc4;
    }
    ctx->pc = 0x1CDBBCu;
    {
        const bool branch_taken_0x1cdbbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdbbc) {
            ctx->pc = 0x1CDBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDBBCu;
            // 0x1cdbc0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDBC4u;
            goto label_1cdbc4;
        }
    }
    ctx->pc = 0x1CDBC4u;
label_1cdbc4:
    // 0x1cdbc4: 0x1010  mfhi        $v0
    ctx->pc = 0x1cdbc4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cdbc8:
    // 0x1cdbc8: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x1cdbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_1cdbcc:
    // 0x1cdbcc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1cdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1cdbd0:
    // 0x1cdbd0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1cdbd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1cdbd4:
    // 0x1cdbd4: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1cdbd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1cdbd8:
    // 0x1cdbd8: 0x2d030014  sltiu       $v1, $t0, 0x14
    ctx->pc = 0x1cdbd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_1cdbdc:
    // 0x1cdbdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cdbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cdbe0:
    // 0x1cdbe0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_1cdbe4:
    if (ctx->pc == 0x1CDBE4u) {
        ctx->pc = 0x1CDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBE0u;
        // 0x1cdbe4: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBE8u;
        goto label_1cdbe8;
    }
    ctx->pc = 0x1CDBE0u;
    {
        const bool branch_taken_0x1cdbe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBE0u;
        // 0x1cdbe4: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbe0) {
            ctx->pc = 0x1CDB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdb88;
        }
    }
    ctx->pc = 0x1CDBE8u;
label_1cdbe8:
    // 0x1cdbe8: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x1cdbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
label_1cdbec:
    // 0x1cdbec: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1cdbecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1cdbf0:
    // 0x1cdbf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cdbf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cdbf4:
    // 0x1cdbf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cdbf8:
    // 0x1cdbf8: 0xc06ece4  jal         func_1BB390
label_1cdbfc:
    if (ctx->pc == 0x1CDBFCu) {
        ctx->pc = 0x1CDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBF8u;
        // 0x1cdbfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC00u;
        goto label_1cdc00;
    }
    ctx->pc = 0x1CDBF8u;
    SET_GPR_U32(ctx, 31, 0x1CDC00u);
    ctx->pc = 0x1CDBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBF8u;
    // 0x1cdbfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1CDBF8u, 0x1CDC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC00u;
label_1cdc00:
    // 0x1cdc00: 0xa22003ac  sb          $zero, 0x3AC($s1)
    ctx->pc = 0x1cdc00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 940), (uint8_t)GPR_U32(ctx, 0));
label_1cdc04:
    // 0x1cdc04: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1cdc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cdc08:
    // 0x1cdc08: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1cdc08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cdc0c:
    // 0x1cdc0c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1cdc0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cdc10:
    // 0x1cdc10: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1cdc10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cdc14:
    // 0x1cdc14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cdc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cdc18:
    // 0x1cdc18: 0x3e00008  jr          $ra
label_1cdc1c:
    if (ctx->pc == 0x1CDC1Cu) {
        ctx->pc = 0x1CDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC18u;
        // 0x1cdc1c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC20u;
        goto label_fallthrough_0x1cdc18;
    }
    ctx->pc = 0x1CDC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC18u;
        // 0x1cdc1c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cdc18:
    ctx->pc = 0x1CDC20u;
}
