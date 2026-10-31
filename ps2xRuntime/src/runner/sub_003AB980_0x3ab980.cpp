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

// Function: sub_003AB980
// Address: 0x3ab980 - 0x3abd00
void sub_003AB980_0x3ab980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB980_0x3ab980");
#endif

    switch (ctx->pc) {
        case 0x3ab980u: goto label_3ab980;
        case 0x3ab984u: goto label_3ab984;
        case 0x3ab988u: goto label_3ab988;
        case 0x3ab98cu: goto label_3ab98c;
        case 0x3ab990u: goto label_3ab990;
        case 0x3ab994u: goto label_3ab994;
        case 0x3ab998u: goto label_3ab998;
        case 0x3ab99cu: goto label_3ab99c;
        case 0x3ab9a0u: goto label_3ab9a0;
        case 0x3ab9a4u: goto label_3ab9a4;
        case 0x3ab9a8u: goto label_3ab9a8;
        case 0x3ab9acu: goto label_3ab9ac;
        case 0x3ab9b0u: goto label_3ab9b0;
        case 0x3ab9b4u: goto label_3ab9b4;
        case 0x3ab9b8u: goto label_3ab9b8;
        case 0x3ab9bcu: goto label_3ab9bc;
        case 0x3ab9c0u: goto label_3ab9c0;
        case 0x3ab9c4u: goto label_3ab9c4;
        case 0x3ab9c8u: goto label_3ab9c8;
        case 0x3ab9ccu: goto label_3ab9cc;
        case 0x3ab9d0u: goto label_3ab9d0;
        case 0x3ab9d4u: goto label_3ab9d4;
        case 0x3ab9d8u: goto label_3ab9d8;
        case 0x3ab9dcu: goto label_3ab9dc;
        case 0x3ab9e0u: goto label_3ab9e0;
        case 0x3ab9e4u: goto label_3ab9e4;
        case 0x3ab9e8u: goto label_3ab9e8;
        case 0x3ab9ecu: goto label_3ab9ec;
        case 0x3ab9f0u: goto label_3ab9f0;
        case 0x3ab9f4u: goto label_3ab9f4;
        case 0x3ab9f8u: goto label_3ab9f8;
        case 0x3ab9fcu: goto label_3ab9fc;
        case 0x3aba00u: goto label_3aba00;
        case 0x3aba04u: goto label_3aba04;
        case 0x3aba08u: goto label_3aba08;
        case 0x3aba0cu: goto label_3aba0c;
        case 0x3aba10u: goto label_3aba10;
        case 0x3aba14u: goto label_3aba14;
        case 0x3aba18u: goto label_3aba18;
        case 0x3aba1cu: goto label_3aba1c;
        case 0x3aba20u: goto label_3aba20;
        case 0x3aba24u: goto label_3aba24;
        case 0x3aba28u: goto label_3aba28;
        case 0x3aba2cu: goto label_3aba2c;
        case 0x3aba30u: goto label_3aba30;
        case 0x3aba34u: goto label_3aba34;
        case 0x3aba38u: goto label_3aba38;
        case 0x3aba3cu: goto label_3aba3c;
        case 0x3aba40u: goto label_3aba40;
        case 0x3aba44u: goto label_3aba44;
        case 0x3aba48u: goto label_3aba48;
        case 0x3aba4cu: goto label_3aba4c;
        case 0x3aba50u: goto label_3aba50;
        case 0x3aba54u: goto label_3aba54;
        case 0x3aba58u: goto label_3aba58;
        case 0x3aba5cu: goto label_3aba5c;
        case 0x3aba60u: goto label_3aba60;
        case 0x3aba64u: goto label_3aba64;
        case 0x3aba68u: goto label_3aba68;
        case 0x3aba6cu: goto label_3aba6c;
        case 0x3aba70u: goto label_3aba70;
        case 0x3aba74u: goto label_3aba74;
        case 0x3aba78u: goto label_3aba78;
        case 0x3aba7cu: goto label_3aba7c;
        case 0x3aba80u: goto label_3aba80;
        case 0x3aba84u: goto label_3aba84;
        case 0x3aba88u: goto label_3aba88;
        case 0x3aba8cu: goto label_3aba8c;
        case 0x3aba90u: goto label_3aba90;
        case 0x3aba94u: goto label_3aba94;
        case 0x3aba98u: goto label_3aba98;
        case 0x3aba9cu: goto label_3aba9c;
        case 0x3abaa0u: goto label_3abaa0;
        case 0x3abaa4u: goto label_3abaa4;
        case 0x3abaa8u: goto label_3abaa8;
        case 0x3abaacu: goto label_3abaac;
        case 0x3abab0u: goto label_3abab0;
        case 0x3abab4u: goto label_3abab4;
        case 0x3abab8u: goto label_3abab8;
        case 0x3ababcu: goto label_3ababc;
        case 0x3abac0u: goto label_3abac0;
        case 0x3abac4u: goto label_3abac4;
        case 0x3abac8u: goto label_3abac8;
        case 0x3abaccu: goto label_3abacc;
        case 0x3abad0u: goto label_3abad0;
        case 0x3abad4u: goto label_3abad4;
        case 0x3abad8u: goto label_3abad8;
        case 0x3abadcu: goto label_3abadc;
        case 0x3abae0u: goto label_3abae0;
        case 0x3abae4u: goto label_3abae4;
        case 0x3abae8u: goto label_3abae8;
        case 0x3abaecu: goto label_3abaec;
        case 0x3abaf0u: goto label_3abaf0;
        case 0x3abaf4u: goto label_3abaf4;
        case 0x3abaf8u: goto label_3abaf8;
        case 0x3abafcu: goto label_3abafc;
        case 0x3abb00u: goto label_3abb00;
        case 0x3abb04u: goto label_3abb04;
        case 0x3abb08u: goto label_3abb08;
        case 0x3abb0cu: goto label_3abb0c;
        case 0x3abb10u: goto label_3abb10;
        case 0x3abb14u: goto label_3abb14;
        case 0x3abb18u: goto label_3abb18;
        case 0x3abb1cu: goto label_3abb1c;
        case 0x3abb20u: goto label_3abb20;
        case 0x3abb24u: goto label_3abb24;
        case 0x3abb28u: goto label_3abb28;
        case 0x3abb2cu: goto label_3abb2c;
        case 0x3abb30u: goto label_3abb30;
        case 0x3abb34u: goto label_3abb34;
        case 0x3abb38u: goto label_3abb38;
        case 0x3abb3cu: goto label_3abb3c;
        case 0x3abb40u: goto label_3abb40;
        case 0x3abb44u: goto label_3abb44;
        case 0x3abb48u: goto label_3abb48;
        case 0x3abb4cu: goto label_3abb4c;
        case 0x3abb50u: goto label_3abb50;
        case 0x3abb54u: goto label_3abb54;
        case 0x3abb58u: goto label_3abb58;
        case 0x3abb5cu: goto label_3abb5c;
        case 0x3abb60u: goto label_3abb60;
        case 0x3abb64u: goto label_3abb64;
        case 0x3abb68u: goto label_3abb68;
        case 0x3abb6cu: goto label_3abb6c;
        case 0x3abb70u: goto label_3abb70;
        case 0x3abb74u: goto label_3abb74;
        case 0x3abb78u: goto label_3abb78;
        case 0x3abb7cu: goto label_3abb7c;
        case 0x3abb80u: goto label_3abb80;
        case 0x3abb84u: goto label_3abb84;
        case 0x3abb88u: goto label_3abb88;
        case 0x3abb8cu: goto label_3abb8c;
        case 0x3abb90u: goto label_3abb90;
        case 0x3abb94u: goto label_3abb94;
        case 0x3abb98u: goto label_3abb98;
        case 0x3abb9cu: goto label_3abb9c;
        case 0x3abba0u: goto label_3abba0;
        case 0x3abba4u: goto label_3abba4;
        case 0x3abba8u: goto label_3abba8;
        case 0x3abbacu: goto label_3abbac;
        case 0x3abbb0u: goto label_3abbb0;
        case 0x3abbb4u: goto label_3abbb4;
        case 0x3abbb8u: goto label_3abbb8;
        case 0x3abbbcu: goto label_3abbbc;
        case 0x3abbc0u: goto label_3abbc0;
        case 0x3abbc4u: goto label_3abbc4;
        case 0x3abbc8u: goto label_3abbc8;
        case 0x3abbccu: goto label_3abbcc;
        case 0x3abbd0u: goto label_3abbd0;
        case 0x3abbd4u: goto label_3abbd4;
        case 0x3abbd8u: goto label_3abbd8;
        case 0x3abbdcu: goto label_3abbdc;
        case 0x3abbe0u: goto label_3abbe0;
        case 0x3abbe4u: goto label_3abbe4;
        case 0x3abbe8u: goto label_3abbe8;
        case 0x3abbecu: goto label_3abbec;
        case 0x3abbf0u: goto label_3abbf0;
        case 0x3abbf4u: goto label_3abbf4;
        case 0x3abbf8u: goto label_3abbf8;
        case 0x3abbfcu: goto label_3abbfc;
        case 0x3abc00u: goto label_3abc00;
        case 0x3abc04u: goto label_3abc04;
        case 0x3abc08u: goto label_3abc08;
        case 0x3abc0cu: goto label_3abc0c;
        case 0x3abc10u: goto label_3abc10;
        case 0x3abc14u: goto label_3abc14;
        case 0x3abc18u: goto label_3abc18;
        case 0x3abc1cu: goto label_3abc1c;
        case 0x3abc20u: goto label_3abc20;
        case 0x3abc24u: goto label_3abc24;
        case 0x3abc28u: goto label_3abc28;
        case 0x3abc2cu: goto label_3abc2c;
        case 0x3abc30u: goto label_3abc30;
        case 0x3abc34u: goto label_3abc34;
        case 0x3abc38u: goto label_3abc38;
        case 0x3abc3cu: goto label_3abc3c;
        case 0x3abc40u: goto label_3abc40;
        case 0x3abc44u: goto label_3abc44;
        case 0x3abc48u: goto label_3abc48;
        case 0x3abc4cu: goto label_3abc4c;
        case 0x3abc50u: goto label_3abc50;
        case 0x3abc54u: goto label_3abc54;
        case 0x3abc58u: goto label_3abc58;
        case 0x3abc5cu: goto label_3abc5c;
        case 0x3abc60u: goto label_3abc60;
        case 0x3abc64u: goto label_3abc64;
        case 0x3abc68u: goto label_3abc68;
        case 0x3abc6cu: goto label_3abc6c;
        case 0x3abc70u: goto label_3abc70;
        case 0x3abc74u: goto label_3abc74;
        case 0x3abc78u: goto label_3abc78;
        case 0x3abc7cu: goto label_3abc7c;
        case 0x3abc80u: goto label_3abc80;
        case 0x3abc84u: goto label_3abc84;
        case 0x3abc88u: goto label_3abc88;
        case 0x3abc8cu: goto label_3abc8c;
        case 0x3abc90u: goto label_3abc90;
        case 0x3abc94u: goto label_3abc94;
        case 0x3abc98u: goto label_3abc98;
        case 0x3abc9cu: goto label_3abc9c;
        case 0x3abca0u: goto label_3abca0;
        case 0x3abca4u: goto label_3abca4;
        case 0x3abca8u: goto label_3abca8;
        case 0x3abcacu: goto label_3abcac;
        case 0x3abcb0u: goto label_3abcb0;
        case 0x3abcb4u: goto label_3abcb4;
        case 0x3abcb8u: goto label_3abcb8;
        case 0x3abcbcu: goto label_3abcbc;
        case 0x3abcc0u: goto label_3abcc0;
        case 0x3abcc4u: goto label_3abcc4;
        case 0x3abcc8u: goto label_3abcc8;
        case 0x3abcccu: goto label_3abccc;
        case 0x3abcd0u: goto label_3abcd0;
        case 0x3abcd4u: goto label_3abcd4;
        case 0x3abcd8u: goto label_3abcd8;
        case 0x3abcdcu: goto label_3abcdc;
        case 0x3abce0u: goto label_3abce0;
        case 0x3abce4u: goto label_3abce4;
        case 0x3abce8u: goto label_3abce8;
        case 0x3abcecu: goto label_3abcec;
        case 0x3abcf0u: goto label_3abcf0;
        case 0x3abcf4u: goto label_3abcf4;
        case 0x3abcf8u: goto label_3abcf8;
        case 0x3abcfcu: goto label_3abcfc;
        default: break;
    }

    ctx->pc = 0x3ab980u;

