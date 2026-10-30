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

// Function: sub_001F70C8
// Address: 0x1f70c8 - 0x1f7238
void sub_001F70C8_0x1f70c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F70C8_0x1f70c8");
#endif

    switch (ctx->pc) {
        case 0x1f7104u: goto label_1f7104;
        case 0x1f7110u: goto label_1f7110;
        case 0x1f7118u: goto label_1f7118;
        case 0x1f7124u: goto label_1f7124;
        case 0x1f7134u: goto label_1f7134;
        case 0x1f713cu: goto label_1f713c;
        case 0x1f7144u: goto label_1f7144;
        case 0x1f7150u: goto label_1f7150;
        case 0x1f716cu: goto label_1f716c;
        case 0x1f7188u: goto label_1f7188;
        case 0x1f719cu: goto label_1f719c;
        case 0x1f71acu: goto label_1f71ac;
        case 0x1f71d0u: goto label_1f71d0;
        case 0x1f71e8u: goto label_1f71e8;
        case 0x1f71fcu: goto label_1f71fc;
        case 0x1f7208u: goto label_1f7208;
        default: break;
    }

    ctx->pc = 0x1f70c8u;

    // 0x1f70c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f70c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f70cc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1f70ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1f70d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f70d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70d4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1f70d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1f70d8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1f70d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1f70dc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1f70dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1f70e0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1f70e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70e4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1f70e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1f70e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1f70e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1f70ec: 0x2484ef80  addiu       $a0, $a0, -0x1080
    ctx->pc = 0x1f70ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
    // 0x1f70f0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1f70f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1f70f4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1f70f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1f70f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f70f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f70fc: 0xc080b12  jal         func_202C48
    ctx->pc = 0x1F70FCu;
    SET_GPR_U32(ctx, 31, 0x1F7104u);
    ctx->pc = 0x1F7100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70FCu;
    // 0x1f7100: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C48u, 0x1F70FCu, 0x1F7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7104u;
label_1f7104:
    // 0x1f7104: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f7104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7108: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1f7108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f710c: 0x0  nop
    ctx->pc = 0x1f710cu;
    // NOP
label_1f7110:
    // 0x1f7110: 0xc07f8b4  jal         func_1FE2D0
    ctx->pc = 0x1F7110u;
    SET_GPR_U32(ctx, 31, 0x1F7118u);
    ctx->pc = 0x1F7114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7110u;
    // 0x1f7114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2D0u, 0x1F7110u, 0x1F7118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7118u;
label_1f7118:
    // 0x1f7118: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1f7118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1f711c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1F711Cu;
    SET_GPR_U32(ctx, 31, 0x1F7124u);
    ctx->pc = 0x1F7120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F711Cu;
    // 0x1f7120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1F711Cu, 0x1F7124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7124u;
label_1f7124:
    // 0x1f7124: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F7124u;
    {
        const bool branch_taken_0x1f7124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7124) {
            ctx->pc = 0x1F7128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7124u;
            // 0x1f7128: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7154u;
            goto label_1f7154;
        }
    }
    ctx->pc = 0x1F712Cu;
    // 0x1f712c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1F712Cu;
    SET_GPR_U32(ctx, 31, 0x1F7134u);
    ctx->pc = 0x1F7130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F712Cu;
    // 0x1f7130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F712Cu, 0x1F7134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7134u;
label_1f7134:
    // 0x1f7134: 0xc089c70  jal         func_2271C0
    ctx->pc = 0x1F7134u;
    SET_GPR_U32(ctx, 31, 0x1F713Cu);
    ctx->pc = 0x1F7138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7134u;
    // 0x1f7138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271C0u, 0x1F7134u, 0x1F713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F713Cu;
label_1f713c:
    // 0x1f713c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1F713Cu;
    SET_GPR_U32(ctx, 31, 0x1F7144u);
    ctx->pc = 0x1F7140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F713Cu;
    // 0x1f7140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F713Cu, 0x1F7144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7144u;
label_1f7144:
    // 0x1f7144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7148: 0xc0871f2  jal         func_21C7C8
    ctx->pc = 0x1F7148u;
    SET_GPR_U32(ctx, 31, 0x1F7150u);
    ctx->pc = 0x1F714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7148u;
    // 0x1f714c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7C8u, 0x1F7148u, 0x1F7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7150u;
label_1f7150:
    // 0x1f7150: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f7154:
    // 0x1f7154: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x1f7154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f7158: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F7158u;
    {
        const bool branch_taken_0x1f7158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7158) {
            ctx->pc = 0x1F7110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7110;
        }
    }
    ctx->pc = 0x1F7160u;
    // 0x1f7160: 0x866400f4  lh          $a0, 0xF4($s3)
    ctx->pc = 0x1f7160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 244)));
    // 0x1f7164: 0xc05a916  jal         func_16A458
    ctx->pc = 0x1F7164u;
    SET_GPR_U32(ctx, 31, 0x1F716Cu);
    ctx->pc = 0x1F7168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7164u;
    // 0x1f7168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A458u, 0x1F7164u, 0x1F716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F716Cu;
