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

// Function: sub_002F5988
// Address: 0x2f5988 - 0x2f5b88
void sub_002F5988_0x2f5988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5988_0x2f5988");
#endif

    switch (ctx->pc) {
        case 0x2f5988u: goto label_2f5988;
        case 0x2f598cu: goto label_2f598c;
        case 0x2f5990u: goto label_2f5990;
        case 0x2f5994u: goto label_2f5994;
        case 0x2f5998u: goto label_2f5998;
        case 0x2f599cu: goto label_2f599c;
        case 0x2f59a0u: goto label_2f59a0;
        case 0x2f59a4u: goto label_2f59a4;
        case 0x2f59a8u: goto label_2f59a8;
        case 0x2f59acu: goto label_2f59ac;
        case 0x2f59b0u: goto label_2f59b0;
        case 0x2f59b4u: goto label_2f59b4;
        case 0x2f59b8u: goto label_2f59b8;
        case 0x2f59bcu: goto label_2f59bc;
        case 0x2f59c0u: goto label_2f59c0;
        case 0x2f59c4u: goto label_2f59c4;
        case 0x2f59c8u: goto label_2f59c8;
        case 0x2f59ccu: goto label_2f59cc;
        case 0x2f59d0u: goto label_2f59d0;
        case 0x2f59d4u: goto label_2f59d4;
        case 0x2f59d8u: goto label_2f59d8;
        case 0x2f59dcu: goto label_2f59dc;
        case 0x2f59e0u: goto label_2f59e0;
        case 0x2f59e4u: goto label_2f59e4;
        case 0x2f59e8u: goto label_2f59e8;
        case 0x2f59ecu: goto label_2f59ec;
        case 0x2f59f0u: goto label_2f59f0;
        case 0x2f59f4u: goto label_2f59f4;
        case 0x2f59f8u: goto label_2f59f8;
        case 0x2f59fcu: goto label_2f59fc;
        case 0x2f5a00u: goto label_2f5a00;
        case 0x2f5a04u: goto label_2f5a04;
        case 0x2f5a08u: goto label_2f5a08;
        case 0x2f5a0cu: goto label_2f5a0c;
        case 0x2f5a10u: goto label_2f5a10;
        case 0x2f5a14u: goto label_2f5a14;
        case 0x2f5a18u: goto label_2f5a18;
        case 0x2f5a1cu: goto label_2f5a1c;
        case 0x2f5a20u: goto label_2f5a20;
        case 0x2f5a24u: goto label_2f5a24;
        case 0x2f5a28u: goto label_2f5a28;
        case 0x2f5a2cu: goto label_2f5a2c;
        case 0x2f5a30u: goto label_2f5a30;
        case 0x2f5a34u: goto label_2f5a34;
        case 0x2f5a38u: goto label_2f5a38;
        case 0x2f5a3cu: goto label_2f5a3c;
        case 0x2f5a40u: goto label_2f5a40;
        case 0x2f5a44u: goto label_2f5a44;
        case 0x2f5a48u: goto label_2f5a48;
        case 0x2f5a4cu: goto label_2f5a4c;
        case 0x2f5a50u: goto label_2f5a50;
        case 0x2f5a54u: goto label_2f5a54;
        case 0x2f5a58u: goto label_2f5a58;
        case 0x2f5a5cu: goto label_2f5a5c;
        case 0x2f5a60u: goto label_2f5a60;
        case 0x2f5a64u: goto label_2f5a64;
        case 0x2f5a68u: goto label_2f5a68;
        case 0x2f5a6cu: goto label_2f5a6c;
        case 0x2f5a70u: goto label_2f5a70;
        case 0x2f5a74u: goto label_2f5a74;
        case 0x2f5a78u: goto label_2f5a78;
        case 0x2f5a7cu: goto label_2f5a7c;
        case 0x2f5a80u: goto label_2f5a80;
        case 0x2f5a84u: goto label_2f5a84;
        case 0x2f5a88u: goto label_2f5a88;
        case 0x2f5a8cu: goto label_2f5a8c;
        case 0x2f5a90u: goto label_2f5a90;
        case 0x2f5a94u: goto label_2f5a94;
        case 0x2f5a98u: goto label_2f5a98;
        case 0x2f5a9cu: goto label_2f5a9c;
        case 0x2f5aa0u: goto label_2f5aa0;
        case 0x2f5aa4u: goto label_2f5aa4;
        case 0x2f5aa8u: goto label_2f5aa8;
        case 0x2f5aacu: goto label_2f5aac;
        case 0x2f5ab0u: goto label_2f5ab0;
        case 0x2f5ab4u: goto label_2f5ab4;
        case 0x2f5ab8u: goto label_2f5ab8;
        case 0x2f5abcu: goto label_2f5abc;
        case 0x2f5ac0u: goto label_2f5ac0;
        case 0x2f5ac4u: goto label_2f5ac4;
        case 0x2f5ac8u: goto label_2f5ac8;
        case 0x2f5accu: goto label_2f5acc;
        case 0x2f5ad0u: goto label_2f5ad0;
        case 0x2f5ad4u: goto label_2f5ad4;
        case 0x2f5ad8u: goto label_2f5ad8;
        case 0x2f5adcu: goto label_2f5adc;
        case 0x2f5ae0u: goto label_2f5ae0;
        case 0x2f5ae4u: goto label_2f5ae4;
        case 0x2f5ae8u: goto label_2f5ae8;
        case 0x2f5aecu: goto label_2f5aec;
        case 0x2f5af0u: goto label_2f5af0;
        case 0x2f5af4u: goto label_2f5af4;
        case 0x2f5af8u: goto label_2f5af8;
        case 0x2f5afcu: goto label_2f5afc;
        case 0x2f5b00u: goto label_2f5b00;
        case 0x2f5b04u: goto label_2f5b04;
        case 0x2f5b08u: goto label_2f5b08;
        case 0x2f5b0cu: goto label_2f5b0c;
        case 0x2f5b10u: goto label_2f5b10;
        case 0x2f5b14u: goto label_2f5b14;
        case 0x2f5b18u: goto label_2f5b18;
        case 0x2f5b1cu: goto label_2f5b1c;
        case 0x2f5b20u: goto label_2f5b20;
        case 0x2f5b24u: goto label_2f5b24;
        case 0x2f5b28u: goto label_2f5b28;
        case 0x2f5b2cu: goto label_2f5b2c;
        case 0x2f5b30u: goto label_2f5b30;
        case 0x2f5b34u: goto label_2f5b34;
        case 0x2f5b38u: goto label_2f5b38;
        case 0x2f5b3cu: goto label_2f5b3c;
        case 0x2f5b40u: goto label_2f5b40;
        case 0x2f5b44u: goto label_2f5b44;
        case 0x2f5b48u: goto label_2f5b48;
        case 0x2f5b4cu: goto label_2f5b4c;
        case 0x2f5b50u: goto label_2f5b50;
        case 0x2f5b54u: goto label_2f5b54;
        case 0x2f5b58u: goto label_2f5b58;
        case 0x2f5b5cu: goto label_2f5b5c;
        case 0x2f5b60u: goto label_2f5b60;
        case 0x2f5b64u: goto label_2f5b64;
        case 0x2f5b68u: goto label_2f5b68;
        case 0x2f5b6cu: goto label_2f5b6c;
        case 0x2f5b70u: goto label_2f5b70;
        case 0x2f5b74u: goto label_2f5b74;
        case 0x2f5b78u: goto label_2f5b78;
        case 0x2f5b7cu: goto label_2f5b7c;
        case 0x2f5b80u: goto label_2f5b80;
        case 0x2f5b84u: goto label_2f5b84;
        default: break;
    }

    ctx->pc = 0x2f5988u;

