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

// Function: sub_003DFFC0
// Address: 0x3dffc0 - 0x3e00a0
void sub_003DFFC0_0x3dffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFFC0_0x3dffc0");
#endif

    switch (ctx->pc) {
        case 0x3dffc0u: goto label_3dffc0;
        case 0x3dffc4u: goto label_3dffc4;
        case 0x3dffc8u: goto label_3dffc8;
        case 0x3dffccu: goto label_3dffcc;
        case 0x3dffd0u: goto label_3dffd0;
        case 0x3dffd4u: goto label_3dffd4;
        case 0x3dffd8u: goto label_3dffd8;
        case 0x3dffdcu: goto label_3dffdc;
        case 0x3dffe0u: goto label_3dffe0;
        case 0x3dffe4u: goto label_3dffe4;
        case 0x3dffe8u: goto label_3dffe8;
        case 0x3dffecu: goto label_3dffec;
        case 0x3dfff0u: goto label_3dfff0;
        case 0x3dfff4u: goto label_3dfff4;
        case 0x3dfff8u: goto label_3dfff8;
        case 0x3dfffcu: goto label_3dfffc;
        case 0x3e0000u: goto label_3e0000;
        case 0x3e0004u: goto label_3e0004;
        case 0x3e0008u: goto label_3e0008;
        case 0x3e000cu: goto label_3e000c;
        case 0x3e0010u: goto label_3e0010;
        case 0x3e0014u: goto label_3e0014;
        case 0x3e0018u: goto label_3e0018;
        case 0x3e001cu: goto label_3e001c;
        case 0x3e0020u: goto label_3e0020;
        case 0x3e0024u: goto label_3e0024;
        case 0x3e0028u: goto label_3e0028;
        case 0x3e002cu: goto label_3e002c;
        case 0x3e0030u: goto label_3e0030;
        case 0x3e0034u: goto label_3e0034;
        case 0x3e0038u: goto label_3e0038;
        case 0x3e003cu: goto label_3e003c;
        case 0x3e0040u: goto label_3e0040;
        case 0x3e0044u: goto label_3e0044;
        case 0x3e0048u: goto label_3e0048;
        case 0x3e004cu: goto label_3e004c;
        case 0x3e0050u: goto label_3e0050;
        case 0x3e0054u: goto label_3e0054;
        case 0x3e0058u: goto label_3e0058;
        case 0x3e005cu: goto label_3e005c;
        case 0x3e0060u: goto label_3e0060;
        case 0x3e0064u: goto label_3e0064;
        case 0x3e0068u: goto label_3e0068;
        case 0x3e006cu: goto label_3e006c;
        case 0x3e0070u: goto label_3e0070;
        case 0x3e0074u: goto label_3e0074;
        case 0x3e0078u: goto label_3e0078;
        case 0x3e007cu: goto label_3e007c;
        case 0x3e0080u: goto label_3e0080;
        case 0x3e0084u: goto label_3e0084;
        case 0x3e0088u: goto label_3e0088;
        case 0x3e008cu: goto label_3e008c;
        case 0x3e0090u: goto label_3e0090;
        case 0x3e0094u: goto label_3e0094;
        case 0x3e0098u: goto label_3e0098;
        case 0x3e009cu: goto label_3e009c;
        default: break;
    }

    ctx->pc = 0x3dffc0u;

label_3dffc0:
    // 0x3dffc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3dffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3dffc4:
    // 0x3dffc4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3dffc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3dffc8:
    // 0x3dffc8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3dffc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3dffcc:
    // 0x3dffcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dffccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dffd0:
    // 0x3dffd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3dffd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3dffd4:
    // 0x3dffd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3dffd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dffd8:
    // 0x3dffd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3dffdc:
    // 0x3dffdc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3dffdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3dffe0:
    // 0x3dffe0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dffe4:
    // 0x3dffe4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dffe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dffe8:
    // 0x3dffe8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dffec:
    // 0x3dffec: 0x40f809  jalr        $v0
label_3dfff0:
    if (ctx->pc == 0x3DFFF0u) {
        ctx->pc = 0x3DFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFECu;
        // 0x3dfff0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFFF4u;
        goto label_3dfff4;
    }
    ctx->pc = 0x3DFFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DFFF4u);
        ctx->pc = 0x3DFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFECu;
        // 0x3dfff0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFFECu, 0x3DFFF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DFFF4u;
label_3dfff4:
    // 0x3dfff4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dfff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dfff8:
    // 0x3dfff8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3dfff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3dfffc:
    // 0x3dfffc: 0xc0e858c  jal         func_3A1630
label_3e0000:
    if (ctx->pc == 0x3E0000u) {
        ctx->pc = 0x3E0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFFFCu;
        // 0x3e0000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0004u;
        goto label_3e0004;
    }
    ctx->pc = 0x3DFFFCu;
    SET_GPR_U32(ctx, 31, 0x3E0004u);
    ctx->pc = 0x3E0000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFFFCu;
    // 0x3e0000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DFFFCu, 0x3E0004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0004u;
