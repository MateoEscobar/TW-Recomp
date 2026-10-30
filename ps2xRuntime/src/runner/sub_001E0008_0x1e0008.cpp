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

// Function: sub_001E0008
// Address: 0x1e0008 - 0x1e0430
void sub_001E0008_0x1e0008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0008_0x1e0008");
#endif

    switch (ctx->pc) {
        case 0x1e0050u: goto label_1e0050;
        case 0x1e0070u: goto label_1e0070;
        case 0x1e0094u: goto label_1e0094;
        case 0x1e00a0u: goto label_1e00a0;
        case 0x1e00e8u: goto label_1e00e8;
        case 0x1e00f8u: goto label_1e00f8;
        case 0x1e010cu: goto label_1e010c;
        case 0x1e0118u: goto label_1e0118;
        case 0x1e0124u: goto label_1e0124;
        case 0x1e0160u: goto label_1e0160;
        case 0x1e0178u: goto label_1e0178;
        case 0x1e0190u: goto label_1e0190;
        case 0x1e01a0u: goto label_1e01a0;
        case 0x1e01d0u: goto label_1e01d0;
        case 0x1e021cu: goto label_1e021c;
        case 0x1e0228u: goto label_1e0228;
        case 0x1e0234u: goto label_1e0234;
        case 0x1e0264u: goto label_1e0264;
        case 0x1e027cu: goto label_1e027c;
        case 0x1e0294u: goto label_1e0294;
        case 0x1e029cu: goto label_1e029c;
        case 0x1e02d4u: goto label_1e02d4;
        case 0x1e02dcu: goto label_1e02dc;
        case 0x1e030cu: goto label_1e030c;
        case 0x1e0314u: goto label_1e0314;
        case 0x1e0344u: goto label_1e0344;
        case 0x1e034cu: goto label_1e034c;
        case 0x1e035cu: goto label_1e035c;
        case 0x1e038cu: goto label_1e038c;
        case 0x1e039cu: goto label_1e039c;
        case 0x1e03ccu: goto label_1e03cc;
        case 0x1e03d4u: goto label_1e03d4;
        case 0x1e03dcu: goto label_1e03dc;
        default: break;
    }

    ctx->pc = 0x1e0008u;

    // 0x1e0008: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1e0008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1e000c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e000cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e0010: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1e0010u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0014: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1e0014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1e0018: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1e0018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1e001c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1e001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1e0020: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1e0020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1e0024: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e0024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0028: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e0028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1e002c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1e002cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x1e0030: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1e0030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1e0034: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1e0034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1e0038: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1e0038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x1e003c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e003cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e0040: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x1e0040u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e0044: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1e0044u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e0048: 0xc0746a8  jal         func_1D1AA0
    ctx->pc = 0x1E0048u;
    SET_GPR_U32(ctx, 31, 0x1E0050u);
    ctx->pc = 0x1E004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0048u;
    // 0x1e004c: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AA0u, 0x1E0048u, 0x1E0050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0050u;
label_1e0050:
    // 0x1e0050: 0x27a20024  addiu       $v0, $sp, 0x24
    ctx->pc = 0x1e0050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1e0054: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1e0054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1e0058: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1e0058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1e005c: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x1e005cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e0060: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e0060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1e0064: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x1e0064u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e0068: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x1e0068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x1e006c: 0x2470fc60  addiu       $s0, $v1, -0x3A0
    ctx->pc = 0x1e006cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966368));
label_1e0070:
    // 0x1e0070: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e0074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0078: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1e0078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1e007c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e007cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e0080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0084: 0x8e67eeb4  lw          $a3, -0x114C($s3)
    ctx->pc = 0x1e0084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962868)));
    // 0x1e0088: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e0088u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e008c: 0xc063514  jal         func_18D450
    ctx->pc = 0x1E008Cu;
    SET_GPR_U32(ctx, 31, 0x1E0094u);
    ctx->pc = 0x1E0090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E008Cu;
    // 0x1e0090: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x1E008Cu, 0x1E0094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0094u;
label_1e0094:
    // 0x1e0094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0098: 0xc06e10a  jal         func_1B8428
    ctx->pc = 0x1E0098u;
    SET_GPR_U32(ctx, 31, 0x1E00A0u);
    ctx->pc = 0x1E009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0098u;
    // 0x1e009c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8428u, 0x1E0098u, 0x1E00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00A0u;
