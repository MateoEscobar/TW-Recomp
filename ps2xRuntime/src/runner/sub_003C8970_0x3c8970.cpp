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

// Function: sub_003C8970
// Address: 0x3c8970 - 0x3c8b20
void sub_003C8970_0x3c8970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8970_0x3c8970");
#endif

    switch (ctx->pc) {
        case 0x3c8970u: goto label_3c8970;
        case 0x3c8974u: goto label_3c8974;
        case 0x3c8978u: goto label_3c8978;
        case 0x3c897cu: goto label_3c897c;
        case 0x3c8980u: goto label_3c8980;
        case 0x3c8984u: goto label_3c8984;
        case 0x3c8988u: goto label_3c8988;
        case 0x3c898cu: goto label_3c898c;
        case 0x3c8990u: goto label_3c8990;
        case 0x3c8994u: goto label_3c8994;
        case 0x3c8998u: goto label_3c8998;
        case 0x3c899cu: goto label_3c899c;
        case 0x3c89a0u: goto label_3c89a0;
        case 0x3c89a4u: goto label_3c89a4;
        case 0x3c89a8u: goto label_3c89a8;
        case 0x3c89acu: goto label_3c89ac;
        case 0x3c89b0u: goto label_3c89b0;
        case 0x3c89b4u: goto label_3c89b4;
        case 0x3c89b8u: goto label_3c89b8;
        case 0x3c89bcu: goto label_3c89bc;
        case 0x3c89c0u: goto label_3c89c0;
        case 0x3c89c4u: goto label_3c89c4;
        case 0x3c89c8u: goto label_3c89c8;
        case 0x3c89ccu: goto label_3c89cc;
        case 0x3c89d0u: goto label_3c89d0;
        case 0x3c89d4u: goto label_3c89d4;
        case 0x3c89d8u: goto label_3c89d8;
        case 0x3c89dcu: goto label_3c89dc;
        case 0x3c89e0u: goto label_3c89e0;
        case 0x3c89e4u: goto label_3c89e4;
        case 0x3c89e8u: goto label_3c89e8;
        case 0x3c89ecu: goto label_3c89ec;
        case 0x3c89f0u: goto label_3c89f0;
        case 0x3c89f4u: goto label_3c89f4;
        case 0x3c89f8u: goto label_3c89f8;
        case 0x3c89fcu: goto label_3c89fc;
        case 0x3c8a00u: goto label_3c8a00;
        case 0x3c8a04u: goto label_3c8a04;
        case 0x3c8a08u: goto label_3c8a08;
        case 0x3c8a0cu: goto label_3c8a0c;
        case 0x3c8a10u: goto label_3c8a10;
        case 0x3c8a14u: goto label_3c8a14;
        case 0x3c8a18u: goto label_3c8a18;
        case 0x3c8a1cu: goto label_3c8a1c;
        case 0x3c8a20u: goto label_3c8a20;
        case 0x3c8a24u: goto label_3c8a24;
        case 0x3c8a28u: goto label_3c8a28;
        case 0x3c8a2cu: goto label_3c8a2c;
        case 0x3c8a30u: goto label_3c8a30;
        case 0x3c8a34u: goto label_3c8a34;
        case 0x3c8a38u: goto label_3c8a38;
        case 0x3c8a3cu: goto label_3c8a3c;
        case 0x3c8a40u: goto label_3c8a40;
        case 0x3c8a44u: goto label_3c8a44;
        case 0x3c8a48u: goto label_3c8a48;
        case 0x3c8a4cu: goto label_3c8a4c;
        case 0x3c8a50u: goto label_3c8a50;
        case 0x3c8a54u: goto label_3c8a54;
        case 0x3c8a58u: goto label_3c8a58;
        case 0x3c8a5cu: goto label_3c8a5c;
        case 0x3c8a60u: goto label_3c8a60;
        case 0x3c8a64u: goto label_3c8a64;
        case 0x3c8a68u: goto label_3c8a68;
        case 0x3c8a6cu: goto label_3c8a6c;
        case 0x3c8a70u: goto label_3c8a70;
        case 0x3c8a74u: goto label_3c8a74;
        case 0x3c8a78u: goto label_3c8a78;
        case 0x3c8a7cu: goto label_3c8a7c;
        case 0x3c8a80u: goto label_3c8a80;
        case 0x3c8a84u: goto label_3c8a84;
        case 0x3c8a88u: goto label_3c8a88;
        case 0x3c8a8cu: goto label_3c8a8c;
        case 0x3c8a90u: goto label_3c8a90;
        case 0x3c8a94u: goto label_3c8a94;
        case 0x3c8a98u: goto label_3c8a98;
        case 0x3c8a9cu: goto label_3c8a9c;
        case 0x3c8aa0u: goto label_3c8aa0;
        case 0x3c8aa4u: goto label_3c8aa4;
        case 0x3c8aa8u: goto label_3c8aa8;
        case 0x3c8aacu: goto label_3c8aac;
        case 0x3c8ab0u: goto label_3c8ab0;
        case 0x3c8ab4u: goto label_3c8ab4;
        case 0x3c8ab8u: goto label_3c8ab8;
        case 0x3c8abcu: goto label_3c8abc;
        case 0x3c8ac0u: goto label_3c8ac0;
        case 0x3c8ac4u: goto label_3c8ac4;
        case 0x3c8ac8u: goto label_3c8ac8;
        case 0x3c8accu: goto label_3c8acc;
        case 0x3c8ad0u: goto label_3c8ad0;
        case 0x3c8ad4u: goto label_3c8ad4;
        case 0x3c8ad8u: goto label_3c8ad8;
        case 0x3c8adcu: goto label_3c8adc;
        case 0x3c8ae0u: goto label_3c8ae0;
        case 0x3c8ae4u: goto label_3c8ae4;
        case 0x3c8ae8u: goto label_3c8ae8;
        case 0x3c8aecu: goto label_3c8aec;
        case 0x3c8af0u: goto label_3c8af0;
        case 0x3c8af4u: goto label_3c8af4;
        case 0x3c8af8u: goto label_3c8af8;
        case 0x3c8afcu: goto label_3c8afc;
        case 0x3c8b00u: goto label_3c8b00;
        case 0x3c8b04u: goto label_3c8b04;
        case 0x3c8b08u: goto label_3c8b08;
        case 0x3c8b0cu: goto label_3c8b0c;
        case 0x3c8b10u: goto label_3c8b10;
        case 0x3c8b14u: goto label_3c8b14;
        case 0x3c8b18u: goto label_3c8b18;
        case 0x3c8b1cu: goto label_3c8b1c;
        default: break;
    }

    ctx->pc = 0x3c8970u;

