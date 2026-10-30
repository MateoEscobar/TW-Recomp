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

// Function: sub_00377CC8
// Address: 0x377cc8 - 0x377f18
void sub_00377CC8_0x377cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377CC8_0x377cc8");
#endif

    switch (ctx->pc) {
        case 0x377d08u: goto label_377d08;
        case 0x377d1cu: goto label_377d1c;
        case 0x377d24u: goto label_377d24;
        case 0x377d38u: goto label_377d38;
        case 0x377d40u: goto label_377d40;
        case 0x377d54u: goto label_377d54;
        case 0x377d5cu: goto label_377d5c;
        case 0x377d84u: goto label_377d84;
        case 0x377d8cu: goto label_377d8c;
        case 0x377da0u: goto label_377da0;
        case 0x377db0u: goto label_377db0;
        case 0x377dc8u: goto label_377dc8;
        case 0x377dd0u: goto label_377dd0;
        case 0x377de8u: goto label_377de8;
        case 0x377e00u: goto label_377e00;
        case 0x377e08u: goto label_377e08;
        case 0x377e3cu: goto label_377e3c;
        case 0x377e48u: goto label_377e48;
        case 0x377e60u: goto label_377e60;
        case 0x377e6cu: goto label_377e6c;
        case 0x377e78u: goto label_377e78;
        case 0x377e88u: goto label_377e88;
        case 0x377e9cu: goto label_377e9c;
        case 0x377eb0u: goto label_377eb0;
        case 0x377ec0u: goto label_377ec0;
        case 0x377ed4u: goto label_377ed4;
        default: break;
    }

    ctx->pc = 0x377cc8u;

    // 0x377cc8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x377cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x377ccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377cd0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x377cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x377cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x377cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cdc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x377cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x377ce0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x377ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x377ce4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x377ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x377ce8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x377ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x377cec: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x377cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x377cf0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x377cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x377cf4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x377cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x377cf8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x377cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x377cfc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x377cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x377d00: 0xc102488  jal         func_409220
    ctx->pc = 0x377D00u;
    SET_GPR_U32(ctx, 31, 0x377D08u);
    ctx->pc = 0x377D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D00u;
    // 0x377d04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x377D00u, 0x377D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D08u;
label_377d08:
    // 0x377d08: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x377d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x377d0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377d10: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x377d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x377d14: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377D14u;
    SET_GPR_U32(ctx, 31, 0x377D1Cu);
    ctx->pc = 0x377D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D14u;
    // 0x377d18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377D14u, 0x377D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D1Cu;
label_377d1c:
    // 0x377d1c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x377D1Cu;
    SET_GPR_U32(ctx, 31, 0x377D24u);
    ctx->pc = 0x377D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D1Cu;
    // 0x377d20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x377D1Cu, 0x377D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D24u;
label_377d24:
    // 0x377d24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377d28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x377d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x377d2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377d30: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377D30u;
    SET_GPR_U32(ctx, 31, 0x377D38u);
    ctx->pc = 0x377D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D30u;
    // 0x377d34: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377D30u, 0x377D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D38u;
label_377d38:
    // 0x377d38: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377D38u;
    SET_GPR_U32(ctx, 31, 0x377D40u);
    ctx->pc = 0x377D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D38u;
    // 0x377d3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377D38u, 0x377D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D40u;
label_377d40:
    // 0x377d40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377d44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x377d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x377d48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377d4c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377D4Cu;
    SET_GPR_U32(ctx, 31, 0x377D54u);
    ctx->pc = 0x377D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D4Cu;
    // 0x377d50: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377D4Cu, 0x377D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D54u;
label_377d54:
    // 0x377d54: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377D54u;
    SET_GPR_U32(ctx, 31, 0x377D5Cu);
    ctx->pc = 0x377D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D54u;
    // 0x377d58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377D54u, 0x377D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D5Cu;
label_377d5c:
    // 0x377d5c: 0x340683df  ori         $a2, $zero, 0x83DF
    ctx->pc = 0x377d5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33759);
    // 0x377d60: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x377d60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x377d64: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x377d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x377d68: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x377d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x377d6c: 0x34c6ffc0  ori         $a2, $a2, 0xFFC0
    ctx->pc = 0x377d6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65472);
    // 0x377d70: 0x633f8  dsll        $a2, $a2, 15
    ctx->pc = 0x377d70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 15);
    // 0x377d74: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x377d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x377d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377d7c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377D7Cu;
    SET_GPR_U32(ctx, 31, 0x377D84u);
    ctx->pc = 0x377D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D7Cu;
    // 0x377d80: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377D7Cu, 0x377D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D84u;
label_377d84:
    // 0x377d84: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377D84u;
    SET_GPR_U32(ctx, 31, 0x377D8Cu);
    ctx->pc = 0x377D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D84u;
    // 0x377d88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377D84u, 0x377D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D8Cu;
label_377d8c:
    // 0x377d8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x377d8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377d94: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x377d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x377d98: 0xc102488  jal         func_409220
    ctx->pc = 0x377D98u;
    SET_GPR_U32(ctx, 31, 0x377DA0u);
    ctx->pc = 0x377D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D98u;
    // 0x377d9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x377D98u, 0x377DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377DA0u;
label_377da0:
    // 0x377da0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x377da0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377da4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x377da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x377da8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x377da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377dac: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x377dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_377db0:
    // 0x377db0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x377db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x377db4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377db8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x377db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x377dbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377dc0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x377DC0u;
    SET_GPR_U32(ctx, 31, 0x377DC8u);
    ctx->pc = 0x377DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DC0u;
    // 0x377dc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x377DC0u, 0x377DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377DC8u;