label_2f5988:
    // 0x2f5988: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f5988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2f598c:
    // 0x2f598c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f598cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5990:
    // 0x2f5990: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2f5990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2f5994:
    // 0x2f5994: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f5994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f5998:
    // 0x2f5998: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f5998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f599c:
    // 0x2f599c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2f599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2f59a0:
    // 0x2f59a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f59a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f59a4:
    // 0x2f59a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2f59a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2f59a8:
    // 0x2f59a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f59a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f59ac:
    // 0x2f59ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f59acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f59b0:
    // 0x2f59b0: 0x9253003c  lbu         $s3, 0x3C($s2)
    ctx->pc = 0x2f59b0u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
label_2f59b4:
    // 0x2f59b4: 0x16630069  bne         $s3, $v1, . + 4 + (0x69 << 2)
label_2f59b8:
    if (ctx->pc == 0x2F59B8u) {
        ctx->pc = 0x2F59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59B4u;
        // 0x2f59b8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F59BCu;
        goto label_2f59bc;
    }
    ctx->pc = 0x2F59B4u;
    {
        const bool branch_taken_0x2f59b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59B4u;
        // 0x2f59b8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59b4) {
            ctx->pc = 0x2F5B5Cu;
            goto label_2f5b5c;
        }
    }
    ctx->pc = 0x2F59BCu;