label_3c8970:
    // 0x3c8970: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x3c8970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
label_3c8974:
    // 0x3c8974: 0x7fb00480  sq          $s0, 0x480($sp)
    ctx->pc = 0x3c8974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 16));
label_3c8978:
    // 0x3c8978: 0x7fb10470  sq          $s1, 0x470($sp)
    ctx->pc = 0x3c8978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 17));
label_3c897c:
    // 0x3c897c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c897cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c8980:
    // 0x3c8980: 0x7fb20460  sq          $s2, 0x460($sp)
    ctx->pc = 0x3c8980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 18));
label_3c8984:
    // 0x3c8984: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x3c8984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
label_3c8988:
    // 0x3c8988: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c8988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c898c:
    // 0x3c898c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c8990:
    // 0x3c8990: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c8990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c8994:
    // 0x3c8994: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c8994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c8998:
    // 0x3c8998: 0x40f809  jalr        $v0
label_3c899c:
    if (ctx->pc == 0x3C899Cu) {
        ctx->pc = 0x3C899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8998u;
        // 0x3c899c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C89A0u;
        goto label_3c89a0;
    }
    ctx->pc = 0x3C8998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C89A0u);
        ctx->pc = 0x3C899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8998u;
        // 0x3c899c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8998u, 0x3C89A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C89A0u;
label_3c89a0:
    // 0x3c89a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c89a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c89a4:
    // 0x3c89a4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3c89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3c89a8:
    // 0x3c89a8: 0x1202003f  beq         $s0, $v0, . + 4 + (0x3F << 2)