label_1f716c:
    // 0x1f716c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1f716cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7170: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F7170u;
    {
        const bool branch_taken_0x1f7170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7170u;
        // 0x1f7174: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7170) {
            ctx->pc = 0x1F720Cu;
            goto label_1f720c;
        }
    }
    ctx->pc = 0x1F7178u;
    // 0x1f7178: 0x3c150055  lui         $s5, 0x55
    ctx->pc = 0x1f7178u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)85 << 16));
    // 0x1f717c: 0x267200d0  addiu       $s2, $s3, 0xD0
    ctx->pc = 0x1f717cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x1f7180: 0x267100f8  addiu       $s1, $s3, 0xF8
    ctx->pc = 0x1f7180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 248));
    // 0x1f7184: 0x0  nop
    ctx->pc = 0x1f7184u;
    // NOP
label_1f7188:
    // 0x1f7188: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f7188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f718c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f718cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7190: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f7190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f7194: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1F7194u;
    SET_GPR_U32(ctx, 31, 0x1F719Cu);
    ctx->pc = 0x1F7198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7194u;
    // 0x1f7198: 0x26a67808  addiu       $a2, $s5, 0x7808 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 30728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1F7194u, 0x1F719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F719Cu;
label_1f719c:
    // 0x1f719c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f719cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71a0: 0x26c4ef80  addiu       $a0, $s6, -0x1080
    ctx->pc = 0x1f71a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963072));
    // 0x1f71a4: 0xc080b38  jal         func_202CE0
    ctx->pc = 0x1F71A4u;
    SET_GPR_U32(ctx, 31, 0x1F71ACu);
    ctx->pc = 0x1F71A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F71A4u;
    // 0x1f71a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CE0u, 0x1F71A4u, 0x1F71ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71ACu;
label_1f71ac:
    // 0x1f71ac: 0xc66c00c8  lwc1        $f12, 0xC8($s3)
    ctx->pc = 0x1f71acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f71b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f71b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71b4: 0x866900f4  lh          $t1, 0xF4($s3)
    ctx->pc = 0x1f71b4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 244)));
    // 0x1f71b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f71b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f71bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f71c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f71c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71c8: 0xc08cf58  jal         func_233D60
    ctx->pc = 0x1F71C8u;
    SET_GPR_U32(ctx, 31, 0x1F71D0u);
    ctx->pc = 0x1F71CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F71C8u;
    // 0x1f71cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D60u, 0x1F71C8u, 0x1F71D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71D0u;
label_1f71d0:
    // 0x1f71d0: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1f71d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1f71d4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1f71d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1f71d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f71d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f71dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71e0: 0xc07f8ba  jal         func_1FE2E8
    ctx->pc = 0x1F71E0u;
    SET_GPR_U32(ctx, 31, 0x1F71E8u);
    ctx->pc = 0x1F71E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F71E0u;
    // 0x1f71e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2E8u, 0x1F71E0u, 0x1F71E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71E8u;
label_1f71e8:
    // 0x1f71e8: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x1f71e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f71ec: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1F71ECu;
    {
        const bool branch_taken_0x1f71ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F71F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71ECu;
        // 0x1f71f0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71ec) {
            ctx->pc = 0x1F7188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7188;
        }
    }
    ctx->pc = 0x1F71F4u;
    // 0x1f71f4: 0xc07dbfa  jal         func_1F6FE8
    ctx->pc = 0x1F71F4u;
    SET_GPR_U32(ctx, 31, 0x1F71FCu);
    ctx->pc = 0x1F71F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F71F4u;
    // 0x1f71f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6FE8u, 0x1F71F4u, 0x1F71FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71FCu;
label_1f71fc:
    // 0x1f71fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1f7200: 0xc06254a  jal         func_189528
    ctx->pc = 0x1F7200u;
    SET_GPR_U32(ctx, 31, 0x1F7208u);
    ctx->pc = 0x1F7204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7200u;
    // 0x1f7204: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189528u, 0x1F7200u, 0x1F7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7208u;
label_1f7208:
    // 0x1f7208: 0xae6000c0  sw          $zero, 0xC0($s3)
    ctx->pc = 0x1f7208u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 0));
label_1f720c:
    // 0x1f720c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1f720cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f7210: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1f7210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f7214: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1f7214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f7218: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1f7218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f721c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1f721cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7220: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1f7220u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7224: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1f7224u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7228: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f7228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f722c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F722Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F722Cu;
        // 0x1f7230: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F722Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7234u;
    // 0x1f7234: 0x0  nop
    ctx->pc = 0x1f7234u;
    // NOP
    ctx->pc = 0x1f7238u;
}