label_2f59bc:
    // 0x2f59bc: 0xc08a158  jal         func_228560
label_2f59c0:
    if (ctx->pc == 0x2F59C0u) {
        ctx->pc = 0x2F59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59BCu;
        // 0x2f59c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F59C4u;
        goto label_2f59c4;
    }
    ctx->pc = 0x2F59BCu;
    SET_GPR_U32(ctx, 31, 0x2F59C4u);
    ctx->pc = 0x2F59C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59BCu;
    // 0x2f59c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228560u, 0x2F59BCu, 0x2F59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59C4u;
label_2f59c4:
    // 0x2f59c4: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
label_2f59c8:
    if (ctx->pc == 0x2F59C8u) {
        ctx->pc = 0x2F59C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59C4u;
        // 0x2f59c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F59CCu;
        goto label_2f59cc;
    }
    ctx->pc = 0x2F59C4u;
    {
        const bool branch_taken_0x2f59c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F59C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59C4u;
        // 0x2f59c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59c4) {
            ctx->pc = 0x2F5B60u;
            goto label_2f5b60;
        }
    }
    ctx->pc = 0x2F59CCu;
label_2f59cc:
    // 0x2f59cc: 0xc08a08a  jal         func_228228
label_2f59d0:
    if (ctx->pc == 0x2F59D0u) {
        ctx->pc = 0x2F59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59CCu;
        // 0x2f59d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F59D4u;
        goto label_2f59d4;
    }
    ctx->pc = 0x2F59CCu;
    SET_GPR_U32(ctx, 31, 0x2F59D4u);
    ctx->pc = 0x2F59D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59CCu;
    // 0x2f59d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2F59CCu, 0x2F59D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59D4u;
label_2f59d4:
    // 0x2f59d4: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_2f59d8:
    if (ctx->pc == 0x2F59D8u) {
        ctx->pc = 0x2F59D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59D4u;
        // 0x2f59d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F59DCu;
        goto label_2f59dc;
    }
    ctx->pc = 0x2F59D4u;
    {
        const bool branch_taken_0x2f59d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F59D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59D4u;
        // 0x2f59d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59d4) {
            ctx->pc = 0x2F5B60u;
            goto label_2f5b60;
        }
    }
    ctx->pc = 0x2F59DCu;
label_2f59dc:
    // 0x2f59dc: 0xc088b90  jal         func_222E40
