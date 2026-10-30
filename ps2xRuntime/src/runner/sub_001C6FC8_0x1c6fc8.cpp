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

// Function: sub_001C6FC8
// Address: 0x1c6fc8 - 0x1c7128
void sub_001C6FC8_0x1c6fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6FC8_0x1c6fc8");
#endif

    switch (ctx->pc) {
        case 0x1c6fc8u: goto label_1c6fc8;
        case 0x1c6fccu: goto label_1c6fcc;
        case 0x1c6fd0u: goto label_1c6fd0;
        case 0x1c6fd4u: goto label_1c6fd4;
        case 0x1c6fd8u: goto label_1c6fd8;
        case 0x1c6fdcu: goto label_1c6fdc;
        case 0x1c6fe0u: goto label_1c6fe0;
        case 0x1c6fe4u: goto label_1c6fe4;
        case 0x1c6fe8u: goto label_1c6fe8;
        case 0x1c6fecu: goto label_1c6fec;
        case 0x1c6ff0u: goto label_1c6ff0;
        case 0x1c6ff4u: goto label_1c6ff4;
        case 0x1c6ff8u: goto label_1c6ff8;
        case 0x1c6ffcu: goto label_1c6ffc;
        case 0x1c7000u: goto label_1c7000;
        case 0x1c7004u: goto label_1c7004;
        case 0x1c7008u: goto label_1c7008;
        case 0x1c700cu: goto label_1c700c;
        case 0x1c7010u: goto label_1c7010;
        case 0x1c7014u: goto label_1c7014;
        case 0x1c7018u: goto label_1c7018;
        case 0x1c701cu: goto label_1c701c;
        case 0x1c7020u: goto label_1c7020;
        case 0x1c7024u: goto label_1c7024;
        case 0x1c7028u: goto label_1c7028;
        case 0x1c702cu: goto label_1c702c;
        case 0x1c7030u: goto label_1c7030;
        case 0x1c7034u: goto label_1c7034;
        case 0x1c7038u: goto label_1c7038;
        case 0x1c703cu: goto label_1c703c;
        case 0x1c7040u: goto label_1c7040;
        case 0x1c7044u: goto label_1c7044;
        case 0x1c7048u: goto label_1c7048;
        case 0x1c704cu: goto label_1c704c;
        case 0x1c7050u: goto label_1c7050;
        case 0x1c7054u: goto label_1c7054;
        case 0x1c7058u: goto label_1c7058;
        case 0x1c705cu: goto label_1c705c;
        case 0x1c7060u: goto label_1c7060;
        case 0x1c7064u: goto label_1c7064;
        case 0x1c7068u: goto label_1c7068;
        case 0x1c706cu: goto label_1c706c;
        case 0x1c7070u: goto label_1c7070;
        case 0x1c7074u: goto label_1c7074;
        case 0x1c7078u: goto label_1c7078;
        case 0x1c707cu: goto label_1c707c;
        case 0x1c7080u: goto label_1c7080;
        case 0x1c7084u: goto label_1c7084;
        case 0x1c7088u: goto label_1c7088;
        case 0x1c708cu: goto label_1c708c;
        case 0x1c7090u: goto label_1c7090;
        case 0x1c7094u: goto label_1c7094;
        case 0x1c7098u: goto label_1c7098;
        case 0x1c709cu: goto label_1c709c;
        case 0x1c70a0u: goto label_1c70a0;
        case 0x1c70a4u: goto label_1c70a4;
        case 0x1c70a8u: goto label_1c70a8;
        case 0x1c70acu: goto label_1c70ac;
        case 0x1c70b0u: goto label_1c70b0;
        case 0x1c70b4u: goto label_1c70b4;
        case 0x1c70b8u: goto label_1c70b8;
        case 0x1c70bcu: goto label_1c70bc;
        case 0x1c70c0u: goto label_1c70c0;
        case 0x1c70c4u: goto label_1c70c4;
        case 0x1c70c8u: goto label_1c70c8;
        case 0x1c70ccu: goto label_1c70cc;
        case 0x1c70d0u: goto label_1c70d0;
        case 0x1c70d4u: goto label_1c70d4;
        case 0x1c70d8u: goto label_1c70d8;
        case 0x1c70dcu: goto label_1c70dc;
        case 0x1c70e0u: goto label_1c70e0;
        case 0x1c70e4u: goto label_1c70e4;
        case 0x1c70e8u: goto label_1c70e8;
        case 0x1c70ecu: goto label_1c70ec;
        case 0x1c70f0u: goto label_1c70f0;
        case 0x1c70f4u: goto label_1c70f4;
        case 0x1c70f8u: goto label_1c70f8;
        case 0x1c70fcu: goto label_1c70fc;
        case 0x1c7100u: goto label_1c7100;
        case 0x1c7104u: goto label_1c7104;
        case 0x1c7108u: goto label_1c7108;
        case 0x1c710cu: goto label_1c710c;
        case 0x1c7110u: goto label_1c7110;
        case 0x1c7114u: goto label_1c7114;
        case 0x1c7118u: goto label_1c7118;
        case 0x1c711cu: goto label_1c711c;
        case 0x1c7120u: goto label_1c7120;
        case 0x1c7124u: goto label_1c7124;
        default: break;
    }

    ctx->pc = 0x1c6fc8u;