label_3ab980:
    // 0x3ab980: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3ab980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3ab984:
    // 0x3ab984: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x3ab984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_3ab988:
    // 0x3ab988: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x3ab988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_3ab98c:
    // 0x3ab98c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ab98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ab990:
    // 0x3ab990: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x3ab990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_3ab994:
    // 0x3ab994: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ab994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ab998:
    // 0x3ab998: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x3ab998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_3ab99c:
    // 0x3ab99c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x3ab99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_3ab9a0:
    // 0x3ab9a0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3ab9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3ab9a4:
    // 0x3ab9a4: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x3ab9a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3ab9a8:
    // 0x3ab9a8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x3ab9a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3ab9ac:
    // 0x3ab9ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ab9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ab9b0:
    // 0x3ab9b0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ab9b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ab9b4:
    // 0x3ab9b4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ab9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ab9b8:
    // 0x3ab9b8: 0x40f809  jalr        $v0
label_3ab9bc:
    if (ctx->pc == 0x3AB9BCu) {
        ctx->pc = 0x3AB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9B8u;
        // 0x3ab9bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB9C0u;
        goto label_3ab9c0;
    }
    ctx->pc = 0x3AB9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB9C0u);
        ctx->pc = 0x3AB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9B8u;
        // 0x3ab9bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB9B8u, 0x3AB9C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB9C0u;