label_1e00a0:
    // 0x1e00a0: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1e00a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e00a4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1E00A4u;
    {
        const bool branch_taken_0x1e00a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E00A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00A4u;
        // 0x1e00a8: 0x26100540  addiu       $s0, $s0, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00a4) {
            ctx->pc = 0x1E0070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0070;
        }
    }
    ctx->pc = 0x1E00ACu;
    // 0x1e00ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e00acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e00b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e00b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e00b4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1e00b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1e00b8: 0xc441eea4  lwc1        $f1, -0x115C($v0)
    ctx->pc = 0x1e00b8u;
    { uint32_t bits = FAST_READ32(0x50EEA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e00bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e00bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e00c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e00c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e00c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e00c8: 0xc440eea8  lwc1        $f0, -0x1158($v0)
    ctx->pc = 0x1e00c8u;
    { uint32_t bits = FAST_READ32(0x50EEA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e00cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e00ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e00d0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1e00d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e00d4: 0x26d00170  addiu       $s0, $s6, 0x170
    ctx->pc = 0x1e00d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 368));
    // 0x1e00d8: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1e00d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x1e00dc: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1e00dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x1e00e0: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1E00E0u;
    SET_GPR_U32(ctx, 31, 0x1E00E8u);
    ctx->pc = 0x1E00E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00E0u;
    // 0x1e00e4: 0xe6b5000c  swc1        $f21, 0xC($s5) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E00E0u, 0x1E00E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00E8u;
label_1e00e8:
    // 0x1e00e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e00e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e00ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00f0: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1E00F0u;
    SET_GPR_U32(ctx, 31, 0x1E00F8u);
    ctx->pc = 0x1E00F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00F0u;
    // 0x1e00f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1E00F0u, 0x1E00F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00F8u;
label_1e00f8:
    // 0x1e00f8: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1e00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1e00fc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E00FCu;
    {
        const bool branch_taken_0x1e00fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e00fc) {
            ctx->pc = 0x1E0100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E00FCu;
            // 0x1e0100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E011Cu;
            goto label_1e011c;
        }
    }
    ctx->pc = 0x1E0104u;
    // 0x1e0104: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1E0104u;
    SET_GPR_U32(ctx, 31, 0x1E010Cu);
    ctx->pc = 0x1E0108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0104u;
    // 0x1e0108: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E0104u, 0x1E010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E010Cu;
label_1e010c:
    // 0x1e010c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e010cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0110: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1E0110u;
    SET_GPR_U32(ctx, 31, 0x1E0118u);
    ctx->pc = 0x1E0114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0110u;
    // 0x1e0114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1E0110u, 0x1E0118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0118u;
label_1e0118:
    // 0x1e0118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e011c:
    // 0x1e011c: 0xc06e51e  jal         func_1B9478
    ctx->pc = 0x1E011Cu;
    SET_GPR_U32(ctx, 31, 0x1E0124u);
    ctx->pc = 0x1E0120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E011Cu;
    // 0x1e0120: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1E011Cu, 0x1E0124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0124u;
label_1e0124:
    // 0x1e0124: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e0124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e0128: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e0128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e012c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e0130: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e0130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0134: 0xc440eeac  lwc1        $f0, -0x1154($v0)
    ctx->pc = 0x1e0134u;
    { uint32_t bits = FAST_READ32(0x50EEACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0138: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e013c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1e013cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e0140: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e0140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0144: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1e0144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x1e0148: 0x26d20360  addiu       $s2, $s6, 0x360
    ctx->pc = 0x1e0148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 864));
    // 0x1e014c: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1e014cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x1e0150: 0x26d00430  addiu       $s0, $s6, 0x430
    ctx->pc = 0x1e0150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 1072));
    // 0x1e0154: 0xe6b5000c  swc1        $f21, 0xC($s5)
    ctx->pc = 0x1e0154u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x1e0158: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1E0158u;
    SET_GPR_U32(ctx, 31, 0x1E0160u);
    ctx->pc = 0x1E015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0158u;
    // 0x1e015c: 0x26d10880  addiu       $s1, $s6, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E0158u, 0x1E0160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0160u;
