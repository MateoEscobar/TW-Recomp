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

// Function: sub_00175980
// Address: 0x175980 - 0x175a68
void sub_00175980_0x175980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175980_0x175980");
#endif

    switch (ctx->pc) {
        case 0x175980u: goto label_175980;
        case 0x175984u: goto label_175984;
        case 0x175988u: goto label_175988;
        case 0x17598cu: goto label_17598c;
        case 0x175990u: goto label_175990;
        case 0x175994u: goto label_175994;
        case 0x175998u: goto label_175998;
        case 0x17599cu: goto label_17599c;
        case 0x1759a0u: goto label_1759a0;
        case 0x1759a4u: goto label_1759a4;
        case 0x1759a8u: goto label_1759a8;
        case 0x1759acu: goto label_1759ac;
        case 0x1759b0u: goto label_1759b0;
        case 0x1759b4u: goto label_1759b4;
        case 0x1759b8u: goto label_1759b8;
        case 0x1759bcu: goto label_1759bc;
        case 0x1759c0u: goto label_1759c0;
        case 0x1759c4u: goto label_1759c4;
        case 0x1759c8u: goto label_1759c8;
        case 0x1759ccu: goto label_1759cc;
        case 0x1759d0u: goto label_1759d0;
        case 0x1759d4u: goto label_1759d4;
        case 0x1759d8u: goto label_1759d8;
        case 0x1759dcu: goto label_1759dc;
        case 0x1759e0u: goto label_1759e0;
        case 0x1759e4u: goto label_1759e4;
        case 0x1759e8u: goto label_1759e8;
        case 0x1759ecu: goto label_1759ec;
        case 0x1759f0u: goto label_1759f0;
        case 0x1759f4u: goto label_1759f4;
        case 0x1759f8u: goto label_1759f8;
        case 0x1759fcu: goto label_1759fc;
        case 0x175a00u: goto label_175a00;
        case 0x175a04u: goto label_175a04;
        case 0x175a08u: goto label_175a08;
        case 0x175a0cu: goto label_175a0c;
        case 0x175a10u: goto label_175a10;
        case 0x175a14u: goto label_175a14;
        case 0x175a18u: goto label_175a18;
        case 0x175a1cu: goto label_175a1c;
        case 0x175a20u: goto label_175a20;
        case 0x175a24u: goto label_175a24;
        case 0x175a28u: goto label_175a28;
        case 0x175a2cu: goto label_175a2c;
        case 0x175a30u: goto label_175a30;
        case 0x175a34u: goto label_175a34;
        case 0x175a38u: goto label_175a38;
        case 0x175a3cu: goto label_175a3c;
        case 0x175a40u: goto label_175a40;
        case 0x175a44u: goto label_175a44;
        case 0x175a48u: goto label_175a48;
        case 0x175a4cu: goto label_175a4c;
        case 0x175a50u: goto label_175a50;
        case 0x175a54u: goto label_175a54;
        case 0x175a58u: goto label_175a58;
        case 0x175a5cu: goto label_175a5c;
        case 0x175a60u: goto label_175a60;
        case 0x175a64u: goto label_175a64;
        default: break;
    }

    ctx->pc = 0x175980u;

label_175980:
    // 0x175980: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x175980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_175984:
    // 0x175984: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x175984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_175988:
    // 0x175988: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x175988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_17598c:
    // 0x17598c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17598cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175990:
    // 0x175990: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x175990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_175994:
    // 0x175994: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x175994u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175998:
    // 0x175998: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x175998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_17599c:
    // 0x17599c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1759a0:
    // 0x1759a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1759a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1759a4:
    // 0x1759a4: 0xc05d610  jal         func_175840
label_1759a8:
    if (ctx->pc == 0x1759A8u) {
        ctx->pc = 0x1759A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1759A4u;
        // 0x1759a8: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1759ACu;
        goto label_1759ac;
    }
    ctx->pc = 0x1759A4u;
    SET_GPR_U32(ctx, 31, 0x1759ACu);
    ctx->pc = 0x1759A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1759A4u;
    // 0x1759a8: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x1759A4u, 0x1759ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1759ACu;
label_1759ac:
    // 0x1759ac: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1759acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1759b0:
    // 0x1759b0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1759b4:
    if (ctx->pc == 0x1759B4u) {
        ctx->pc = 0x1759B8u;
        goto label_1759b8;
    }
    ctx->pc = 0x1759B0u;
    {
        const bool branch_taken_0x1759b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1759b0) {
            ctx->pc = 0x175A14u;
            goto label_175a14;
        }
    }
    ctx->pc = 0x1759B8u;
label_1759b8:
    // 0x1759b8: 0xc05dfea  jal         func_177FA8
label_1759bc:
    if (ctx->pc == 0x1759BCu) {
        ctx->pc = 0x1759BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1759B8u;
        // 0x1759bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1759C0u;
        goto label_1759c0;
    }
    ctx->pc = 0x1759B8u;
    SET_GPR_U32(ctx, 31, 0x1759C0u);
    ctx->pc = 0x1759BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1759B8u;
    // 0x1759bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177FA8u, 0x1759B8u, 0x1759C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1759C0u;