label_3ab9c0:
    // 0x3ab9c0: 0xc0ea146  jal         func_3A8518
label_3ab9c4:
    if (ctx->pc == 0x3AB9C4u) {
        ctx->pc = 0x3AB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9C0u;
        // 0x3ab9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB9C8u;
        goto label_3ab9c8;
    }
    ctx->pc = 0x3AB9C0u;
    SET_GPR_U32(ctx, 31, 0x3AB9C8u);
    ctx->pc = 0x3AB9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB9C0u;
    // 0x3ab9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AB9C0u, 0x3AB9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB9C8u;
label_3ab9c8:
    // 0x3ab9c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ab9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ab9cc:
    // 0x3ab9cc: 0xc0ea12a  jal         func_3A84A8
label_3ab9d0:
    if (ctx->pc == 0x3AB9D0u) {
        ctx->pc = 0x3AB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9CCu;
        // 0x3ab9d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB9D4u;
        goto label_3ab9d4;
    }
    ctx->pc = 0x3AB9CCu;
    SET_GPR_U32(ctx, 31, 0x3AB9D4u);
    ctx->pc = 0x3AB9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB9CCu;
    // 0x3ab9d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AB9CCu, 0x3AB9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB9D4u;
label_3ab9d4:
    // 0x3ab9d4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ab9d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ab9d8:
    // 0x3ab9d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ab9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ab9dc:
    // 0x3ab9dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ab9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab9e0:
    // 0x3ab9e0: 0xc0ea12a  jal         func_3A84A8
label_3ab9e4:
    if (ctx->pc == 0x3AB9E4u) {
        ctx->pc = 0x3AB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9E0u;
        // 0x3ab9e4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB9E8u;
        goto label_3ab9e8;
    }
    ctx->pc = 0x3AB9E0u;
    SET_GPR_U32(ctx, 31, 0x3AB9E8u);
    ctx->pc = 0x3AB9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB9E0u;
    // 0x3ab9e4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AB9E0u, 0x3AB9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB9E8u;