label_2f59e0:
    if (ctx->pc == 0x2F59E0u) {
        ctx->pc = 0x2F59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59DCu;
        // 0x2f59e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F59E4u;
        goto label_2f59e4;
    }
    ctx->pc = 0x2F59DCu;
    SET_GPR_U32(ctx, 31, 0x2F59E4u);
    ctx->pc = 0x2F59E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59DCu;
    // 0x2f59e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x2F59DCu, 0x2F59E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59E4u;
label_2f59e4:
    // 0x2f59e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f59e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f59e8:
    // 0x2f59e8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2f59e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f59ec:
    // 0x2f59ec: 0x1460005c  bnez        $v1, . + 4 + (0x5C << 2)
label_2f59f0:
    if (ctx->pc == 0x2F59F0u) {
        ctx->pc = 0x2F59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59ECu;
        // 0x2f59f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F59F4u;
        goto label_2f59f4;
    }
    ctx->pc = 0x2F59ECu;
    {
        const bool branch_taken_0x2f59ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F59F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59ECu;
        // 0x2f59f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59ec) {
            ctx->pc = 0x2F5B60u;
            goto label_2f5b60;
        }
    }
    ctx->pc = 0x2F59F4u;
label_2f59f4:
    // 0x2f59f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2f59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2f59f8:
    // 0x2f59f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f59f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f59fc:
    // 0x2f59fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f59fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f5a00:
    // 0x2f5a00: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2f5a00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2f5a04:
    // 0x2f5a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f5a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f5a08:
    // 0x2f5a08: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2f5a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2f5a0c:
    // 0x2f5a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f5a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5a10:
    // 0x2f5a10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f5a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5a14:
    // 0x2f5a14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f5a14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5a18:
    // 0x2f5a18: 0xc088178  jal         func_2205E0
label_2f5a1c:
    if (ctx->pc == 0x2F5A1Cu) {
        ctx->pc = 0x2F5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A18u;
        // 0x2f5a1c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A20u;
        goto label_2f5a20;
    }
    ctx->pc = 0x2F5A18u;
    SET_GPR_U32(ctx, 31, 0x2F5A20u);
    ctx->pc = 0x2F5A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A18u;
    // 0x2f5a1c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F5A18u, 0x2F5A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5A20u;
label_2f5a20:
    // 0x2f5a20: 0x8e230488  lw          $v1, 0x488($s1)
    ctx->pc = 0x2f5a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1160)));
label_2f5a24:
    // 0x2f5a24: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x2f5a24u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2f5a28:
    // 0x2f5a28: 0x1613004d  bne         $s0, $s3, . + 4 + (0x4D << 2)
label_2f5a2c:
    if (ctx->pc == 0x2F5A2Cu) {
        ctx->pc = 0x2F5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A28u;
        // 0x2f5a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A30u;
        goto label_2f5a30;
    }
    ctx->pc = 0x2F5A28u;
    {
        const bool branch_taken_0x2f5a28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x2F5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A28u;
        // 0x2f5a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a28) {
            ctx->pc = 0x2F5B60u;
            goto label_2f5b60;
        }
    }
    ctx->pc = 0x2F5A30u;
label_2f5a30:
    // 0x2f5a30: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f5a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2f5a34:
    // 0x2f5a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f5a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f5a38:
    // 0x2f5a38: 0xc089998  jal         func_226660
label_2f5a3c:
    if (ctx->pc == 0x2F5A3Cu) {
        ctx->pc = 0x2F5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A38u;
        // 0x2f5a3c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A40u;
        goto label_2f5a40;
    }
    ctx->pc = 0x2F5A38u;
    SET_GPR_U32(ctx, 31, 0x2F5A40u);
    ctx->pc = 0x2F5A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A38u;
    // 0x2f5a3c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2F5A38u, 0x2F5A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5A40u;
label_2f5a40:
    // 0x2f5a40: 0x1450000c  bne         $v0, $s0, . + 4 + (0xC << 2)