label_3c89ac:
    if (ctx->pc == 0x3C89ACu) {
        ctx->pc = 0x3C89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89A8u;
        // 0x3c89ac: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C89B0u;
        goto label_3c89b0;
    }
    ctx->pc = 0x3C89A8u;
    {
        const bool branch_taken_0x3c89a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89A8u;
        // 0x3c89ac: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c89a8) {
            ctx->pc = 0x3C8AA8u;
            goto label_3c8aa8;
        }
    }
    ctx->pc = 0x3C89B0u;
label_3c89b0:
    // 0x3c89b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c89b4:
    if (ctx->pc == 0x3C89B4u) {
        ctx->pc = 0x3C89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89B0u;
        // 0x3c89b4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C89B8u;
        goto label_3c89b8;
    }
    ctx->pc = 0x3C89B0u;
    {
        const bool branch_taken_0x3c89b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89B0u;
        // 0x3c89b4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c89b0) {
            ctx->pc = 0x3C89C8u;
            goto label_3c89c8;
        }
    }
    ctx->pc = 0x3C89B8u;
label_3c89b8:
    // 0x3c89b8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3c89bc:
    if (ctx->pc == 0x3C89BCu) {
        ctx->pc = 0x3C89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89B8u;
        // 0x3c89bc: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C89C0u;
        goto label_3c89c0;
    }
    ctx->pc = 0x3C89B8u;
    {
        const bool branch_taken_0x3c89b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89B8u;
        // 0x3c89bc: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c89b8) {
            ctx->pc = 0x3C89DCu;
            goto label_3c89dc;
        }
    }
    ctx->pc = 0x3C89C0u;
label_3c89c0:
    // 0x3c89c0: 0x10000053  b           . + 4 + (0x53 << 2)
label_3c89c4:
    if (ctx->pc == 0x3C89C4u) {
        ctx->pc = 0x3C89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89C0u;
        // 0x3c89c4: 0x7bb10470  lq          $s1, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C89C8u;
        goto label_3c89c8;
    }
    ctx->pc = 0x3C89C0u;
    {
        const bool branch_taken_0x3c89c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89C0u;
        // 0x3c89c4: 0x7bb10470  lq          $s1, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c89c0) {
            ctx->pc = 0x3C8B10u;
            goto label_3c8b10;
        }
    }
    ctx->pc = 0x3C89C8u;
label_3c89c8:
    // 0x3c89c8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3c89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3c89cc:
    // 0x3c89cc: 0x12020040  beq         $s0, $v0, . + 4 + (0x40 << 2)
label_3c89d0:
    if (ctx->pc == 0x3C89D0u) {
        ctx->pc = 0x3C89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89CCu;
        // 0x3c89d0: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C89D4u;
        goto label_3c89d4;
    }
    ctx->pc = 0x3C89CCu;
    {
        const bool branch_taken_0x3c89cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89CCu;
        // 0x3c89d0: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c89cc) {
            ctx->pc = 0x3C8AD0u;
            goto label_3c8ad0;
        }
    }
    ctx->pc = 0x3C89D4u;
label_3c89d4:
    // 0x3c89d4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_3c89d8:
    if (ctx->pc == 0x3C89D8u) {
        ctx->pc = 0x3C89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89D4u;
        // 0x3c89d8: 0x7bb10470  lq          $s1, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C89DCu;
        goto label_3c89dc;
    }
    ctx->pc = 0x3C89D4u;
    {
        const bool branch_taken_0x3c89d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89D4u;
        // 0x3c89d8: 0x7bb10470  lq          $s1, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c89d4) {
            ctx->pc = 0x3C8B10u;
            goto label_3c8b10;
        }
    }
    ctx->pc = 0x3C89DCu;
label_3c89dc:
    // 0x3c89dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c89e0:
    // 0x3c89e0: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
label_3c89e4:
    if (ctx->pc == 0x3C89E4u) {
        ctx->pc = 0x3C89E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89E0u;
        // 0x3c89e4: 0x7bb10470  lq          $s1, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C89E8u;
        goto label_3c89e8;
    }
    ctx->pc = 0x3C89E0u;
    {
        const bool branch_taken_0x3c89e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c89e0) {
            ctx->pc = 0x3C89E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C89E0u;
            // 0x3c89e4: 0x7bb10470  lq          $s1, 0x470($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8B10u;
            goto label_3c8b10;
        }
    }
    ctx->pc = 0x3C89E8u;
