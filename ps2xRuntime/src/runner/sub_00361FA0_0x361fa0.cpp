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

// Function: sub_00361FA0
// Address: 0x361fa0 - 0x3620c0
void sub_00361FA0_0x361fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361FA0_0x361fa0");
#endif

    switch (ctx->pc) {
        case 0x361fd8u: goto label_361fd8;
        case 0x361fe0u: goto label_361fe0;
        case 0x361ff4u: goto label_361ff4;
        case 0x361ffcu: goto label_361ffc;
        case 0x362010u: goto label_362010;
        case 0x362018u: goto label_362018;
        case 0x362030u: goto label_362030;
        case 0x362038u: goto label_362038;
        case 0x362050u: goto label_362050;
        case 0x362058u: goto label_362058;
        case 0x36206cu: goto label_36206c;
        case 0x362074u: goto label_362074;
        case 0x362094u: goto label_362094;
        default: break;
    }

    ctx->pc = 0x361fa0u;

    // 0x361fa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x361fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x361fa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x361fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361fa8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x361fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x361fac: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x361facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x361fb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x361fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361fb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x361fb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361fb8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x361fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x361fbc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x361fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x361fc0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x361fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x361fc4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x361fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x361fc8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x361fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x361fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x361fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x361fd0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361FD0u;
    SET_GPR_U32(ctx, 31, 0x361FD8u);
    ctx->pc = 0x361FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361FD0u;
    // 0x361fd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361FD0u, 0x361FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361FD8u;
label_361fd8:
    // 0x361fd8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361FD8u;
    SET_GPR_U32(ctx, 31, 0x361FE0u);
    ctx->pc = 0x361FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361FD8u;
    // 0x361fdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361FD8u, 0x361FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361FE0u;
label_361fe0:
    // 0x361fe0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361fe4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x361fe4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361fe8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x361fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361fec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361FECu;
    SET_GPR_U32(ctx, 31, 0x361FF4u);
    ctx->pc = 0x361FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361FECu;
    // 0x361ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361FECu, 0x361FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361FF4u;
label_361ff4:
    // 0x361ff4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361FF4u;
    SET_GPR_U32(ctx, 31, 0x361FFCu);
    ctx->pc = 0x361FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361FF4u;
    // 0x361ff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361FF4u, 0x361FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361FFCu;
label_361ffc:
    // 0x361ffc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362000: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x362000u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362004: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x362004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362008: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362008u;
    SET_GPR_U32(ctx, 31, 0x362010u);
    ctx->pc = 0x36200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362008u;
    // 0x36200c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362008u, 0x362010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362010u;
label_362010:
    // 0x362010: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x362010u;
    SET_GPR_U32(ctx, 31, 0x362018u);
    ctx->pc = 0x362014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362010u;
    // 0x362014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x362010u, 0x362018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362018u;
label_362018:
    // 0x362018: 0x29c00  sll         $s3, $v0, 16
    ctx->pc = 0x362018u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36201c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36201cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362020: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x362020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x362024: 0x139c03  sra         $s3, $s3, 16
    ctx->pc = 0x362024u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 16));
    // 0x362028: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362028u;
    SET_GPR_U32(ctx, 31, 0x362030u);
    ctx->pc = 0x36202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362028u;
    // 0x36202c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362028u, 0x362030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362030u;
label_362030:
    // 0x362030: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x362030u;
    SET_GPR_U32(ctx, 31, 0x362038u);
    ctx->pc = 0x362034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362030u;
    // 0x362034: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x362030u, 0x362038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362038u;
label_362038:
    // 0x362038: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x362038u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36203c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36203cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362040: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x362040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x362044: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x362044u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x362048: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362048u;
    SET_GPR_U32(ctx, 31, 0x362050u);
    ctx->pc = 0x36204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362048u;
    // 0x36204c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362048u, 0x362050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362050u;
label_362050:
    // 0x362050: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362050u;
    SET_GPR_U32(ctx, 31, 0x362058u);
    ctx->pc = 0x362054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362050u;
    // 0x362054: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362050u, 0x362058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362058u;
label_362058:
    // 0x362058: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x362058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36205c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36205cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362064: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362064u;
    SET_GPR_U32(ctx, 31, 0x36206Cu);
    ctx->pc = 0x362068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362064u;
    // 0x362068: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362064u, 0x36206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36206Cu;
label_36206c:
    // 0x36206c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36206Cu;
    SET_GPR_U32(ctx, 31, 0x362074u);
    ctx->pc = 0x362070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36206Cu;
    // 0x362070: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36206Cu, 0x362074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362074u;
label_362074:
    // 0x362074: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x362074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x362078: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x362078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36207c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x36207cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362080: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x362080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362084: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x362084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362088: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x362088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36208c: 0xc0a932e  jal         func_2A4CB8
    ctx->pc = 0x36208Cu;
    SET_GPR_U32(ctx, 31, 0x362094u);
    ctx->pc = 0x362090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36208Cu;
    // 0x362090: 0x24c03  sra         $t1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CB8u, 0x36208Cu, 0x362094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362094u;
label_362094:
    // 0x362094: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x362094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x362098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36209c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x36209cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3620a0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3620a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3620a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3620a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3620a8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3620a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3620ac: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3620acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3620b0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3620b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3620b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3620b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3620b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3620B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3620BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3620B8u;
        // 0x3620bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3620B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3620C0u;
}