label_1e0160:
    // 0x1e0160: 0x26d40040  addiu       $s4, $s6, 0x40
    ctx->pc = 0x1e0160u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x1e0164: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x1e0164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x1e0168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e016c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e016cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0170: 0xc073ad0  jal         func_1CEB40
    ctx->pc = 0x1E0170u;
    SET_GPR_U32(ctx, 31, 0x1E0178u);
    ctx->pc = 0x1E0174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0170u;
    // 0x1e0174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1E0170u, 0x1E0178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0178u;
label_1e0178:
    // 0x1e0178: 0x26d307b0  addiu       $s3, $s6, 0x7B0
    ctx->pc = 0x1e0178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1968));
    // 0x1e017c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1e017cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1e0180: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e0180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1e0184: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1e0184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1e0188: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1E0188u;
    SET_GPR_U32(ctx, 31, 0x1E0190u);
    ctx->pc = 0x1E018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0188u;
    // 0x1e018c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E0188u, 0x1E0190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0190u;
label_1e0190:
    // 0x1e0190: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x1e0190u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0194: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0198: 0xc073b0a  jal         func_1CEC28
    ctx->pc = 0x1E0198u;
    SET_GPR_U32(ctx, 31, 0x1E01A0u);
    ctx->pc = 0x1E019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0198u;
    // 0x1e019c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1E0198u, 0x1E01A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01A0u;