label_1759c0:
    // 0x1759c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1759c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1759c4:
    // 0x1759c4: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_1759c8:
    if (ctx->pc == 0x1759C8u) {
        ctx->pc = 0x1759CCu;
        goto label_1759cc;
    }
    ctx->pc = 0x1759C4u;
    {
        const bool branch_taken_0x1759c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1759c4) {
            ctx->pc = 0x175A14u;
            goto label_175a14;
        }
    }
    ctx->pc = 0x1759CCu;
label_1759cc:
    // 0x1759cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1759ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1759d0:
    // 0x1759d0: 0x84500060  lh          $s0, 0x60($v0)
    ctx->pc = 0x1759d0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1759d4:
    // 0x1759d4: 0x24510060  addiu       $s1, $v0, 0x60
    ctx->pc = 0x1759d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1759d8:
    // 0x1759d8: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1759d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1759dc:
    // 0x1759dc: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1759dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1759e0:
    // 0x1759e0: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1759e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1759e4:
    // 0x1759e4: 0x60f809  jalr        $v1
label_1759e8:
    if (ctx->pc == 0x1759E8u) {
        ctx->pc = 0x1759E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1759E4u;
        // 0x1759e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1759ECu;
        goto label_1759ec;
    }
    ctx->pc = 0x1759E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1759ECu);
        ctx->pc = 0x1759E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1759E4u;
        // 0x1759e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1759E4u, 0x1759ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1759ECu;
label_1759ec:
    // 0x1759ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1759ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1759f0:
    // 0x1759f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1759f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1759f4:
    // 0x1759f4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1759f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1759f8:
    // 0x1759f8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1759f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1759fc:
    // 0x1759fc: 0x60f809  jalr        $v1
label_175a00:
    if (ctx->pc == 0x175A00u) {
        ctx->pc = 0x175A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1759FCu;
        // 0x175a00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175A04u;
        goto label_175a04;
    }
    ctx->pc = 0x1759FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x175A04u);
        ctx->pc = 0x175A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1759FCu;
        // 0x175a00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1759FCu, 0x175A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175A04u;
label_175a04:
    // 0x175a04: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x175a04u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_175a08:
    // 0x175a08: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x175a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_175a0c:
    // 0x175a0c: 0x40f809  jalr        $v0
label_175a10:
    if (ctx->pc == 0x175A10u) {
        ctx->pc = 0x175A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A0Cu;
        // 0x175a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175A14u;
        goto label_175a14;
    }
    ctx->pc = 0x175A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175A14u);
        ctx->pc = 0x175A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A0Cu;
        // 0x175a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175A0Cu, 0x175A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175A14u;
label_175a14:
    // 0x175a14: 0xc05d610  jal         func_175840
label_175a18:
    if (ctx->pc == 0x175A18u) {
        ctx->pc = 0x175A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A14u;
        // 0x175a18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175A1Cu;
        goto label_175a1c;
    }
    ctx->pc = 0x175A14u;
    SET_GPR_U32(ctx, 31, 0x175A1Cu);
    ctx->pc = 0x175A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A14u;
    // 0x175a18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x175A14u, 0x175A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A1Cu;
label_175a1c:
    // 0x175a1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x175a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_175a20:
    // 0x175a20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x175a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_175a24:
    // 0x175a24: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x175a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_175a28:
    // 0x175a28: 0xc05d610  jal         func_175840
label_175a2c:
    if (ctx->pc == 0x175A2Cu) {
        ctx->pc = 0x175A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A28u;
        // 0x175a2c: 0xac540304  sw          $s4, 0x304($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 772), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175A30u;
        goto label_175a30;
    }
    ctx->pc = 0x175A28u;
    SET_GPR_U32(ctx, 31, 0x175A30u);
    ctx->pc = 0x175A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A28u;
    // 0x175a2c: 0xac540304  sw          $s4, 0x304($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 772), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x175A28u, 0x175A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A30u;
label_175a30:
    // 0x175a30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x175a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_175a34:
    // 0x175a34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x175a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_175a38:
    // 0x175a38: 0xc05d612  jal         func_175848
label_175a3c:
    if (ctx->pc == 0x175A3Cu) {
        ctx->pc = 0x175A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A38u;
        // 0x175a3c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175A40u;
        goto label_175a40;
    }
    ctx->pc = 0x175A38u;
    SET_GPR_U32(ctx, 31, 0x175A40u);
    ctx->pc = 0x175A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A38u;
    // 0x175a3c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175848u, 0x175A38u, 0x175A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A40u;
label_175a40:
    // 0x175a40: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x175a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_175a44:
    // 0x175a44: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x175a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_175a48:
    // 0x175a48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x175a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175a4c:
    // 0x175a4c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x175a4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_175a50:
    // 0x175a50: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x175a50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175a54:
    // 0x175a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175a58:
    // 0x175a58: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x175a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_175a5c:
    // 0x175a5c: 0x3e00008  jr          $ra
label_175a60:
    if (ctx->pc == 0x175A60u) {
        ctx->pc = 0x175A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A5Cu;
        // 0x175a60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175A64u;
        goto label_175a64;
    }
    ctx->pc = 0x175A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A5Cu;
        // 0x175a60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175A64u;
label_175a64:
    // 0x175a64: 0x0  nop
    ctx->pc = 0x175a64u;
    // NOP
    ctx->pc = 0x175a68u;
}