label_3c89e8:
    // 0x3c89e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3c89e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c89ec:
    // 0x3c89ec: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_3c89f0:
    if (ctx->pc == 0x3C89F0u) {
        ctx->pc = 0x3C89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89ECu;
        // 0x3c89f0: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C89F4u;
        goto label_3c89f4;
    }
    ctx->pc = 0x3C89ECu;
    {
        const bool branch_taken_0x3c89ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c89ec) {
            ctx->pc = 0x3C89F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C89ECu;
            // 0x3c89f0: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8A48u;
            goto label_3c8a48;
        }
    }
    ctx->pc = 0x3C89F4u;
label_3c89f4:
    // 0x3c89f4: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3c89f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3c89f8:
    // 0x3c89f8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c89f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c89fc:
    // 0x3c89fc: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3c89fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3c8a00:
    // 0x3c8a00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c8a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c8a04:
    // 0x3c8a04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c8a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8a08:
    // 0x3c8a08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c8a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c8a0c:
    // 0x3c8a0c: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3c8a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3c8a10:
    // 0x3c8a10: 0x26104480  addiu       $s0, $s0, 0x4480
    ctx->pc = 0x3c8a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17536));
label_3c8a14:
    // 0x3c8a14: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3c8a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3c8a18:
    // 0x3c8a18: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3c8a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3c8a1c:
    // 0x3c8a1c: 0xe7a00430  swc1        $f0, 0x430($sp)
    ctx->pc = 0x3c8a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_3c8a20:
    // 0x3c8a20: 0x27a70430  addiu       $a3, $sp, 0x430
    ctx->pc = 0x3c8a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c8a24:
    // 0x3c8a24: 0xafa00420  sw          $zero, 0x420($sp)
    ctx->pc = 0x3c8a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 0));
label_3c8a28:
    // 0x3c8a28: 0x27a80440  addiu       $t0, $sp, 0x440
    ctx->pc = 0x3c8a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c8a2c:
    // 0x3c8a2c: 0xc0e9fd0  jal         func_3A7F40
label_3c8a30:
    if (ctx->pc == 0x3C8A30u) {
        ctx->pc = 0x3C8A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A2Cu;
        // 0x3c8a30: 0xafb20440  sw          $s2, 0x440($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8A34u;
        goto label_3c8a34;
    }
    ctx->pc = 0x3C8A2Cu;
    SET_GPR_U32(ctx, 31, 0x3C8A34u);
    ctx->pc = 0x3C8A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8A2Cu;
    // 0x3c8a30: 0xafb20440  sw          $s2, 0x440($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C8A2Cu, 0x3C8A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8A34u;
label_3c8a34:
    // 0x3c8a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8a38:
    // 0x3c8a38: 0xc0f15bc  jal         func_3C56F0
label_3c8a3c:
    if (ctx->pc == 0x3C8A3Cu) {
        ctx->pc = 0x3C8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A38u;
        // 0x3c8a3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8A40u;
        goto label_3c8a40;
    }
    ctx->pc = 0x3C8A38u;
    SET_GPR_U32(ctx, 31, 0x3C8A40u);
    ctx->pc = 0x3C8A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8A38u;
    // 0x3c8a3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C8A38u, 0x3C8A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8A40u;
label_3c8a40:
    // 0x3c8a40: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3c8a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3c8a44:
    // 0x3c8a44: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3c8a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c8a48:
    // 0x3c8a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8a4c:
    // 0x3c8a4c: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
label_3c8a50:
    if (ctx->pc == 0x3C8A50u) {
        ctx->pc = 0x3C8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A4Cu;
        // 0x3c8a50: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8A54u;
        goto label_3c8a54;
    }
    ctx->pc = 0x3C8A4Cu;
    {
        const bool branch_taken_0x3c8a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A4Cu;
        // 0x3c8a50: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8a4c) {
            ctx->pc = 0x3C8B0Cu;
            goto label_3c8b0c;
        }
    }
    ctx->pc = 0x3C8A54u;