label_1e01a0:
    // 0x1e01a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e01a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e01a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e01a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01a8: 0xc441ee98  lwc1        $f1, -0x1168($v0)
    ctx->pc = 0x1e01a8u;
    { uint32_t bits = FAST_READ32(0x50EE98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e01ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e01acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e01b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e01b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e01b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e01b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e01b8: 0xc440ee9c  lwc1        $f0, -0x1164($v0)
    ctx->pc = 0x1e01b8u;
    { uint32_t bits = FAST_READ32(0x50EE9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e01bc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1e01bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e01c0: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1e01c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x1e01c4: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1e01c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x1e01c8: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1E01C8u;
    SET_GPR_U32(ctx, 31, 0x1E01D0u);
    ctx->pc = 0x1E01CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01C8u;
    // 0x1e01cc: 0xe6b5000c  swc1        $f21, 0xC($s5) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E01C8u, 0x1E01D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01D0u;
label_1e01d0:
    // 0x1e01d0: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1e01d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1e01d4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1e01d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1e01d8: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x1e01d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e01dc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1e01dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1e01e0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e01e4: 0xa2e30002  sb          $v1, 0x2($s7)
    ctx->pc = 0x1e01e4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e01e8: 0xa2e20003  sb          $v0, 0x3($s7)
    ctx->pc = 0x1e01e8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e01ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e01ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e01f0: 0xa2e30001  sb          $v1, 0x1($s7)
    ctx->pc = 0x1e01f0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e01f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e01f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01f8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e01fc: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1e01fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e0200: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1e0200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0204: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e0204u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0208: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e0208u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e020c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e020cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0214: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1E0214u;
    SET_GPR_U32(ctx, 31, 0x1E021Cu);
    ctx->pc = 0x1E0218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0214u;
    // 0x1e0218: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1E0214u, 0x1E021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E021Cu;
label_1e021c:
    // 0x1e021c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e021cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0220: 0xc06ec94  jal         func_1BB250
    ctx->pc = 0x1E0220u;
    SET_GPR_U32(ctx, 31, 0x1E0228u);
    ctx->pc = 0x1E0224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0220u;
    // 0x1e0224: 0x26c50a70  addiu       $a1, $s6, 0xA70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 2672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1E0220u, 0x1E0228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0228u;
label_1e0228:
    // 0x1e0228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e022c: 0xc06e51e  jal         func_1B9478
    ctx->pc = 0x1E022Cu;
    SET_GPR_U32(ctx, 31, 0x1E0234u);
    ctx->pc = 0x1E0230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E022Cu;
    // 0x1e0230: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1E022Cu, 0x1E0234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0234u;
label_1e0234:
    // 0x1e0234: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e0234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e0238: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e0238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e023c: 0xc440eeb0  lwc1        $f0, -0x1150($v0)
    ctx->pc = 0x1e023cu;
    { uint32_t bits = FAST_READ32(0x50EEB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0240: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e0240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0244: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1e0244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1e0248: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e024c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1e024cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e0250: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e0250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0254: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1e0254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x1e0258: 0xe6b5000c  swc1        $f21, 0xC($s5)
    ctx->pc = 0x1e0258u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x1e025c: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1E025Cu;
    SET_GPR_U32(ctx, 31, 0x1E0264u);
    ctx->pc = 0x1E0260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E025Cu;
    // 0x1e0260: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E025Cu, 0x1E0264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0264u;
label_1e0264:
    // 0x1e0264: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x1e0264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e0268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e026c: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1e026cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1e0270: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e0270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0274: 0xc075044  jal         func_1D4110
    ctx->pc = 0x1E0274u;
    SET_GPR_U32(ctx, 31, 0x1E027Cu);
    ctx->pc = 0x1E0278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0274u;
    // 0x1e0278: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1E0274u, 0x1E027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E027Cu;
label_1e027c:
    // 0x1e027c: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x1e027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0280: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1e0280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0284: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1e0284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1e0288: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e0288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e028c: 0xc075044  jal         func_1D4110
    ctx->pc = 0x1E028Cu;
    SET_GPR_U32(ctx, 31, 0x1E0294u);
    ctx->pc = 0x1E0290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E028Cu;
    // 0x1e0290: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1E028Cu, 0x1E0294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0294u;
label_1e0294:
    // 0x1e0294: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1E0294u;
    SET_GPR_U32(ctx, 31, 0x1E029Cu);
    ctx->pc = 0x1E0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0294u;
    // 0x1e0298: 0x240400db  addiu       $a0, $zero, 0xDB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E0294u, 0x1E029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E029Cu;
label_1e029c:
    // 0x1e029c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e029cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1e02a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e02a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02a4: 0x8c70d320  lw          $s0, -0x2CE0($v1)
    ctx->pc = 0x1e02a4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5FD320u));
    // 0x1e02a8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1e02a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1e02ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e02acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e02b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e02b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e02b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1e02b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1e02b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e02b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02bc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1e02bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e02c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e02c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e02c4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e02c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02c8: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1e02c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e02cc: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1E02CCu;
    SET_GPR_U32(ctx, 31, 0x1E02D4u);
    ctx->pc = 0x1E02D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02CCu;
    // 0x1e02d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1E02CCu, 0x1E02D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02D4u;
label_1e02d4:
    // 0x1e02d4: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1E02D4u;
    SET_GPR_U32(ctx, 31, 0x1E02DCu);
    ctx->pc = 0x1E02D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02D4u;
    // 0x1e02d8: 0x240400dc  addiu       $a0, $zero, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E02D4u, 0x1E02DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02DCu;
label_1e02dc:
    // 0x1e02dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e02dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02e0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1e02e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1e02e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e02e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e02e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e02ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e02f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e02f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e02f4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1e02f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e02f8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e02f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e02fc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e02fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0300: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1e0300u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e0304: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1E0304u;
    SET_GPR_U32(ctx, 31, 0x1E030Cu);
    ctx->pc = 0x1E0308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0304u;
    // 0x1e0308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1E0304u, 0x1E030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E030Cu;
label_1e030c:
    // 0x1e030c: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1E030Cu;
    SET_GPR_U32(ctx, 31, 0x1E0314u);
    ctx->pc = 0x1E0310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E030Cu;
    // 0x1e0310: 0x240400dd  addiu       $a0, $zero, 0xDD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E030Cu, 0x1E0314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0314u;
label_1e0314:
    // 0x1e0314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0318: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e031c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1e031cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1e0320: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e0320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0324: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1e0324u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1e0328: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e0328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e032c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1e032cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0330: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1e0330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e0334: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e0334u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0338: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e0338u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e033c: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1E033Cu;
    SET_GPR_U32(ctx, 31, 0x1E0344u);
    ctx->pc = 0x1E0340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E033Cu;
    // 0x1e0340: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1E033Cu, 0x1E0344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0344u;
label_1e0344:
    // 0x1e0344: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1E0344u;
    SET_GPR_U32(ctx, 31, 0x1E034Cu);
    ctx->pc = 0x1FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1A8u, 0x1E0344u, 0x1E034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E034Cu;
label_1e034c:
    // 0x1e034c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E034Cu;
    {
        const bool branch_taken_0x1e034c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e034c) {
            ctx->pc = 0x1E0394u;
            goto label_1e0394;
        }
    }
    ctx->pc = 0x1E0354u;
    // 0x1e0354: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1E0354u;
    SET_GPR_U32(ctx, 31, 0x1E035Cu);
    ctx->pc = 0x1E0358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0354u;
    // 0x1e0358: 0x240400de  addiu       $a0, $zero, 0xDE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E0354u, 0x1E035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E035Cu;
label_1e035c:
    // 0x1e035c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e035cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0360: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0364: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1e0364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1e0368: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1e0368u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1e036c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e036cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0370: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e0370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0374: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0378: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1e0378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e037c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1e037cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e0380: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e0380u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0384: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1E0384u;
    SET_GPR_U32(ctx, 31, 0x1E038Cu);
    ctx->pc = 0x1E0388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0384u;
    // 0x1e0388: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1E0384u, 0x1E038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E038Cu;
label_1e038c:
    // 0x1e038c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E038Cu;
    {
        const bool branch_taken_0x1e038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e038c) {
            ctx->pc = 0x1E03CCu;
            goto label_1e03cc;
        }
    }
    ctx->pc = 0x1E0394u;
label_1e0394:
    // 0x1e0394: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1E0394u;
    SET_GPR_U32(ctx, 31, 0x1E039Cu);
    ctx->pc = 0x1E0398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0394u;
    // 0x1e0398: 0x240400df  addiu       $a0, $zero, 0xDF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1E0394u, 0x1E039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E039Cu;
label_1e039c:
    // 0x1e039c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e03a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e03a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03a4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1e03a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1e03a8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1e03a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1e03ac: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1e03acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e03b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e03b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e03b8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1e03b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e03bc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1e03bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e03c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e03c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e03c4: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x1E03C4u;
    SET_GPR_U32(ctx, 31, 0x1E03CCu);
    ctx->pc = 0x1E03C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E03C4u;
    // 0x1e03c8: 0x240b0003  addiu       $t3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1E03C4u, 0x1E03CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E03CCu;
label_1e03cc:
    // 0x1e03cc: 0xc07534a  jal         func_1D4D28
    ctx->pc = 0x1E03CCu;
    SET_GPR_U32(ctx, 31, 0x1E03D4u);
    ctx->pc = 0x1E03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E03CCu;
    // 0x1e03d0: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4D28u, 0x1E03CCu, 0x1E03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E03D4u;
label_1e03d4:
    // 0x1e03d4: 0xc07534a  jal         func_1D4D28
    ctx->pc = 0x1E03D4u;
    SET_GPR_U32(ctx, 31, 0x1E03DCu);
    ctx->pc = 0x1E03D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E03D4u;
    // 0x1e03d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4D28u, 0x1E03D4u, 0x1E03DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E03DCu;
label_1e03dc:
    // 0x1e03dc: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x1e03dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x1e03e0: 0xaec007ac  sw          $zero, 0x7AC($s6)
    ctx->pc = 0x1e03e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1964), GPR_U32(ctx, 0));
    // 0x1e03e4: 0xaec007a0  sw          $zero, 0x7A0($s6)
    ctx->pc = 0x1e03e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1952), GPR_U32(ctx, 0));
    // 0x1e03e8: 0xaec007a4  sw          $zero, 0x7A4($s6)
    ctx->pc = 0x1e03e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1956), GPR_U32(ctx, 0));
    // 0x1e03ec: 0xaec007a8  sw          $zero, 0x7A8($s6)
    ctx->pc = 0x1e03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1960), GPR_U32(ctx, 0));
    // 0x1e03f0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1e03f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e03f4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1e03f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e03f8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1e03f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e03fc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1e03fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e0400: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1e0400u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e0404: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1e0404u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e0408: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e0408u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e040c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1e040cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e0410: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1e0410u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e0414: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e0414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0418: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1e0418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e041c: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1e041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e0420: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1e0420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e0424: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0424u;
        // 0x1e0428: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E042Cu;
    // 0x1e042c: 0x0  nop
    ctx->pc = 0x1e042cu;
    // NOP
    ctx->pc = 0x1e0430u;
}