label_2f5a44:
    if (ctx->pc == 0x2F5A44u) {
        ctx->pc = 0x2F5A48u;
        goto label_2f5a48;
    }
    ctx->pc = 0x2F5A40u;
    {
        const bool branch_taken_0x2f5a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f5a40) {
            ctx->pc = 0x2F5A74u;
            goto label_2f5a74;
        }
    }
    ctx->pc = 0x2F5A48u;
label_2f5a48:
    // 0x2f5a48: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x2f5a48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2f5a4c:
    // 0x2f5a4c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2f5a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f5a50:
    // 0x2f5a50: 0xc05dc0e  jal         func_177038
label_2f5a54:
    if (ctx->pc == 0x2F5A54u) {
        ctx->pc = 0x2F5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A50u;
        // 0x2f5a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A58u;
        goto label_2f5a58;
    }
    ctx->pc = 0x2F5A50u;
    SET_GPR_U32(ctx, 31, 0x2F5A58u);
    ctx->pc = 0x2F5A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A50u;
    // 0x2f5a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177038u, 0x2F5A50u, 0x2F5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5A58u;
label_2f5a58:
    // 0x2f5a58: 0xc05d484  jal         func_175210
label_2f5a5c:
    if (ctx->pc == 0x2F5A5Cu) {
        ctx->pc = 0x2F5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A58u;
        // 0x2f5a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A60u;
        goto label_2f5a60;
    }
    ctx->pc = 0x2F5A58u;
    SET_GPR_U32(ctx, 31, 0x2F5A60u);
    ctx->pc = 0x2F5A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A58u;
    // 0x2f5a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2F5A58u, 0x2F5A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5A60u;
label_2f5a60:
    // 0x2f5a60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f5a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5a64:
    // 0x2f5a64: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2f5a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2f5a68:
    // 0x2f5a68: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2f5a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2f5a6c:
    // 0x2f5a6c: 0xa0f809  jalr        $a1
label_2f5a70:
    if (ctx->pc == 0x2F5A70u) {
        ctx->pc = 0x2F5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A6Cu;
        // 0x2f5a70: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A74u;
        goto label_2f5a74;
    }
    ctx->pc = 0x2F5A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2F5A74u);
        ctx->pc = 0x2F5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A6Cu;
        // 0x2f5a70: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5A6Cu, 0x2F5A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F5A74u;
label_2f5a74:
    // 0x2f5a74: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f5a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2f5a78:
    // 0x2f5a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f5a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f5a7c:
    // 0x2f5a7c: 0xc089998  jal         func_226660
label_2f5a80:
    if (ctx->pc == 0x2F5A80u) {
        ctx->pc = 0x2F5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A7Cu;
        // 0x2f5a80: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A84u;
        goto label_2f5a84;
    }
    ctx->pc = 0x2F5A7Cu;
    SET_GPR_U32(ctx, 31, 0x2F5A84u);
    ctx->pc = 0x2F5A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5A7Cu;
    // 0x2f5a80: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2F5A7Cu, 0x2F5A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5A84u;
label_2f5a84:
    // 0x2f5a84: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
label_2f5a88:
    if (ctx->pc == 0x2F5A88u) {
        ctx->pc = 0x2F5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A84u;
        // 0x2f5a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5A8Cu;
        goto label_2f5a8c;
    }
    ctx->pc = 0x2F5A84u;
    {
        const bool branch_taken_0x2f5a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5a84) {
            ctx->pc = 0x2F5A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5A84u;
            // 0x2f5a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5B60u;
            goto label_2f5b60;
        }
    }
    ctx->pc = 0x2F5A8Cu;
label_2f5a8c:
    // 0x2f5a8c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2f5a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f5a90:
    // 0x2f5a90: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2f5a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2f5a94:
    // 0x2f5a94: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f5a94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f5a98:
    // 0x2f5a98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f5a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f5a9c:
    // 0x2f5a9c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2f5a9cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_2f5aa0:
    // 0x2f5aa0: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x2f5aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5aa4:
    // 0x2f5aa4: 0x0  nop
    ctx->pc = 0x2f5aa4u;
    // NOP