label_3c8a54:
    // 0x3c8a54: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3c8a54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3c8a58:
    // 0x3c8a58: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3c8a58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3c8a5c:
    // 0x3c8a5c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x3c8a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_3c8a60:
    // 0x3c8a60: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c8a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c8a64:
    // 0x3c8a64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c8a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8a68:
    // 0x3c8a68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c8a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c8a6c:
    // 0x3c8a6c: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3c8a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3c8a70:
    // 0x3c8a70: 0x26104480  addiu       $s0, $s0, 0x4480
    ctx->pc = 0x3c8a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17536));
label_3c8a74:
    // 0x3c8a74: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3c8a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3c8a78:
    // 0x3c8a78: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3c8a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3c8a7c:
    // 0x3c8a7c: 0xe7a00430  swc1        $f0, 0x430($sp)
    ctx->pc = 0x3c8a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_3c8a80:
    // 0x3c8a80: 0x27a70430  addiu       $a3, $sp, 0x430
    ctx->pc = 0x3c8a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3c8a84:
    // 0x3c8a84: 0xafb20440  sw          $s2, 0x440($sp)
    ctx->pc = 0x3c8a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 18));
label_3c8a88:
    // 0x3c8a88: 0x27a80440  addiu       $t0, $sp, 0x440
    ctx->pc = 0x3c8a88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3c8a8c:
    // 0x3c8a8c: 0xc0e9fd0  jal         func_3A7F40
label_3c8a90:
    if (ctx->pc == 0x3C8A90u) {
        ctx->pc = 0x3C8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A8Cu;
        // 0x3c8a90: 0xafa00420  sw          $zero, 0x420($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8A94u;
        goto label_3c8a94;
    }
    ctx->pc = 0x3C8A8Cu;
    SET_GPR_U32(ctx, 31, 0x3C8A94u);
    ctx->pc = 0x3C8A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8A8Cu;
    // 0x3c8a90: 0xafa00420  sw          $zero, 0x420($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3C8A8Cu, 0x3C8A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8A94u;
label_3c8a94:
    // 0x3c8a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8a98:
    // 0x3c8a98: 0xc0f15bc  jal         func_3C56F0
label_3c8a9c:
    if (ctx->pc == 0x3C8A9Cu) {
        ctx->pc = 0x3C8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A98u;
        // 0x3c8a9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8AA0u;
        goto label_3c8aa0;
    }
    ctx->pc = 0x3C8A98u;
    SET_GPR_U32(ctx, 31, 0x3C8AA0u);
    ctx->pc = 0x3C8A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8A98u;
    // 0x3c8a9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3C8A98u, 0x3C8AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8AA0u;
label_3c8aa0:
    // 0x3c8aa0: 0x10000019  b           . + 4 + (0x19 << 2)
label_3c8aa4:
    if (ctx->pc == 0x3C8AA4u) {
        ctx->pc = 0x3C8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AA0u;
        // 0x3c8aa4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8AA8u;
        goto label_3c8aa8;
    }
    ctx->pc = 0x3C8AA0u;
    {
        const bool branch_taken_0x3c8aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AA0u;
        // 0x3c8aa4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8aa0) {
            ctx->pc = 0x3C8B08u;
            goto label_3c8b08;
        }
    }
    ctx->pc = 0x3C8AA8u;
label_3c8aa8:
    // 0x3c8aa8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3c8aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c8aac:
    // 0x3c8aac: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_3c8ab0:
    if (ctx->pc == 0x3C8AB0u) {
        ctx->pc = 0x3C8AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AACu;
        // 0x3c8ab0: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8AB4u;
        goto label_3c8ab4;
    }
    ctx->pc = 0x3C8AACu;
    {
        const bool branch_taken_0x3c8aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AACu;
        // 0x3c8ab0: 0x7bb00480  lq          $s0, 0x480($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8aac) {
            ctx->pc = 0x3C8B0Cu;
            goto label_3c8b0c;
        }
    }
    ctx->pc = 0x3C8AB4u;
label_3c8ab4:
    // 0x3c8ab4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3c8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3c8ab8:
    // 0x3c8ab8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3c8ab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3c8abc:
    // 0x3c8abc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3c8abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3c8ac0:
    // 0x3c8ac0: 0x60f809  jalr        $v1