label_1c6fc8:
    // 0x1c6fc8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c6fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c6fcc:
    // 0x1c6fcc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c6fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1c6fd0:
    // 0x1c6fd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c6fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6fd4:
    // 0x1c6fd4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c6fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1c6fd8:
    // 0x1c6fd8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c6fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1c6fdc:
    // 0x1c6fdc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c6fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c6fe0:
    // 0x1c6fe0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c6fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c6fe4:
    // 0x1c6fe4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c6fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c6fe8:
    // 0x1c6fe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c6fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c6fec:
    // 0x1c6fec: 0xc071b06  jal         func_1C6C18
label_1c6ff0:
    if (ctx->pc == 0x1C6FF0u) {
        ctx->pc = 0x1C6FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6FECu;
        // 0x1c6ff0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6FF4u;
        goto label_1c6ff4;
    }
    ctx->pc = 0x1C6FECu;
    SET_GPR_U32(ctx, 31, 0x1C6FF4u);
    ctx->pc = 0x1C6FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6FECu;
    // 0x1c6ff0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6C18u, 0x1C6FECu, 0x1C6FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FF4u;
label_1c6ff4:
    // 0x1c6ff4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1c6ff8:
    // 0x1c6ff8: 0xae50050c  sw          $s0, 0x50C($s2)
    ctx->pc = 0x1c6ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1292), GPR_U32(ctx, 16));
label_1c6ffc:
    // 0x1c6ffc: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1c6ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1c7000:
    // 0x1c7000: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c7000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c7004:
    // 0x1c7004: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1c7004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1c7008:
    // 0x1c7008: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1c7008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1c700c:
    // 0x1c700c: 0x40f809  jalr        $v0
label_1c7010:
    if (ctx->pc == 0x1C7010u) {
        ctx->pc = 0x1C7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C700Cu;
        // 0x1c7010: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7014u;
        goto label_1c7014;
    }
    ctx->pc = 0x1C700Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7014u);
        ctx->pc = 0x1C7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C700Cu;
        // 0x1c7010: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C700Cu, 0x1C7014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C7014u;
label_1c7014:
    // 0x1c7014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7018:
    // 0x1c7018: 0xae420508  sw          $v0, 0x508($s2)
    ctx->pc = 0x1c7018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1288), GPR_U32(ctx, 2));
label_1c701c:
    // 0x1c701c: 0xae430504  sw          $v1, 0x504($s2)
    ctx->pc = 0x1c701cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1284), GPR_U32(ctx, 3));
label_1c7020:
    // 0x1c7020: 0xc075000  jal         func_1D4000
label_1c7024:
    if (ctx->pc == 0x1C7024u) {
        ctx->pc = 0x1C7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7020u;
        // 0x1c7024: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7028u;
        goto label_1c7028;
    }
    ctx->pc = 0x1C7020u;
    SET_GPR_U32(ctx, 31, 0x1C7028u);
    ctx->pc = 0x1C7024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7020u;
    // 0x1c7024: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4000u, 0x1C7020u, 0x1C7028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7028u;
label_1c7028:
    // 0x1c7028: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_1c702c:
    if (ctx->pc == 0x1C702Cu) {
        ctx->pc = 0x1C702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7028u;
        // 0x1c702c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7030u;
        goto label_1c7030;
    }
    ctx->pc = 0x1C7028u;
    {
        const bool branch_taken_0x1c7028 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7028u;
        // 0x1c702c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7028) {
            ctx->pc = 0x1C7098u;
            goto label_1c7098;
        }
    }
    ctx->pc = 0x1C7030u;
label_1c7030:
    // 0x1c7030: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c7030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c7034:
    // 0x1c7034: 0xc440ea24  lwc1        $f0, -0x15DC($v0)
    ctx->pc = 0x1c7034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7038:
    // 0x1c7038: 0x26440420  addiu       $a0, $s2, 0x420
    ctx->pc = 0x1c7038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
label_1c703c:
    // 0x1c703c: 0xc461ea28  lwc1        $f1, -0x15D8($v1)
    ctx->pc = 0x1c703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7040:
    // 0x1c7040: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1c7040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c7044:
    // 0x1c7044: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c7044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c7048:
    // 0x1c7048: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c7048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c704c:
    // 0x1c704c: 0x24080086  addiu       $t0, $zero, 0x86
    ctx->pc = 0x1c704cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_1c7050:
    // 0x1c7050: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c7050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c7054:
    // 0x1c7054: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1c7054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c7058:
    // 0x1c7058: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1c7058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c705c:
    // 0x1c705c: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1c705cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1c7060:
    // 0x1c7060: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1c7060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c7064:
    // 0x1c7064: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1c7064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c7068:
    // 0x1c7068: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c7068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1c706c:
    // 0x1c706c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1c706cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7070:
    // 0x1c7070: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1c7070u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7074:
    // 0x1c7074: 0xac8700b8  sw          $a3, 0xB8($a0)
    ctx->pc = 0x1c7074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 7));