label_2f5aa8:
    // 0x2f5aa8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f5aac:
    if (ctx->pc == 0x2F5AACu) {
        ctx->pc = 0x2F5AB0u;
        goto label_2f5ab0;
    }
    ctx->pc = 0x2F5AA8u;
    {
        const bool branch_taken_0x2f5aa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5aa8) {
            ctx->pc = 0x2F5AC4u;
            goto label_2f5ac4;
        }
    }
    ctx->pc = 0x2F5AB0u;
label_2f5ab0:
    // 0x2f5ab0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f5ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f5ab4:
    // 0x2f5ab4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f5ab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f5ab8:
    // 0x2f5ab8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5abc:
    // 0x2f5abc: 0x0  nop
    ctx->pc = 0x2f5abcu;
    // NOP
label_2f5ac0:
    // 0x2f5ac0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f5ac0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2f5ac4:
    // 0x2f5ac4: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2f5ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_2f5ac8:
    // 0x2f5ac8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f5ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f5acc:
    // 0x2f5acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5ad0:
    // 0x2f5ad0: 0x0  nop
    ctx->pc = 0x2f5ad0u;
    // NOP
label_2f5ad4:
    // 0x2f5ad4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2f5ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5ad8:
    // 0x2f5ad8: 0x0  nop
    ctx->pc = 0x2f5ad8u;
    // NOP
label_2f5adc:
    // 0x2f5adc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f5ae0:
    if (ctx->pc == 0x2F5AE0u) {
        ctx->pc = 0x2F5AE4u;
        goto label_2f5ae4;
    }
    ctx->pc = 0x2F5ADCu;
    {
        const bool branch_taken_0x2f5adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5adc) {
            ctx->pc = 0x2F5AF8u;
            goto label_2f5af8;
        }
    }
    ctx->pc = 0x2F5AE4u;
label_2f5ae4:
    // 0x2f5ae4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f5ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f5ae8:
    // 0x2f5ae8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f5ae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f5aec:
    // 0x2f5aec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5af0:
    // 0x2f5af0: 0x0  nop
    ctx->pc = 0x2f5af0u;
    // NOP
label_2f5af4:
    // 0x2f5af4: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2f5af4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2f5af8:
    // 0x2f5af8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2f5af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2f5afc:
    // 0x2f5afc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2f5afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2f5b00:
    // 0x2f5b00: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f5b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f5b04:
    // 0x2f5b04: 0xc08f3e2  jal         func_23CF88
label_2f5b08:
    if (ctx->pc == 0x2F5B08u) {
        ctx->pc = 0x2F5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B04u;
        // 0x2f5b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B0Cu;
        goto label_2f5b0c;
    }
    ctx->pc = 0x2F5B04u;
    SET_GPR_U32(ctx, 31, 0x2F5B0Cu);
    ctx->pc = 0x2F5B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B04u;
    // 0x2f5b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x2F5B04u, 0x2F5B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B0Cu;
label_2f5b0c:
    // 0x2f5b0c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2f5b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f5b10:
    // 0x2f5b10: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2f5b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_2f5b14:
    // 0x2f5b14: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x2f5b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_2f5b18:
    // 0x2f5b18: 0xc089974  jal         func_2265D0
label_2f5b1c:
    if (ctx->pc == 0x2F5B1Cu) {
        ctx->pc = 0x2F5B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B18u;
        // 0x2f5b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B20u;
        goto label_2f5b20;
    }
    ctx->pc = 0x2F5B18u;
    SET_GPR_U32(ctx, 31, 0x2F5B20u);
    ctx->pc = 0x2F5B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B18u;
    // 0x2f5b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x2F5B18u, 0x2F5B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B20u;
label_2f5b20:
    // 0x2f5b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f5b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f5b24:
    // 0x2f5b24: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2f5b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2f5b28:
    // 0x2f5b28: 0xc094d7c  jal         func_2535F0
