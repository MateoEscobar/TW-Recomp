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

// Function: sub_003D9978
// Address: 0x3d9978 - 0x3d9a48
void sub_003D9978_0x3d9978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9978_0x3d9978");
#endif

    switch (ctx->pc) {
        case 0x3d9978u: goto label_3d9978;
        case 0x3d997cu: goto label_3d997c;
        case 0x3d9980u: goto label_3d9980;
        case 0x3d9984u: goto label_3d9984;
        case 0x3d9988u: goto label_3d9988;
        case 0x3d998cu: goto label_3d998c;
        case 0x3d9990u: goto label_3d9990;
        case 0x3d9994u: goto label_3d9994;
        case 0x3d9998u: goto label_3d9998;
        case 0x3d999cu: goto label_3d999c;
        case 0x3d99a0u: goto label_3d99a0;
        case 0x3d99a4u: goto label_3d99a4;
        case 0x3d99a8u: goto label_3d99a8;
        case 0x3d99acu: goto label_3d99ac;
        case 0x3d99b0u: goto label_3d99b0;
        case 0x3d99b4u: goto label_3d99b4;
        case 0x3d99b8u: goto label_3d99b8;
        case 0x3d99bcu: goto label_3d99bc;
        case 0x3d99c0u: goto label_3d99c0;
        case 0x3d99c4u: goto label_3d99c4;
        case 0x3d99c8u: goto label_3d99c8;
        case 0x3d99ccu: goto label_3d99cc;
        case 0x3d99d0u: goto label_3d99d0;
        case 0x3d99d4u: goto label_3d99d4;
        case 0x3d99d8u: goto label_3d99d8;
        case 0x3d99dcu: goto label_3d99dc;
        case 0x3d99e0u: goto label_3d99e0;
        case 0x3d99e4u: goto label_3d99e4;
        case 0x3d99e8u: goto label_3d99e8;
        case 0x3d99ecu: goto label_3d99ec;
        case 0x3d99f0u: goto label_3d99f0;
        case 0x3d99f4u: goto label_3d99f4;
        case 0x3d99f8u: goto label_3d99f8;
        case 0x3d99fcu: goto label_3d99fc;
        case 0x3d9a00u: goto label_3d9a00;
        case 0x3d9a04u: goto label_3d9a04;
        case 0x3d9a08u: goto label_3d9a08;
        case 0x3d9a0cu: goto label_3d9a0c;
        case 0x3d9a10u: goto label_3d9a10;
        case 0x3d9a14u: goto label_3d9a14;
        case 0x3d9a18u: goto label_3d9a18;
        case 0x3d9a1cu: goto label_3d9a1c;
        case 0x3d9a20u: goto label_3d9a20;
        case 0x3d9a24u: goto label_3d9a24;
        case 0x3d9a28u: goto label_3d9a28;
        case 0x3d9a2cu: goto label_3d9a2c;
        case 0x3d9a30u: goto label_3d9a30;
        case 0x3d9a34u: goto label_3d9a34;
        case 0x3d9a38u: goto label_3d9a38;
        case 0x3d9a3cu: goto label_3d9a3c;
        case 0x3d9a40u: goto label_3d9a40;
        case 0x3d9a44u: goto label_3d9a44;
        default: break;
    }

    ctx->pc = 0x3d9978u;

label_3d9978:
    // 0x3d9978: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d9978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d997c:
    // 0x3d997c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3d997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3d9980:
    // 0x3d9980: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d9980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3d9984:
    // 0x3d9984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9988:
    // 0x3d9988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d9988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d998c:
    // 0x3d998c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3d998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3d9990:
    // 0x3d9990: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d9990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d9994:
    // 0x3d9994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d9994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d9998:
    // 0x3d9998: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3d9998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d999c:
    // 0x3d999c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d99a0:
    // 0x3d99a0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d99a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d99a4:
    // 0x3d99a4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d99a8:
    // 0x3d99a8: 0x40f809  jalr        $v0
label_3d99ac:
    if (ctx->pc == 0x3D99ACu) {
        ctx->pc = 0x3D99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D99A8u;
        // 0x3d99ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D99B0u;
        goto label_3d99b0;
    }
    ctx->pc = 0x3D99A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D99B0u);
        ctx->pc = 0x3D99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D99A8u;
        // 0x3d99ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D99A8u, 0x3D99B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D99B0u;
label_3d99b0:
    // 0x3d99b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d99b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d99b4:
    // 0x3d99b4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3d99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3d99b8:
    // 0x3d99b8: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_3d99bc:
    if (ctx->pc == 0x3D99BCu) {
        ctx->pc = 0x3D99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D99B8u;
        // 0x3d99bc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D99C0u;
        goto label_3d99c0;
    }
    ctx->pc = 0x3D99B8u;
    {
        const bool branch_taken_0x3d99b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D99B8u;
        // 0x3d99bc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d99b8) {
            ctx->pc = 0x3D99D0u;
            goto label_3d99d0;
        }
    }
    ctx->pc = 0x3D99C0u;