label_3e0004:
    // 0x3e0004: 0x3c02b010  lui         $v0, 0xB010
    ctx->pc = 0x3e0004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45072 << 16));
label_3e0008:
    // 0x3e0008: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3e0008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3e000c:
    // 0x3e000c: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x3e000cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_3e0010:
    // 0x3e0010: 0xc0ea13a  jal         func_3A84E8
label_3e0014:
    if (ctx->pc == 0x3E0014u) {
        ctx->pc = 0x3E0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0010u;
        // 0x3e0014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0018u;
        goto label_3e0018;
    }
    ctx->pc = 0x3E0010u;
    SET_GPR_U32(ctx, 31, 0x3E0018u);
    ctx->pc = 0x3E0014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0010u;
    // 0x3e0014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E0010u, 0x3E0018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0018u;
label_3e0018:
    // 0x3e0018: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e0018u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3e001c:
    // 0x3e001c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e001cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e0020:
    // 0x3e0020: 0xc0ea12a  jal         func_3A84A8
label_3e0024:
    if (ctx->pc == 0x3E0024u) {
        ctx->pc = 0x3E0024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0020u;
        // 0x3e0024: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0028u;
        goto label_3e0028;
    }
    ctx->pc = 0x3E0020u;
    SET_GPR_U32(ctx, 31, 0x3E0028u);
    ctx->pc = 0x3E0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0020u;
    // 0x3e0024: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E0020u, 0x3E0028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0028u;
label_3e0028:
    // 0x3e0028: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e0028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e002c:
    // 0x3e002c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3e002cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3e0030:
    // 0x3e0030: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3e0030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3e0034:
    // 0x3e0034: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e0034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e0038:
    // 0x3e0038: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3e0038u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3e003c:
    // 0x3e003c: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3e003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3e0040:
    // 0x3e0040: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3e0040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3e0044:
    // 0x3e0044: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x3e0044u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_3e0048:
    // 0x3e0048: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3e0048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3e004c:
    // 0x3e004c: 0xe61400c0  swc1        $f20, 0xC0($s0)
    ctx->pc = 0x3e004cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3e0050:
    // 0x3e0050: 0xc0cd4ee  jal         func_3353B8
label_3e0054:
    if (ctx->pc == 0x3E0054u) {
        ctx->pc = 0x3E0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0050u;
        // 0x3e0054: 0xae0300c4  sw          $v1, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0058u;
        goto label_3e0058;
    }
    ctx->pc = 0x3E0050u;
    SET_GPR_U32(ctx, 31, 0x3E0058u);
    ctx->pc = 0x3E0054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0050u;
    // 0x3e0054: 0xae0300c4  sw          $v1, 0xC4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E0050u, 0x3E0058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0058u;
label_3e0058:
    // 0x3e0058: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3e0058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3e005c:
    // 0x3e005c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0060:
    // 0x3e0060: 0x34a5002a  ori         $a1, $a1, 0x2A
    ctx->pc = 0x3e0060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42);
label_3e0064:
    // 0x3e0064: 0xc0e9404  jal         func_3A5010
label_3e0068:
    if (ctx->pc == 0x3E0068u) {
        ctx->pc = 0x3E0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0064u;
        // 0x3e0068: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E006Cu;
        goto label_3e006c;
    }
    ctx->pc = 0x3E0064u;
    SET_GPR_U32(ctx, 31, 0x3E006Cu);
    ctx->pc = 0x3E0068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0064u;
    // 0x3e0068: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3E0064u, 0x3E006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E006Cu;
label_3e006c:
    // 0x3e006c: 0x3c03b010  lui         $v1, 0xB010
    ctx->pc = 0x3e006cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45072 << 16));
label_3e0070:
    // 0x3e0070: 0x3c02b010  lui         $v0, 0xB010
    ctx->pc = 0x3e0070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45072 << 16));
label_3e0074:
    // 0x3e0074: 0x34630030  ori         $v1, $v1, 0x30
    ctx->pc = 0x3e0074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
label_3e0078:
    // 0x3e0078: 0x34420090  ori         $v0, $v0, 0x90
    ctx->pc = 0x3e0078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
label_3e007c:
    // 0x3e007c: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3e007cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3e0080:
    // 0x3e0080: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x3e0080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_3e0084:
    // 0x3e0084: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3e0084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e0088:
    // 0x3e0088: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3e0088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e008c:
    // 0x3e008c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e008cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e0090:
    // 0x3e0090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e0090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e0094:
    // 0x3e0094: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3e0094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e0098:
    // 0x3e0098: 0x3e00008  jr          $ra
label_3e009c:
    if (ctx->pc == 0x3E009Cu) {
        ctx->pc = 0x3E009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0098u;
        // 0x3e009c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E00A0u;
        goto label_fallthrough_0x3e0098;
    }
    ctx->pc = 0x3E0098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0098u;
        // 0x3e009c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e0098:
    ctx->pc = 0x3E00A0u;
}