label_2f5b2c:
    if (ctx->pc == 0x2F5B2Cu) {
        ctx->pc = 0x2F5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B28u;
        // 0x2f5b2c: 0x240601a6  addiu       $a2, $zero, 0x1A6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B30u;
        goto label_2f5b30;
    }
    ctx->pc = 0x2F5B28u;
    SET_GPR_U32(ctx, 31, 0x2F5B30u);
    ctx->pc = 0x2F5B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B28u;
    // 0x2f5b2c: 0x240601a6  addiu       $a2, $zero, 0x1A6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2F5B28u, 0x2F5B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B30u;
label_2f5b30:
    // 0x2f5b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f5b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f5b34:
    // 0x2f5b34: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2f5b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2f5b38:
    // 0x2f5b38: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2f5b38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_2f5b3c:
    // 0x2f5b3c: 0xc096a30  jal         func_25A8C0
label_2f5b40:
    if (ctx->pc == 0x2F5B40u) {
        ctx->pc = 0x2F5B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B3Cu;
        // 0x2f5b40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B44u;
        goto label_2f5b44;
    }
    ctx->pc = 0x2F5B3Cu;
    SET_GPR_U32(ctx, 31, 0x2F5B44u);
    ctx->pc = 0x2F5B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B3Cu;
    // 0x2f5b40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x2F5B3Cu, 0x2F5B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B44u;
label_2f5b44:
    // 0x2f5b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f5b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f5b48:
    // 0x2f5b48: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2f5b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2f5b4c:
    // 0x2f5b4c: 0xc094d7c  jal         func_2535F0
label_2f5b50:
    if (ctx->pc == 0x2F5B50u) {
        ctx->pc = 0x2F5B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B4Cu;
        // 0x2f5b50: 0x24060166  addiu       $a2, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B54u;
        goto label_2f5b54;
    }
    ctx->pc = 0x2F5B4Cu;
    SET_GPR_U32(ctx, 31, 0x2F5B54u);
    ctx->pc = 0x2F5B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B4Cu;
    // 0x2f5b50: 0x24060166  addiu       $a2, $zero, 0x166 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2F5B4Cu, 0x2F5B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B54u;
label_2f5b54:
    // 0x2f5b54: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f5b58:
    if (ctx->pc == 0x2F5B58u) {
        ctx->pc = 0x2F5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B54u;
        // 0x2f5b58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B5Cu;
        goto label_2f5b5c;
    }
    ctx->pc = 0x2F5B54u;
    {
        const bool branch_taken_0x2f5b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B54u;
        // 0x2f5b58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b54) {
            ctx->pc = 0x2F5B60u;
            goto label_2f5b60;
        }
    }
    ctx->pc = 0x2F5B5Cu;
label_2f5b5c:
    // 0x2f5b5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5b60:
    // 0x2f5b60: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2f5b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f5b64:
    // 0x2f5b64: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2f5b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f5b68:
    // 0x2f5b68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f5b68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f5b6c:
    // 0x2f5b6c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2f5b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f5b70:
    // 0x2f5b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f5b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f5b74:
    // 0x2f5b74: 0x3e00008  jr          $ra
label_2f5b78:
    if (ctx->pc == 0x2F5B78u) {
        ctx->pc = 0x2F5B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B74u;
        // 0x2f5b78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5B7Cu;
        goto label_2f5b7c;
    }
    ctx->pc = 0x2F5B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B74u;
        // 0x2f5b78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5B7Cu;
label_2f5b7c:
    // 0x2f5b7c: 0x0  nop
    ctx->pc = 0x2f5b7cu;
    // NOP
label_2f5b80:
    // 0x2f5b80: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2f5b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f5b84:
    // 0x2f5b84: 0x0  nop
    ctx->pc = 0x2f5b84u;
    // NOP
    ctx->pc = 0x2f5b88u;
}