label_3ab9e8:
    // 0x3ab9e8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ab9e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ab9ec:
    // 0x3ab9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab9f0:
    // 0x3ab9f0: 0xc0ea146  jal         func_3A8518
label_3ab9f4:
    if (ctx->pc == 0x3AB9F4u) {
        ctx->pc = 0x3AB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9F0u;
        // 0x3ab9f4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB9F8u;
        goto label_3ab9f8;
    }
    ctx->pc = 0x3AB9F0u;
    SET_GPR_U32(ctx, 31, 0x3AB9F8u);
    ctx->pc = 0x3AB9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB9F0u;
    // 0x3ab9f4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AB9F0u, 0x3AB9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB9F8u;
label_3ab9f8:
    // 0x3ab9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ab9fc:
    // 0x3ab9fc: 0xc0ea14c  jal         func_3A8530
label_3aba00:
    if (ctx->pc == 0x3ABA00u) {
        ctx->pc = 0x3ABA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9FCu;
        // 0x3aba00: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA04u;
        goto label_3aba04;
    }
    ctx->pc = 0x3AB9FCu;
    SET_GPR_U32(ctx, 31, 0x3ABA04u);
    ctx->pc = 0x3ABA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB9FCu;
    // 0x3aba00: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3AB9FCu, 0x3ABA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA04u;
label_3aba04:
    // 0x3aba04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aba08:
    // 0x3aba08: 0xc0ea146  jal         func_3A8518
label_3aba0c:
    if (ctx->pc == 0x3ABA0Cu) {
        ctx->pc = 0x3ABA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA08u;
        // 0x3aba0c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA10u;
        goto label_3aba10;
    }
    ctx->pc = 0x3ABA08u;
    SET_GPR_U32(ctx, 31, 0x3ABA10u);
    ctx->pc = 0x3ABA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA08u;
    // 0x3aba0c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3ABA08u, 0x3ABA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA10u;
label_3aba10:
    // 0x3aba10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3aba10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aba14:
    // 0x3aba14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3aba14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aba18:
    // 0x3aba18: 0xc0e858c  jal         func_3A1630
label_3aba1c:
    if (ctx->pc == 0x3ABA1Cu) {
        ctx->pc = 0x3ABA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA18u;
        // 0x3aba1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA20u;
        goto label_3aba20;
    }
    ctx->pc = 0x3ABA18u;
    SET_GPR_U32(ctx, 31, 0x3ABA20u);
    ctx->pc = 0x3ABA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA18u;
    // 0x3aba1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3ABA18u, 0x3ABA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA20u;
label_3aba20:
    // 0x3aba20: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3aba20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3aba24:
    // 0x3aba24: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3aba24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3aba28:
    // 0x3aba28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3aba28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aba2c:
    // 0x3aba2c: 0xc0e896e  jal         func_3A25B8
label_3aba30:
    if (ctx->pc == 0x3ABA30u) {
        ctx->pc = 0x3ABA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA2Cu;
        // 0x3aba30: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA34u;
        goto label_3aba34;
    }
    ctx->pc = 0x3ABA2Cu;
    SET_GPR_U32(ctx, 31, 0x3ABA34u);
    ctx->pc = 0x3ABA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA2Cu;
    // 0x3aba30: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3ABA2Cu, 0x3ABA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA34u;
label_3aba34:
    // 0x3aba34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3aba34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aba38:
    // 0x3aba38: 0xc0e862e  jal         func_3A18B8
label_3aba3c:
    if (ctx->pc == 0x3ABA3Cu) {
        ctx->pc = 0x3ABA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA38u;
        // 0x3aba3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA40u;
        goto label_3aba40;
    }
    ctx->pc = 0x3ABA38u;
    SET_GPR_U32(ctx, 31, 0x3ABA40u);
    ctx->pc = 0x3ABA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA38u;
    // 0x3aba3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3ABA38u, 0x3ABA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA40u;
label_3aba40:
    // 0x3aba40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3aba40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3aba44:
    // 0x3aba44: 0xc0e896c  jal         func_3A25B0
label_3aba48:
    if (ctx->pc == 0x3ABA48u) {
        ctx->pc = 0x3ABA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA44u;
        // 0x3aba48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA4Cu;
        goto label_3aba4c;
    }
    ctx->pc = 0x3ABA44u;
    SET_GPR_U32(ctx, 31, 0x3ABA4Cu);
    ctx->pc = 0x3ABA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA44u;
    // 0x3aba48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3ABA44u, 0x3ABA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA4Cu;
label_3aba4c:
    // 0x3aba4c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3aba4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3aba50:
    // 0x3aba50: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3aba50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3aba54:
    // 0x3aba54: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3aba54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3aba58:
    // 0x3aba58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aba58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aba5c:
    // 0x3aba5c: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3aba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3aba60:
    // 0x3aba60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3aba60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aba64:
    // 0x3aba64: 0xc0e911e  jal         func_3A4478
label_3aba68:
    if (ctx->pc == 0x3ABA68u) {
        ctx->pc = 0x3ABA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA64u;
        // 0x3aba68: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABA6Cu;
        goto label_3aba6c;
    }
    ctx->pc = 0x3ABA64u;
    SET_GPR_U32(ctx, 31, 0x3ABA6Cu);
    ctx->pc = 0x3ABA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA64u;
    // 0x3aba68: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3ABA64u, 0x3ABA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA6Cu;