label_377dc8:
    // 0x377dc8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x377DC8u;
    SET_GPR_U32(ctx, 31, 0x377DD0u);
    ctx->pc = 0x377DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DC8u;
    // 0x377dcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x377DC8u, 0x377DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377DD0u;
label_377dd0:
    // 0x377dd0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x377dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x377dd4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x377dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x377dd8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x377DD8u;
    {
        const bool branch_taken_0x377dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377DD8u;
        // 0x377ddc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377dd8) {
            ctx->pc = 0x377DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377db0;
        }
    }
    ctx->pc = 0x377DE0u;
    // 0x377de0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x377de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377de4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x377de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_377de8:
    // 0x377de8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x377de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x377dec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377df0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x377df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x377df4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377df8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x377DF8u;
    SET_GPR_U32(ctx, 31, 0x377E00u);
    ctx->pc = 0x377DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DF8u;
    // 0x377dfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x377DF8u, 0x377E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E00u;
label_377e00:
    // 0x377e00: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x377E00u;
    SET_GPR_U32(ctx, 31, 0x377E08u);
    ctx->pc = 0x377E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E00u;
    // 0x377e04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x377E00u, 0x377E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E08u;
label_377e08:
    // 0x377e08: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x377e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x377e0c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x377e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x377e10: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x377E10u;
    {
        const bool branch_taken_0x377e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E10u;
        // 0x377e14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e10) {
            ctx->pc = 0x377DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377de8;
        }
    }
    ctx->pc = 0x377E18u;
    // 0x377e18: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x377e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377e1c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x377e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377e20: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x377e20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377e24: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x377e24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377e28: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x377e28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377e2c: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x377e2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377e30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x377e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377e34: 0xc0e5a16  jal         func_396858
    ctx->pc = 0x377E34u;
    SET_GPR_U32(ctx, 31, 0x377E3Cu);
    ctx->pc = 0x377E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E34u;
    // 0x377e38: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396858u, 0x377E34u, 0x377E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E3Cu;
label_377e3c:
    // 0x377e3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x377e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377e40: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x377E40u;
    SET_GPR_U32(ctx, 31, 0x377E48u);
    ctx->pc = 0x377E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E40u;
    // 0x377e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x377E40u, 0x377E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E48u;
label_377e48:
    // 0x377e48: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x377E48u;
    {
        const bool branch_taken_0x377e48 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x377E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E48u;
        // 0x377e4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e48) {
            ctx->pc = 0x377E64u;
            goto label_377e64;
        }
    }
    ctx->pc = 0x377E50u;
    // 0x377e50: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x377e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x377e54: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x377e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x377e58: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x377E58u;
    SET_GPR_U32(ctx, 31, 0x377E60u);
    ctx->pc = 0x377E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E58u;
    // 0x377e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x377E58u, 0x377E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E60u;
label_377e60:
    // 0x377e60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x377e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_377e64:
    // 0x377e64: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x377E64u;
    SET_GPR_U32(ctx, 31, 0x377E6Cu);
    ctx->pc = 0x377E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E64u;
    // 0x377e68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x377E64u, 0x377E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E6Cu;
label_377e6c:
    // 0x377e6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x377e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377e70: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x377e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x377e74: 0x0  nop
    ctx->pc = 0x377e74u;
    // NOP
label_377e78:
    // 0x377e78: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x377e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x377e7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x377e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x377e80: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x377E80u;
    SET_GPR_U32(ctx, 31, 0x377E88u);
    ctx->pc = 0x377E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E80u;
    // 0x377e84: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x377E80u, 0x377E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E88u;
label_377e88:
    // 0x377e88: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x377e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377e8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377e90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x377e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x377e94: 0xc102576  jal         func_4095D8
    ctx->pc = 0x377E94u;
    SET_GPR_U32(ctx, 31, 0x377E9Cu);
    ctx->pc = 0x377E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E94u;
    // 0x377e98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x377E94u, 0x377E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E9Cu;
label_377e9c:
    // 0x377e9c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x377e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x377ea0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x377EA0u;
    {
        const bool branch_taken_0x377ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EA0u;
        // 0x377ea4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377ea0) {
            ctx->pc = 0x377E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377e78;
        }
    }
    ctx->pc = 0x377EA8u;
    // 0x377ea8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x377ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377eac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x377eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_377eb0:
    // 0x377eb0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x377eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x377eb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x377eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x377eb8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x377EB8u;
    SET_GPR_U32(ctx, 31, 0x377EC0u);
    ctx->pc = 0x377EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377EB8u;
    // 0x377ebc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x377EB8u, 0x377EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377EC0u;
label_377ec0:
    // 0x377ec0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x377ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ec8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x377ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x377ecc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x377ECCu;
    SET_GPR_U32(ctx, 31, 0x377ED4u);
    ctx->pc = 0x377ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377ECCu;
    // 0x377ed0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x377ECCu, 0x377ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377ED4u;
label_377ed4:
    // 0x377ed4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x377ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x377ed8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x377ED8u;
    {
        const bool branch_taken_0x377ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377ED8u;
        // 0x377edc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377ed8) {
            ctx->pc = 0x377EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377eb0;
        }
    }
    ctx->pc = 0x377EE0u;
    // 0x377ee0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x377ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x377ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x377ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377ee8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x377ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x377eec: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x377eecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x377ef0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x377ef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x377ef4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x377ef4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x377ef8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x377ef8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x377efc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x377efcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x377f00: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x377f00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377f04: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x377f04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377f08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x377f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x377F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F0Cu;
        // 0x377f10: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377F14u;
    // 0x377f14: 0x0  nop
    ctx->pc = 0x377f14u;
    // NOP
    ctx->pc = 0x377f18u;
}