label_1c7078:
    // 0x1c7078: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x1c7078u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_1c707c:
    // 0x1c707c: 0xa3a80010  sb          $t0, 0x10($sp)
    ctx->pc = 0x1c707cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 8));
label_1c7080:
    // 0x1c7080: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x1c7080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
label_1c7084:
    // 0x1c7084: 0xa0660002  sb          $a2, 0x2($v1)
    ctx->pc = 0x1c7084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 6));
label_1c7088:
    // 0x1c7088: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x1c7088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
label_1c708c:
    // 0x1c708c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7090:
    // 0x1c7090: 0x10000012  b           . + 4 + (0x12 << 2)
label_1c7094:
    if (ctx->pc == 0x1C7094u) {
        ctx->pc = 0x1C7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7090u;
        // 0x1c7094: 0xac8200b4  sw          $v0, 0xB4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7098u;
        goto label_1c7098;
    }
    ctx->pc = 0x1C7090u;
    {
        const bool branch_taken_0x1c7090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7090u;
        // 0x1c7094: 0xac8200b4  sw          $v0, 0xB4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7090) {
            ctx->pc = 0x1C70DCu;
            goto label_1c70dc;
        }
    }
    ctx->pc = 0x1C7098u;
label_1c7098:
    // 0x1c7098: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c7098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c709c:
    // 0x1c709c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c709cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c70a0:
    // 0x1c70a0: 0x26440420  addiu       $a0, $s2, 0x420
    ctx->pc = 0x1c70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
label_1c70a4:
    // 0x1c70a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c70a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c70a8:
    // 0x1c70a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c70a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c70ac:
    // 0x1c70ac: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1c70acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c70b0:
    // 0x1c70b0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1c70b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c70b4:
    // 0x1c70b4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1c70b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_1c70b8:
    // 0x1c70b8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1c70b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c70bc:
    // 0x1c70bc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1c70bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c70c0:
    // 0x1c70c0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c70c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c70c4:
    // 0x1c70c4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c70c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1c70c8:
    // 0x1c70c8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1c70c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c70cc:
    // 0x1c70cc: 0xac8300b8  sw          $v1, 0xB8($a0)
    ctx->pc = 0x1c70ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 3));
label_1c70d0:
    // 0x1c70d0: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x1c70d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_1c70d4:
    // 0x1c70d4: 0x8ca3d310  lw          $v1, -0x2CF0($a1)
    ctx->pc = 0x1c70d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955792)));
label_1c70d8:
    // 0x1c70d8: 0xac8300b4  sw          $v1, 0xB4($a0)
    ctx->pc = 0x1c70d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 3));
label_1c70dc:
    // 0x1c70dc: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1c70dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1c70e0:
    // 0x1c70e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c70e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1c70e4:
    // 0x1c70e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c70e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c70e8:
    // 0x1c70e8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1c70e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1c70ec:
    // 0x1c70ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c70ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c70f0:
    // 0x1c70f0: 0xc070630  jal         func_1C18C0
label_1c70f4:
    if (ctx->pc == 0x1C70F4u) {
        ctx->pc = 0x1C70F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70F0u;
        // 0x1c70f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C70F8u;
        goto label_1c70f8;
    }
    ctx->pc = 0x1C70F0u;
    SET_GPR_U32(ctx, 31, 0x1C70F8u);
    ctx->pc = 0x1C70F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70F0u;
    // 0x1c70f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C18C0u, 0x1C70F0u, 0x1C70F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70F8u;
label_1c70f8:
    // 0x1c70f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c70fc:
    // 0x1c70fc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c70fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1c7100:
    // 0x1c7100: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1c7100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1c7104:
    // 0x1c7104: 0x60f809  jalr        $v1
label_1c7108:
    if (ctx->pc == 0x1C7108u) {
        ctx->pc = 0x1C7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7104u;
        // 0x1c7108: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C710Cu;
        goto label_1c710c;
    }
    ctx->pc = 0x1C7104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C710Cu);
        ctx->pc = 0x1C7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7104u;
        // 0x1c7108: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7104u, 0x1C710Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C710Cu;
label_1c710c:
    // 0x1c710c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c710cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c7110:
    // 0x1c7110: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c7110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c7114:
    // 0x1c7114: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c7114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c7118:
    // 0x1c7118: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c7118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c711c:
    // 0x1c711c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c711cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7120:
    // 0x1c7120: 0x3e00008  jr          $ra
label_1c7124:
    if (ctx->pc == 0x1C7124u) {
        ctx->pc = 0x1C7124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7120u;
        // 0x1c7124: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7128u;
        goto label_fallthrough_0x1c7120;
    }
    ctx->pc = 0x1C7120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7120u;
        // 0x1c7124: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c7120:
    ctx->pc = 0x1C7128u;
}