label_3aba6c:
    // 0x3aba6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aba6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3aba70:
    // 0x3aba70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aba70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aba74:
    // 0x3aba74: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3aba74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3aba78:
    // 0x3aba78: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3aba78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3aba7c:
    // 0x3aba7c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x3aba7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3aba80:
    // 0x3aba80: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3aba80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3aba84:
    // 0x3aba84: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3aba84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3aba88:
    // 0x3aba88: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3aba88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3aba8c:
    // 0x3aba8c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3aba8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3aba90:
    // 0x3aba90: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3aba90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3aba94:
    // 0x3aba94: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3aba94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3aba98:
    // 0x3aba98: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3aba98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3aba9c:
    // 0x3aba9c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3aba9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3abaa0:
    // 0x3abaa0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3abaa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3abaa4:
    // 0x3abaa4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3abaa4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3abaa8:
    // 0x3abaa8: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3abaa8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3abaac:
    // 0x3abaac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3abaacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3abab0:
    // 0x3abab0: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3abab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3abab4:
    // 0x3abab4: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3abab4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3abab8:
    // 0x3abab8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3abab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ababc:
    // 0x3ababc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3ababcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3abac0:
    // 0x3abac0: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3abac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3abac4:
    // 0x3abac4: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3abac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3abac8:
    // 0x3abac8: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3abac8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3abacc:
    // 0x3abacc: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3abaccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3abad0:
    // 0x3abad0: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3abad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3abad4:
    // 0x3abad4: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3abad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3abad8:
    // 0x3abad8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3abad8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3abadc:
    // 0x3abadc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3abadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3abae0:
    // 0x3abae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3abae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3abae4:
    // 0x3abae4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3abae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3abae8:
    // 0x3abae8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3abae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3abaec:
    // 0x3abaec: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3abaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3abaf0:
    // 0x3abaf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3abaf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3abaf4:
    // 0x3abaf4: 0xc0e90ca  jal         func_3A4328
label_3abaf8:
    if (ctx->pc == 0x3ABAF8u) {
        ctx->pc = 0x3ABAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAF4u;
        // 0x3abaf8: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABAFCu;
        goto label_3abafc;
    }
    ctx->pc = 0x3ABAF4u;
    SET_GPR_U32(ctx, 31, 0x3ABAFCu);
    ctx->pc = 0x3ABAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABAF4u;
    // 0x3abaf8: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3ABAF4u, 0x3ABAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABAFCu;
label_3abafc:
    // 0x3abafc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3abafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3abb00:
    // 0x3abb00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3abb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3abb04:
    // 0x3abb04: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3abb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3abb08:
    // 0x3abb08: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3abb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3abb0c:
    // 0x3abb0c: 0xc0e9f56  jal         func_3A7D58
label_3abb10:
    if (ctx->pc == 0x3ABB10u) {
        ctx->pc = 0x3ABB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB0Cu;
        // 0x3abb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB14u;
        goto label_3abb14;
    }
    ctx->pc = 0x3ABB0Cu;
    SET_GPR_U32(ctx, 31, 0x3ABB14u);
    ctx->pc = 0x3ABB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABB0Cu;
    // 0x3abb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D58u, 0x3ABB0Cu, 0x3ABB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABB14u;
label_3abb14:
    // 0x3abb14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3abb18:
    if (ctx->pc == 0x3ABB18u) {
        ctx->pc = 0x3ABB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB14u;
        // 0x3abb18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB1Cu;
        goto label_3abb1c;
    }
    ctx->pc = 0x3ABB14u;
    {
        const bool branch_taken_0x3abb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abb14) {
            ctx->pc = 0x3ABB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABB14u;
            // 0x3abb18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABB2Cu;
            goto label_3abb2c;
        }
    }
    ctx->pc = 0x3ABB1Cu;
label_3abb1c:
    // 0x3abb1c: 0xc0e9694  jal         func_3A5A50
label_3abb20:
    if (ctx->pc == 0x3ABB20u) {
        ctx->pc = 0x3ABB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB1Cu;
        // 0x3abb20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB24u;
        goto label_3abb24;
    }
    ctx->pc = 0x3ABB1Cu;
    SET_GPR_U32(ctx, 31, 0x3ABB24u);
    ctx->pc = 0x3ABB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABB1Cu;
    // 0x3abb20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3ABB1Cu, 0x3ABB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABB24u;
label_3abb24:
    // 0x3abb24: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3abb28:
    if (ctx->pc == 0x3ABB28u) {
        ctx->pc = 0x3ABB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB24u;
        // 0x3abb28: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB2Cu;
        goto label_3abb2c;
    }
    ctx->pc = 0x3ABB24u;
    {
        const bool branch_taken_0x3abb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abb24) {
            ctx->pc = 0x3ABB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABB24u;
            // 0x3abb28: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABB2Cu;
            goto label_3abb2c;
        }
    }
    ctx->pc = 0x3ABB2Cu;
label_3abb2c:
    // 0x3abb2c: 0x5620006b  bnel        $s1, $zero, . + 4 + (0x6B << 2)