label_3d99c0:
    // 0x3d99c0: 0x12420011  beq         $s2, $v0, . + 4 + (0x11 << 2)
label_3d99c4:
    if (ctx->pc == 0x3D99C4u) {
        ctx->pc = 0x3D99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D99C0u;
        // 0x3d99c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D99C8u;
        goto label_3d99c8;
    }
    ctx->pc = 0x3D99C0u;
    {
        const bool branch_taken_0x3d99c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D99C0u;
        // 0x3d99c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d99c0) {
            ctx->pc = 0x3D9A08u;
            goto label_3d9a08;
        }
    }
    ctx->pc = 0x3D99C8u;
label_3d99c8:
    // 0x3d99c8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3d99cc:
    if (ctx->pc == 0x3D99CCu) {
        ctx->pc = 0x3D99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D99C8u;
        // 0x3d99cc: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D99D0u;
        goto label_3d99d0;
    }
    ctx->pc = 0x3D99C8u;
    {
        const bool branch_taken_0x3d99c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D99C8u;
        // 0x3d99cc: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d99c8) {
            ctx->pc = 0x3D9A34u;
            goto label_3d9a34;
        }
    }
    ctx->pc = 0x3D99D0u;
label_3d99d0:
    // 0x3d99d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3d99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3d99d4:
    // 0x3d99d4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3d99d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3d99d8:
    // 0x3d99d8: 0x24632e00  addiu       $v1, $v1, 0x2E00
    ctx->pc = 0x3d99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11776));
label_3d99dc:
    // 0x3d99dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d99dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d99e0:
    // 0x3d99e0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3d99e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3d99e4:
    // 0x3d99e4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3d99e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3d99e8:
    // 0x3d99e8: 0xc0e858c  jal         func_3A1630
label_3d99ec:
    if (ctx->pc == 0x3D99ECu) {
        ctx->pc = 0x3D99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D99E8u;
        // 0x3d99ec: 0x8cc54588  lw          $a1, 0x4588($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 17800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D99F0u;
        goto label_3d99f0;
    }
    ctx->pc = 0x3D99E8u;
    SET_GPR_U32(ctx, 31, 0x3D99F0u);
    ctx->pc = 0x3D99ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D99E8u;
    // 0x3d99ec: 0x8cc54588  lw          $a1, 0x4588($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 17800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D99E8u, 0x3D99F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D99F0u;
label_3d99f0:
    // 0x3d99f0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3d99f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3d99f4:
    // 0x3d99f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d99f8:
    // 0x3d99f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3d99f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3d99fc:
    // 0x3d99fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d99fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d9a00:
    // 0x3d9a00: 0x1000000a  b           . + 4 + (0xA << 2)
label_3d9a04:
    if (ctx->pc == 0x3D9A04u) {
        ctx->pc = 0x3D9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A00u;
        // 0x3d9a04: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9A08u;
        goto label_3d9a08;
    }
    ctx->pc = 0x3D9A00u;
    {
        const bool branch_taken_0x3d9a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A00u;
        // 0x3d9a04: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9a00) {
            ctx->pc = 0x3D9A2Cu;
            goto label_3d9a2c;
        }
    }
    ctx->pc = 0x3D9A08u;
label_3d9a08:
    // 0x3d9a08: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x3d9a08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3d9a0c:
    // 0x3d9a0c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d9a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d9a10:
    // 0x3d9a10: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3d9a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3d9a14:
    // 0x3d9a14: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d9a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d9a18:
    // 0x3d9a18: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d9a18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d9a1c:
    // 0x3d9a1c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d9a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d9a20:
    // 0x3d9a20: 0x60f809  jalr        $v1
label_3d9a24:
    if (ctx->pc == 0x3D9A24u) {
        ctx->pc = 0x3D9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A20u;
        // 0x3d9a24: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9A28u;
        goto label_3d9a28;
    }
    ctx->pc = 0x3D9A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D9A28u);
        ctx->pc = 0x3D9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A20u;
        // 0x3d9a24: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9A20u, 0x3D9A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9A28u;
label_3d9a28:
    // 0x3d9a28: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3d9a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3d9a2c:
    // 0x3d9a2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3d9a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d9a30:
    // 0x3d9a30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3d9a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d9a34:
    // 0x3d9a34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d9a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9a38:
    // 0x3d9a38: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3d9a38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9a3c:
    // 0x3d9a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d9a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9a40:
    // 0x3d9a40: 0x3e00008  jr          $ra
label_3d9a44:
    if (ctx->pc == 0x3D9A44u) {
        ctx->pc = 0x3D9A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A40u;
        // 0x3d9a44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9A48u;
        goto label_fallthrough_0x3d9a40;
    }
    ctx->pc = 0x3D9A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9A40u;
        // 0x3d9a44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d9a40:
    ctx->pc = 0x3D9A48u;
}