label_3c8ac4:
    if (ctx->pc == 0x3C8AC4u) {
        ctx->pc = 0x3C8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AC0u;
        // 0x3c8ac4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8AC8u;
        goto label_3c8ac8;
    }
    ctx->pc = 0x3C8AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C8AC8u);
        ctx->pc = 0x3C8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AC0u;
        // 0x3c8ac4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8AC0u, 0x3C8AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C8AC8u;
label_3c8ac8:
    // 0x3c8ac8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3c8acc:
    if (ctx->pc == 0x3C8ACCu) {
        ctx->pc = 0x3C8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AC8u;
        // 0x3c8acc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8AD0u;
        goto label_3c8ad0;
    }
    ctx->pc = 0x3C8AC8u;
    {
        const bool branch_taken_0x3c8ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AC8u;
        // 0x3c8acc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ac8) {
            ctx->pc = 0x3C8B08u;
            goto label_3c8b08;
        }
    }
    ctx->pc = 0x3C8AD0u;
label_3c8ad0:
    // 0x3c8ad0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3c8ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c8ad4:
    // 0x3c8ad4: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_3c8ad8:
    if (ctx->pc == 0x3C8AD8u) {
        ctx->pc = 0x3C8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AD4u;
        // 0x3c8ad8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8ADCu;
        goto label_3c8adc;
    }
    ctx->pc = 0x3C8AD4u;
    {
        const bool branch_taken_0x3c8ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8ad4) {
            ctx->pc = 0x3C8AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8AD4u;
            // 0x3c8ad8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8AF8u;
            goto label_3c8af8;
        }
    }
    ctx->pc = 0x3C8ADCu;
label_3c8adc:
    // 0x3c8adc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3c8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3c8ae0:
    // 0x3c8ae0: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3c8ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3c8ae4:
    // 0x3c8ae4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3c8ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3c8ae8:
    // 0x3c8ae8: 0x60f809  jalr        $v1
label_3c8aec:
    if (ctx->pc == 0x3C8AECu) {
        ctx->pc = 0x3C8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AE8u;
        // 0x3c8aec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8AF0u;
        goto label_3c8af0;
    }
    ctx->pc = 0x3C8AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C8AF0u);
        ctx->pc = 0x3C8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AE8u;
        // 0x3c8aec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8AE8u, 0x3C8AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C8AF0u;
label_3c8af0:
    // 0x3c8af0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3c8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3c8af4:
    // 0x3c8af4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c8af8:
    // 0x3c8af8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3c8af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3c8afc:
    // 0x3c8afc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3c8afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3c8b00:
    // 0x3c8b00: 0x60f809  jalr        $v1
label_3c8b04:
    if (ctx->pc == 0x3C8B04u) {
        ctx->pc = 0x3C8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B00u;
        // 0x3c8b04: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8B08u;
        goto label_3c8b08;
    }
    ctx->pc = 0x3C8B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C8B08u);
        ctx->pc = 0x3C8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B00u;
        // 0x3c8b04: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8B00u, 0x3C8B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C8B08u;
label_3c8b08:
    // 0x3c8b08: 0x7bb00480  lq          $s0, 0x480($sp)
    ctx->pc = 0x3c8b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3c8b0c:
    // 0x3c8b0c: 0x7bb10470  lq          $s1, 0x470($sp)
    ctx->pc = 0x3c8b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3c8b10:
    // 0x3c8b10: 0x7bb20460  lq          $s2, 0x460($sp)
    ctx->pc = 0x3c8b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3c8b14:
    // 0x3c8b14: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x3c8b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
label_3c8b18:
    // 0x3c8b18: 0x3e00008  jr          $ra
label_3c8b1c:
    if (ctx->pc == 0x3C8B1Cu) {
        ctx->pc = 0x3C8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B18u;
        // 0x3c8b1c: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8B20u;
        goto label_fallthrough_0x3c8b18;
    }
    ctx->pc = 0x3C8B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B18u;
        // 0x3c8b1c: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c8b18:
    ctx->pc = 0x3C8B20u;
}