label_3abb30:
    if (ctx->pc == 0x3ABB30u) {
        ctx->pc = 0x3ABB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB2Cu;
        // 0x3abb30: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB34u;
        goto label_3abb34;
    }
    ctx->pc = 0x3ABB2Cu;
    {
        const bool branch_taken_0x3abb2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abb2c) {
            ctx->pc = 0x3ABB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABB2Cu;
            // 0x3abb30: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABCDCu;
            goto label_3abcdc;
        }
    }
    ctx->pc = 0x3ABB34u;
label_3abb34:
    // 0x3abb34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3abb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3abb38:
    // 0x3abb38: 0x12820013  beq         $s4, $v0, . + 4 + (0x13 << 2)
label_3abb3c:
    if (ctx->pc == 0x3ABB3Cu) {
        ctx->pc = 0x3ABB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB38u;
        // 0x3abb3c: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB40u;
        goto label_3abb40;
    }
    ctx->pc = 0x3ABB38u;
    {
        const bool branch_taken_0x3abb38 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ABB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB38u;
        // 0x3abb3c: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb38) {
            ctx->pc = 0x3ABB88u;
            goto label_3abb88;
        }
    }
    ctx->pc = 0x3ABB40u;
label_3abb40:
    // 0x3abb40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3abb44:
    if (ctx->pc == 0x3ABB44u) {
        ctx->pc = 0x3ABB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB40u;
        // 0x3abb44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB48u;
        goto label_3abb48;
    }
    ctx->pc = 0x3ABB40u;
    {
        const bool branch_taken_0x3abb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abb40) {
            ctx->pc = 0x3ABB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABB40u;
            // 0x3abb44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABB58u;
            goto label_3abb58;
        }
    }
    ctx->pc = 0x3ABB48u;
label_3abb48:
    // 0x3abb48: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_3abb4c:
    if (ctx->pc == 0x3ABB4Cu) {
        ctx->pc = 0x3ABB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB48u;
        // 0x3abb4c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB50u;
        goto label_3abb50;
    }
    ctx->pc = 0x3ABB48u;
    {
        const bool branch_taken_0x3abb48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB48u;
        // 0x3abb4c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb48) {
            ctx->pc = 0x3ABB70u;
            goto label_3abb70;
        }
    }
    ctx->pc = 0x3ABB50u;
label_3abb50:
    // 0x3abb50: 0x10000063  b           . + 4 + (0x63 << 2)
label_3abb54:
    if (ctx->pc == 0x3ABB54u) {
        ctx->pc = 0x3ABB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB50u;
        // 0x3abb54: 0x7bb100f0  lq          $s1, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB58u;
        goto label_3abb58;
    }
    ctx->pc = 0x3ABB50u;
    {
        const bool branch_taken_0x3abb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB50u;
        // 0x3abb54: 0x7bb100f0  lq          $s1, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb50) {
            ctx->pc = 0x3ABCE0u;
            goto label_3abce0;
        }
    }
    ctx->pc = 0x3ABB58u;
label_3abb58:
    // 0x3abb58: 0x12820047  beq         $s4, $v0, . + 4 + (0x47 << 2)
label_3abb5c:
    if (ctx->pc == 0x3ABB5Cu) {
        ctx->pc = 0x3ABB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB58u;
        // 0x3abb5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB60u;
        goto label_3abb60;
    }
    ctx->pc = 0x3ABB58u;
    {
        const bool branch_taken_0x3abb58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ABB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB58u;
        // 0x3abb5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb58) {
            ctx->pc = 0x3ABC78u;
            goto label_3abc78;
        }
    }
    ctx->pc = 0x3ABB60u;
label_3abb60:
    // 0x3abb60: 0x12820049  beq         $s4, $v0, . + 4 + (0x49 << 2)
label_3abb64:
    if (ctx->pc == 0x3ABB64u) {
        ctx->pc = 0x3ABB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB60u;
        // 0x3abb64: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB68u;
        goto label_3abb68;
    }
    ctx->pc = 0x3ABB60u;
    {
        const bool branch_taken_0x3abb60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ABB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB60u;
        // 0x3abb64: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb60) {
            ctx->pc = 0x3ABC88u;
            goto label_3abc88;
        }
    }
    ctx->pc = 0x3ABB68u;
label_3abb68:
    // 0x3abb68: 0x1000005d  b           . + 4 + (0x5D << 2)
label_3abb6c:
    if (ctx->pc == 0x3ABB6Cu) {
        ctx->pc = 0x3ABB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB68u;
        // 0x3abb6c: 0x7bb100f0  lq          $s1, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB70u;
        goto label_3abb70;
    }
    ctx->pc = 0x3ABB68u;
    {
        const bool branch_taken_0x3abb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB68u;
        // 0x3abb6c: 0x7bb100f0  lq          $s1, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb68) {
            ctx->pc = 0x3ABCE0u;
            goto label_3abce0;
        }
    }
    ctx->pc = 0x3ABB70u;
label_3abb70:
    // 0x3abb70: 0x3c05958d  lui         $a1, 0x958D
    ctx->pc = 0x3abb70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38285 << 16));
label_3abb74:
    // 0x3abb74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3abb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3abb78:
    // 0x3abb78: 0xc0e9ba2  jal         func_3A6E88
