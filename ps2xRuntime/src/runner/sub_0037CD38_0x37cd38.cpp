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

// Function: sub_0037CD38
// Address: 0x37cd38 - 0x37ce78
void sub_0037CD38_0x37cd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CD38_0x37cd38");
#endif

    switch (ctx->pc) {
        case 0x37cd74u: goto label_37cd74;
        case 0x37cd7cu: goto label_37cd7c;
        case 0x37cd90u: goto label_37cd90;
        case 0x37cd98u: goto label_37cd98;
        case 0x37cdacu: goto label_37cdac;
        case 0x37cdb4u: goto label_37cdb4;
        case 0x37cdc8u: goto label_37cdc8;
        case 0x37cdd0u: goto label_37cdd0;
        case 0x37cde4u: goto label_37cde4;
        case 0x37cdecu: goto label_37cdec;
        case 0x37ce00u: goto label_37ce00;
        case 0x37ce08u: goto label_37ce08;
        case 0x37ce1cu: goto label_37ce1c;
        case 0x37ce24u: goto label_37ce24;
        case 0x37ce44u: goto label_37ce44;
        default: break;
    }

    ctx->pc = 0x37cd38u;

    // 0x37cd38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x37cd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x37cd3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37cd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cd40: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x37cd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x37cd44: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x37cd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x37cd48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37cd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cd4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37cd4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cd50: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x37cd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x37cd54: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x37cd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x37cd58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37cd5c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x37cd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x37cd60: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x37cd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x37cd64: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x37cd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x37cd68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37cd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37cd6c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CD6Cu;
    SET_GPR_U32(ctx, 31, 0x37CD74u);
    ctx->pc = 0x37CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD6Cu;
    // 0x37cd70: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CD6Cu, 0x37CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD74u;
label_37cd74:
    // 0x37cd74: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37CD74u;
    SET_GPR_U32(ctx, 31, 0x37CD7Cu);
    ctx->pc = 0x37CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD74u;
    // 0x37cd78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37CD74u, 0x37CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD7Cu;
label_37cd7c:
    // 0x37cd7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37cd7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cd80: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x37cd80u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cd84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37cd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37cd88: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CD88u;
    SET_GPR_U32(ctx, 31, 0x37CD90u);
    ctx->pc = 0x37CD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD88u;
    // 0x37cd8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CD88u, 0x37CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD90u;
label_37cd90:
    // 0x37cd90: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CD90u;
    SET_GPR_U32(ctx, 31, 0x37CD98u);
    ctx->pc = 0x37CD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD90u;
    // 0x37cd94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CD90u, 0x37CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD98u;
label_37cd98:
    // 0x37cd98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37cd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cd9c: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x37cd9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37cda0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37cda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37cda4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CDA4u;
    SET_GPR_U32(ctx, 31, 0x37CDACu);
    ctx->pc = 0x37CDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDA4u;
    // 0x37cda8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CDA4u, 0x37CDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CDACu;
label_37cdac:
    // 0x37cdac: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CDACu;
    SET_GPR_U32(ctx, 31, 0x37CDB4u);
    ctx->pc = 0x37CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDACu;
    // 0x37cdb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CDACu, 0x37CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CDB4u;
label_37cdb4:
    // 0x37cdb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37cdb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cdb8: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x37cdb8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37cdbc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37cdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37cdc0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CDC0u;
    SET_GPR_U32(ctx, 31, 0x37CDC8u);
    ctx->pc = 0x37CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDC0u;
    // 0x37cdc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CDC0u, 0x37CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CDC8u;
label_37cdc8:
    // 0x37cdc8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CDC8u;
    SET_GPR_U32(ctx, 31, 0x37CDD0u);
    ctx->pc = 0x37CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDC8u;
    // 0x37cdcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CDC8u, 0x37CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CDD0u;
label_37cdd0:
    // 0x37cdd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37cdd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cdd4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x37cdd4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37cdd8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37cdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37cddc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CDDCu;
    SET_GPR_U32(ctx, 31, 0x37CDE4u);
    ctx->pc = 0x37CDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDDCu;
    // 0x37cde0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CDDCu, 0x37CDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CDE4u;
label_37cde4:
    // 0x37cde4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CDE4u;
    SET_GPR_U32(ctx, 31, 0x37CDECu);
    ctx->pc = 0x37CDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDE4u;
    // 0x37cde8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CDE4u, 0x37CDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CDECu;
label_37cdec:
    // 0x37cdec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37cdecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cdf0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x37cdf0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37cdf4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x37cdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37cdf8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CDF8u;
    SET_GPR_U32(ctx, 31, 0x37CE00u);
    ctx->pc = 0x37CDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDF8u;
    // 0x37cdfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CDF8u, 0x37CE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE00u;
label_37ce00:
    // 0x37ce00: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CE00u;
    SET_GPR_U32(ctx, 31, 0x37CE08u);
    ctx->pc = 0x37CE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CE00u;
    // 0x37ce04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CE00u, 0x37CE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE08u;
label_37ce08:
    // 0x37ce08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37ce08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ce0c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x37ce0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ce10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37ce10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ce14: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CE14u;
    SET_GPR_U32(ctx, 31, 0x37CE1Cu);
    ctx->pc = 0x37CE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CE14u;
    // 0x37ce18: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CE14u, 0x37CE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE1Cu;
label_37ce1c:
    // 0x37ce1c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CE1Cu;
    SET_GPR_U32(ctx, 31, 0x37CE24u);
    ctx->pc = 0x37CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CE1Cu;
    // 0x37ce20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CE1Cu, 0x37CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE24u;
label_37ce24:
    // 0x37ce24: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x37ce24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ce28: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x37ce28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ce2c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x37ce2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ce30: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x37ce30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ce34: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x37ce34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ce38: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x37ce38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ce3c: 0xc108dc6  jal         func_423718
    ctx->pc = 0x37CE3Cu;
    SET_GPR_U32(ctx, 31, 0x37CE44u);
    ctx->pc = 0x37CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CE3Cu;
    // 0x37ce40: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423718u, 0x37CE3Cu, 0x37CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE44u;
label_37ce44:
    // 0x37ce44: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x37ce44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37ce48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37ce48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ce4c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x37ce4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37ce50: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x37ce50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37ce54: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x37ce54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37ce58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37ce58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37ce5c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x37ce5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ce60: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x37ce60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ce64: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x37ce64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ce68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ce68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ce6c: 0x3e00008  jr          $ra
    ctx->pc = 0x37CE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CE6Cu;
        // 0x37ce70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CE74u;
    // 0x37ce74: 0x0  nop
    ctx->pc = 0x37ce74u;
    // NOP
    ctx->pc = 0x37ce78u;
}