label_3abb7c:
    if (ctx->pc == 0x3ABB7Cu) {
        ctx->pc = 0x3ABB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB78u;
        // 0x3abb7c: 0x34a59437  ori         $a1, $a1, 0x9437 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37943);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB80u;
        goto label_3abb80;
    }
    ctx->pc = 0x3ABB78u;
    SET_GPR_U32(ctx, 31, 0x3ABB80u);
    ctx->pc = 0x3ABB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABB78u;
    // 0x3abb7c: 0x34a59437  ori         $a1, $a1, 0x9437 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37943);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E88u, 0x3ABB78u, 0x3ABB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABB80u;
label_3abb80:
    // 0x3abb80: 0x10000056  b           . + 4 + (0x56 << 2)
label_3abb84:
    if (ctx->pc == 0x3ABB84u) {
        ctx->pc = 0x3ABB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB80u;
        // 0x3abb84: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABB88u;
        goto label_3abb88;
    }
    ctx->pc = 0x3ABB80u;
    {
        const bool branch_taken_0x3abb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB80u;
        // 0x3abb84: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb80) {
            ctx->pc = 0x3ABCDCu;
            goto label_3abcdc;
        }
    }
    ctx->pc = 0x3ABB88u;
label_3abb88:
    // 0x3abb88: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3abb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3abb8c:
    // 0x3abb8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3abb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3abb90:
    // 0x3abb90: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3abb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3abb94:
    // 0x3abb94: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3abb94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3abb98:
    // 0x3abb98: 0x3c07bea7  lui         $a3, 0xBEA7
    ctx->pc = 0x3abb98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48807 << 16));
label_3abb9c:
    // 0x3abb9c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3abb9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3abba0:
    // 0x3abba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3abba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3abba4:
    // 0x3abba4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3abba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_3abba8:
    // 0x3abba8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3abba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3abbac:
    // 0x3abbac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3abbacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3abbb0:
    // 0x3abbb0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3abbb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3abbb4:
    // 0x3abbb4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3abbb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3abbb8:
    // 0x3abbb8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3abbb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3abbbc:
    // 0x3abbbc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3abbbcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3abbc0:
    // 0x3abbc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3abbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3abbc4:
    // 0x3abbc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3abbc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3abbc8:
    // 0x3abbc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3abbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3abbcc:
    // 0x3abbcc: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x3abbccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_3abbd0:
    // 0x3abbd0: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3abbd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3abbd4:
    // 0x3abbd4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3abbd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3abbd8:
    // 0x3abbd8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3abbd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3abbdc:
    // 0x3abbdc: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3abbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3abbe0:
    // 0x3abbe0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3abbe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3abbe4:
    // 0x3abbe4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3abbe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3abbe8:
    // 0x3abbe8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3abbe8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3abbec:
    // 0x3abbec: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3abbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3abbf0:
    // 0x3abbf0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3abbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3abbf4:
    // 0x3abbf4: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x3abbf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
label_3abbf8:
    // 0x3abbf8: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x3abbf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_3abbfc:
    // 0x3abbfc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3abbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3abc00:
    // 0x3abc00: 0xc0f16c0  jal         func_3C5B00
label_3abc04:
    if (ctx->pc == 0x3ABC04u) {
        ctx->pc = 0x3ABC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC00u;
        // 0x3abc04: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC08u;
        goto label_3abc08;
    }
    ctx->pc = 0x3ABC00u;
    SET_GPR_U32(ctx, 31, 0x3ABC08u);
    ctx->pc = 0x3ABC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABC00u;
    // 0x3abc04: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3ABC00u, 0x3ABC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABC08u;
label_3abc08:
    // 0x3abc08: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3abc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3abc0c:
    // 0x3abc0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3abc0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3abc10:
    // 0x3abc10: 0x3c075c3f  lui         $a3, 0x5C3F
    ctx->pc = 0x3abc10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23615 << 16));
label_3abc14:
    // 0x3abc14: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3abc14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3abc18:
    // 0x3abc18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3abc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3abc1c:
    // 0x3abc1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3abc1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3abc20:
    // 0x3abc20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3abc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3abc24:
    // 0x3abc24: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3abc24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3abc28:
    // 0x3abc28: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3abc28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3abc2c:
    // 0x3abc2c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3abc2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3abc30:
    // 0x3abc30: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3abc30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3abc34:
    // 0x3abc34: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x3abc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
label_3abc38:
    // 0x3abc38: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3abc38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3abc3c:
    // 0x3abc3c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3abc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3abc40:
    // 0x3abc40: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x3abc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
label_3abc44:
    // 0x3abc44: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x3abc44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
label_3abc48:
    // 0x3abc48: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x3abc48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_3abc4c:
    // 0x3abc4c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3abc4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3abc50:
    // 0x3abc50: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3abc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3abc54:
    // 0x3abc54: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3abc54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3abc58:
    // 0x3abc58: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3abc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3abc5c:
    // 0x3abc5c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3abc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3abc60:
    // 0x3abc60: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3abc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3abc64:
    // 0x3abc64: 0x34e727ff  ori         $a3, $a3, 0x27FF
    ctx->pc = 0x3abc64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10239);
label_3abc68:
    // 0x3abc68: 0xc0f16c0  jal         func_3C5B00
label_3abc6c:
    if (ctx->pc == 0x3ABC6Cu) {
        ctx->pc = 0x3ABC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC68u;
        // 0x3abc6c: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC70u;
        goto label_3abc70;
    }
    ctx->pc = 0x3ABC68u;
    SET_GPR_U32(ctx, 31, 0x3ABC70u);
    ctx->pc = 0x3ABC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABC68u;
    // 0x3abc6c: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x3ABC68u, 0x3ABC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABC70u;
label_3abc70:
    // 0x3abc70: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3abc74:
    if (ctx->pc == 0x3ABC74u) {
        ctx->pc = 0x3ABC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC70u;
        // 0x3abc74: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC78u;
        goto label_3abc78;
    }
    ctx->pc = 0x3ABC70u;
    {
        const bool branch_taken_0x3abc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC70u;
        // 0x3abc74: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abc70) {
            ctx->pc = 0x3ABCDCu;
            goto label_3abcdc;
        }
    }
    ctx->pc = 0x3ABC78u;
label_3abc78:
    // 0x3abc78: 0xc0e96b6  jal         func_3A5AD8
label_3abc7c:
    if (ctx->pc == 0x3ABC7Cu) {
        ctx->pc = 0x3ABC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC78u;
        // 0x3abc7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC80u;
        goto label_3abc80;
    }
    ctx->pc = 0x3ABC78u;
    SET_GPR_U32(ctx, 31, 0x3ABC80u);
    ctx->pc = 0x3ABC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABC78u;
    // 0x3abc7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5AD8u, 0x3ABC78u, 0x3ABC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABC80u;
label_3abc80:
    // 0x3abc80: 0x10000016  b           . + 4 + (0x16 << 2)
label_3abc84:
    if (ctx->pc == 0x3ABC84u) {
        ctx->pc = 0x3ABC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC80u;
        // 0x3abc84: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABC88u;
        goto label_3abc88;
    }
    ctx->pc = 0x3ABC80u;
    {
        const bool branch_taken_0x3abc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC80u;
        // 0x3abc84: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abc80) {
            ctx->pc = 0x3ABCDCu;
            goto label_3abcdc;
        }
    }
    ctx->pc = 0x3ABC88u;
label_3abc88:
    // 0x3abc88: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3abc88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3abc8c:
    // 0x3abc8c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3abc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3abc90:
    // 0x3abc90: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3abc90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3abc94:
    // 0x3abc94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3abc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3abc98:
    // 0x3abc98: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3abc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3abc9c:
    // 0x3abc9c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3abc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3abca0:
    // 0x3abca0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3abca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3abca4:
    // 0x3abca4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3abca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3abca8:
    // 0x3abca8: 0xc0cd518  jal         func_335460
label_3abcac:
    if (ctx->pc == 0x3ABCACu) {
        ctx->pc = 0x3ABCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCA8u;
        // 0x3abcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCB0u;
        goto label_3abcb0;
    }
    ctx->pc = 0x3ABCA8u;
    SET_GPR_U32(ctx, 31, 0x3ABCB0u);
    ctx->pc = 0x3ABCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABCA8u;
    // 0x3abcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3ABCA8u, 0x3ABCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABCB0u;
label_3abcb0:
    // 0x3abcb0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3abcb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3abcb4:
    // 0x3abcb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3abcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3abcb8:
    // 0x3abcb8: 0xc0cd4ee  jal         func_3353B8
label_3abcbc:
    if (ctx->pc == 0x3ABCBCu) {
        ctx->pc = 0x3ABCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCB8u;
        // 0x3abcbc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCC0u;
        goto label_3abcc0;
    }
    ctx->pc = 0x3ABCB8u;
    SET_GPR_U32(ctx, 31, 0x3ABCC0u);
    ctx->pc = 0x3ABCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABCB8u;
    // 0x3abcbc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3ABCB8u, 0x3ABCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABCC0u;
label_3abcc0:
    // 0x3abcc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3abcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3abcc4:
    // 0x3abcc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3abcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3abcc8:
    // 0x3abcc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3abcc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3abccc:
    // 0x3abccc: 0x2446000a  addiu       $a2, $v0, 0xA
    ctx->pc = 0x3abcccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3abcd0:
    // 0x3abcd0: 0xc0f17bc  jal         func_3C5EF0
label_3abcd4:
    if (ctx->pc == 0x3ABCD4u) {
        ctx->pc = 0x3ABCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCD0u;
        // 0x3abcd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCD8u;
        goto label_3abcd8;
    }
    ctx->pc = 0x3ABCD0u;
    SET_GPR_U32(ctx, 31, 0x3ABCD8u);
    ctx->pc = 0x3ABCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABCD0u;
    // 0x3abcd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5EF0u, 0x3ABCD0u, 0x3ABCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABCD8u;
label_3abcd8:
    // 0x3abcd8: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3abcd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3abcdc:
    // 0x3abcdc: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x3abcdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3abce0:
    // 0x3abce0: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x3abce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3abce4:
    // 0x3abce4: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x3abce4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3abce8:
    // 0x3abce8: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x3abce8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3abcec:
    // 0x3abcec: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3abcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3abcf0:
    // 0x3abcf0: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x3abcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3abcf4:
    // 0x3abcf4: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x3abcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3abcf8:
    // 0x3abcf8: 0x3e00008  jr          $ra
label_3abcfc:
    if (ctx->pc == 0x3ABCFCu) {
        ctx->pc = 0x3ABCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCF8u;
        // 0x3abcfc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD00u;
        goto label_fallthrough_0x3abcf8;
    }
    ctx->pc = 0x3ABCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCF8u;
        // 0x3abcfc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3abcf8:
    ctx->pc = 0x3ABD00u;
}
