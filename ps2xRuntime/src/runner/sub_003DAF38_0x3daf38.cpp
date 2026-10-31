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

// Function: sub_003DAF38
// Address: 0x3daf38 - 0x3db148
void sub_003DAF38_0x3daf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAF38_0x3daf38");
#endif

    switch (ctx->pc) {
        case 0x3daf38u: goto label_3daf38;
        case 0x3daf3cu: goto label_3daf3c;
        case 0x3daf40u: goto label_3daf40;
        case 0x3daf44u: goto label_3daf44;
        case 0x3daf48u: goto label_3daf48;
        case 0x3daf4cu: goto label_3daf4c;
        case 0x3daf50u: goto label_3daf50;
        case 0x3daf54u: goto label_3daf54;
        case 0x3daf58u: goto label_3daf58;
        case 0x3daf5cu: goto label_3daf5c;
        case 0x3daf60u: goto label_3daf60;
        case 0x3daf64u: goto label_3daf64;
        case 0x3daf68u: goto label_3daf68;
        case 0x3daf6cu: goto label_3daf6c;
        case 0x3daf70u: goto label_3daf70;
        case 0x3daf74u: goto label_3daf74;
        case 0x3daf78u: goto label_3daf78;
        case 0x3daf7cu: goto label_3daf7c;
        case 0x3daf80u: goto label_3daf80;
        case 0x3daf84u: goto label_3daf84;
        case 0x3daf88u: goto label_3daf88;
        case 0x3daf8cu: goto label_3daf8c;
        case 0x3daf90u: goto label_3daf90;
        case 0x3daf94u: goto label_3daf94;
        case 0x3daf98u: goto label_3daf98;
        case 0x3daf9cu: goto label_3daf9c;
        case 0x3dafa0u: goto label_3dafa0;
        case 0x3dafa4u: goto label_3dafa4;
        case 0x3dafa8u: goto label_3dafa8;
        case 0x3dafacu: goto label_3dafac;
        case 0x3dafb0u: goto label_3dafb0;
        case 0x3dafb4u: goto label_3dafb4;
        case 0x3dafb8u: goto label_3dafb8;
        case 0x3dafbcu: goto label_3dafbc;
        case 0x3dafc0u: goto label_3dafc0;
        case 0x3dafc4u: goto label_3dafc4;
        case 0x3dafc8u: goto label_3dafc8;
        case 0x3dafccu: goto label_3dafcc;
        case 0x3dafd0u: goto label_3dafd0;
        case 0x3dafd4u: goto label_3dafd4;
        case 0x3dafd8u: goto label_3dafd8;
        case 0x3dafdcu: goto label_3dafdc;
        case 0x3dafe0u: goto label_3dafe0;
        case 0x3dafe4u: goto label_3dafe4;
        case 0x3dafe8u: goto label_3dafe8;
        case 0x3dafecu: goto label_3dafec;
        case 0x3daff0u: goto label_3daff0;
        case 0x3daff4u: goto label_3daff4;
        case 0x3daff8u: goto label_3daff8;
        case 0x3daffcu: goto label_3daffc;
        case 0x3db000u: goto label_3db000;
        case 0x3db004u: goto label_3db004;
        case 0x3db008u: goto label_3db008;
        case 0x3db00cu: goto label_3db00c;
        case 0x3db010u: goto label_3db010;
        case 0x3db014u: goto label_3db014;
        case 0x3db018u: goto label_3db018;
        case 0x3db01cu: goto label_3db01c;
        case 0x3db020u: goto label_3db020;
        case 0x3db024u: goto label_3db024;
        case 0x3db028u: goto label_3db028;
        case 0x3db02cu: goto label_3db02c;
        case 0x3db030u: goto label_3db030;
        case 0x3db034u: goto label_3db034;
        case 0x3db038u: goto label_3db038;
        case 0x3db03cu: goto label_3db03c;
        case 0x3db040u: goto label_3db040;
        case 0x3db044u: goto label_3db044;
        case 0x3db048u: goto label_3db048;
        case 0x3db04cu: goto label_3db04c;
        case 0x3db050u: goto label_3db050;
        case 0x3db054u: goto label_3db054;
        case 0x3db058u: goto label_3db058;
        case 0x3db05cu: goto label_3db05c;
        case 0x3db060u: goto label_3db060;
        case 0x3db064u: goto label_3db064;
        case 0x3db068u: goto label_3db068;
        case 0x3db06cu: goto label_3db06c;
        case 0x3db070u: goto label_3db070;
        case 0x3db074u: goto label_3db074;
        case 0x3db078u: goto label_3db078;
        case 0x3db07cu: goto label_3db07c;
        case 0x3db080u: goto label_3db080;
        case 0x3db084u: goto label_3db084;
        case 0x3db088u: goto label_3db088;
        case 0x3db08cu: goto label_3db08c;
        case 0x3db090u: goto label_3db090;
        case 0x3db094u: goto label_3db094;
        case 0x3db098u: goto label_3db098;
        case 0x3db09cu: goto label_3db09c;
        case 0x3db0a0u: goto label_3db0a0;
        case 0x3db0a4u: goto label_3db0a4;
        case 0x3db0a8u: goto label_3db0a8;
        case 0x3db0acu: goto label_3db0ac;
        case 0x3db0b0u: goto label_3db0b0;
        case 0x3db0b4u: goto label_3db0b4;
        case 0x3db0b8u: goto label_3db0b8;
        case 0x3db0bcu: goto label_3db0bc;
        case 0x3db0c0u: goto label_3db0c0;
        case 0x3db0c4u: goto label_3db0c4;
        case 0x3db0c8u: goto label_3db0c8;
        case 0x3db0ccu: goto label_3db0cc;
        case 0x3db0d0u: goto label_3db0d0;
        case 0x3db0d4u: goto label_3db0d4;
        case 0x3db0d8u: goto label_3db0d8;
        case 0x3db0dcu: goto label_3db0dc;
        case 0x3db0e0u: goto label_3db0e0;
        case 0x3db0e4u: goto label_3db0e4;
        case 0x3db0e8u: goto label_3db0e8;
        case 0x3db0ecu: goto label_3db0ec;
        case 0x3db0f0u: goto label_3db0f0;
        case 0x3db0f4u: goto label_3db0f4;
        case 0x3db0f8u: goto label_3db0f8;
        case 0x3db0fcu: goto label_3db0fc;
        case 0x3db100u: goto label_3db100;
        case 0x3db104u: goto label_3db104;
        case 0x3db108u: goto label_3db108;
        case 0x3db10cu: goto label_3db10c;
        case 0x3db110u: goto label_3db110;
        case 0x3db114u: goto label_3db114;
        case 0x3db118u: goto label_3db118;
        case 0x3db11cu: goto label_3db11c;
        case 0x3db120u: goto label_3db120;
        case 0x3db124u: goto label_3db124;
        case 0x3db128u: goto label_3db128;
        case 0x3db12cu: goto label_3db12c;
        case 0x3db130u: goto label_3db130;
        case 0x3db134u: goto label_3db134;
        case 0x3db138u: goto label_3db138;
        case 0x3db13cu: goto label_3db13c;
        case 0x3db140u: goto label_3db140;
        case 0x3db144u: goto label_3db144;
        default: break;
    }

    ctx->pc = 0x3daf38u;

label_3daf38:
    // 0x3daf38: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x3daf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
label_3daf3c:
    // 0x3daf3c: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x3daf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
label_3daf40:
    // 0x3daf40: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x3daf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
label_3daf44:
    // 0x3daf44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3daf44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3daf48:
    // 0x3daf48: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x3daf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
label_3daf4c:
    // 0x3daf4c: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x3daf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
label_3daf50:
    // 0x3daf50: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x3daf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
label_3daf54:
    // 0x3daf54: 0xe7b604e0  swc1        $f22, 0x4E0($sp)
    ctx->pc = 0x3daf54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1248), bits); }
label_3daf58:
    // 0x3daf58: 0xe7b504d8  swc1        $f21, 0x4D8($sp)
    ctx->pc = 0x3daf58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1240), bits); }
label_3daf5c:
    // 0x3daf5c: 0xe7b404d0  swc1        $f20, 0x4D0($sp)
    ctx->pc = 0x3daf5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
label_3daf60:
    // 0x3daf60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3daf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3daf64:
    // 0x3daf64: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3daf64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3daf68:
    // 0x3daf68: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3daf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3daf6c:
    // 0x3daf6c: 0x40f809  jalr        $v0
label_3daf70:
    if (ctx->pc == 0x3DAF70u) {
        ctx->pc = 0x3DAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF6Cu;
        // 0x3daf70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAF74u;
        goto label_3daf74;
    }
    ctx->pc = 0x3DAF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DAF74u);
        ctx->pc = 0x3DAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF6Cu;
        // 0x3daf70: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAF6Cu, 0x3DAF74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DAF74u;
label_3daf74:
    // 0x3daf74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3daf74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3daf78:
    // 0x3daf78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3daf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3daf7c:
    // 0x3daf7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3daf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3daf80:
    // 0x3daf80: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3daf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3daf84:
    // 0x3daf84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3daf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3daf88:
    // 0x3daf88: 0x0  nop
    ctx->pc = 0x3daf88u;
    // NOP
label_3daf8c:
    // 0x3daf8c: 0x0  nop
    ctx->pc = 0x3daf8cu;
    // NOP
label_3daf90:
    // 0x3daf90: 0x0  nop
    ctx->pc = 0x3daf90u;
    // NOP
label_3daf94:
    // 0x3daf94: 0x0  nop
    ctx->pc = 0x3daf94u;
    // NOP
label_3daf98:
    // 0x3daf98: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3daf9c:
    if (ctx->pc == 0x3DAF9Cu) {
        ctx->pc = 0x3DAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF98u;
        // 0x3daf9c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAFA0u;
        goto label_3dafa0;
    }
    ctx->pc = 0x3DAF98u;
    {
        const bool branch_taken_0x3daf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF98u;
        // 0x3daf9c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daf98) {
            ctx->pc = 0x3DAF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3daf88;
        }
    }
    ctx->pc = 0x3DAFA0u;
label_3dafa0:
    // 0x3dafa0: 0xc138ddc  jal         func_4E3770
label_3dafa4:
    if (ctx->pc == 0x3DAFA4u) {
        ctx->pc = 0x3DAFA8u;
        goto label_3dafa8;
    }
    ctx->pc = 0x3DAFA0u;
    SET_GPR_U32(ctx, 31, 0x3DAFA8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DAFA0u, 0x3DAFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAFA8u;
label_3dafa8:
    // 0x3dafa8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3dafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3dafac:
    // 0x3dafac: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
label_3dafb0:
    if (ctx->pc == 0x3DAFB0u) {
        ctx->pc = 0x3DAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAFACu;
        // 0x3dafb0: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAFB4u;
        goto label_3dafb4;
    }
    ctx->pc = 0x3DAFACu;
    {
        const bool branch_taken_0x3dafac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dafac) {
            ctx->pc = 0x3DAFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DAFACu;
            // 0x3dafb0: 0x27a40420  addiu       $a0, $sp, 0x420 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB07Cu;
            goto label_3db07c;
        }
    }
    ctx->pc = 0x3DAFB4u;
label_3dafb4:
    // 0x3dafb4: 0x3c01c320  lui         $at, 0xC320
    ctx->pc = 0x3dafb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49952 << 16));
label_3dafb8:
    // 0x3dafb8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3dafb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3dafbc:
    // 0x3dafbc: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3dafbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3dafc0:
    // 0x3dafc0: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x3dafc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
label_3dafc4:
    // 0x3dafc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3dafc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3dafc8:
    // 0x3dafc8: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3dafc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3dafcc:
    // 0x3dafcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dafccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dafd0:
    // 0x3dafd0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3dafd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3dafd4:
    // 0x3dafd4: 0xc0cd518  jal         func_335460
label_3dafd8:
    if (ctx->pc == 0x3DAFD8u) {
        ctx->pc = 0x3DAFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAFD4u;
        // 0x3dafd8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAFDCu;
        goto label_3dafdc;
    }
    ctx->pc = 0x3DAFD4u;
    SET_GPR_U32(ctx, 31, 0x3DAFDCu);
    ctx->pc = 0x3DAFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAFD4u;
    // 0x3dafd8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DAFD4u, 0x3DAFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAFDCu;
label_3dafdc:
    // 0x3dafdc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3dafdcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3dafe0:
    // 0x3dafe0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3dafe0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3dafe4:
    // 0x3dafe4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3dafe4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3dafe8:
    // 0x3dafe8: 0xc0cd518  jal         func_335460
label_3dafec:
    if (ctx->pc == 0x3DAFECu) {
        ctx->pc = 0x3DAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAFE8u;
        // 0x3dafec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DAFF0u;
        goto label_3daff0;
    }
    ctx->pc = 0x3DAFE8u;
    SET_GPR_U32(ctx, 31, 0x3DAFF0u);
    ctx->pc = 0x3DAFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAFE8u;
    // 0x3dafec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DAFE8u, 0x3DAFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAFF0u;
label_3daff0:
    // 0x3daff0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3daff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3daff4:
    // 0x3daff4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3daff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3daff8:
    // 0x3daff8: 0x27b10440  addiu       $s1, $sp, 0x440
    ctx->pc = 0x3daff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3daffc:
    // 0x3daffc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3daffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3db000:
    // 0x3db000: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3db000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3db004:
    // 0x3db004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3db004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db008:
    // 0x3db008: 0xe7b60440  swc1        $f22, 0x440($sp)
    ctx->pc = 0x3db008u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3db00c:
    // 0x3db00c: 0x46001346  mov.s       $f13, $f2
    ctx->pc = 0x3db00cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[2]);
label_3db010:
    // 0x3db010: 0xe7a00444  swc1        $f0, 0x444($sp)
    ctx->pc = 0x3db010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1092), bits); }
label_3db014:
    // 0x3db014: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x3db014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3db018:
    // 0x3db018: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x3db018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3db01c:
    // 0x3db01c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3db01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3db020:
    // 0x3db020: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3db020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3db024:
    // 0x3db024: 0x7ba30440  lq          $v1, 0x440($sp)
    ctx->pc = 0x3db024u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3db028:
    // 0x3db028: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3db028u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3db02c:
    // 0x3db02c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3db02cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3db030:
    // 0x3db030: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3db030u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3db034:
    // 0x3db034: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3db034u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3db038:
    // 0x3db038: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3db038u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3db03c:
    // 0x3db03c: 0x4a0003bf  vwaitq
    ctx->pc = 0x3db03cu;
    // VWAITQ (Q already resolved in this runtime)
label_3db040:
    // 0x3db040: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3db040u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3db044:
    // 0x3db044: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3db044u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3db048:
    // 0x3db048: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3db048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3db04c:
    // 0x3db04c: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3db04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3db050:
    // 0x3db050: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3db050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3db054:
    // 0x3db054: 0xc0cd518  jal         func_335460
label_3db058:
    if (ctx->pc == 0x3DB058u) {
        ctx->pc = 0x3DB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB054u;
        // 0x3db058: 0x7fa30430  sq          $v1, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB05Cu;
        goto label_3db05c;
    }
    ctx->pc = 0x3DB054u;
    SET_GPR_U32(ctx, 31, 0x3DB05Cu);
    ctx->pc = 0x3DB058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB054u;
    // 0x3db058: 0x7fa30430  sq          $v1, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DB054u, 0x3DB05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB05Cu;
label_3db05c:
    // 0x3db05c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3db05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3db060:
    // 0x3db060: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3db060u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3db064:
    // 0x3db064: 0xc136b24  jal         func_4DAC90
label_3db068:
    if (ctx->pc == 0x3DB068u) {
        ctx->pc = 0x3DB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB064u;
        // 0x3db068: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB06Cu;
        goto label_3db06c;
    }
    ctx->pc = 0x3DB064u;
    SET_GPR_U32(ctx, 31, 0x3DB06Cu);
    ctx->pc = 0x3DB068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB064u;
    // 0x3db068: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DB064u, 0x3DB06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB06Cu;
label_3db06c:
    // 0x3db06c: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3db06cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3db070:
    // 0x3db070: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x3db070u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
label_3db074:
    // 0x3db074: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3db074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3db078:
    // 0x3db078: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x3db078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3db07c:
    // 0x3db07c: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x3db07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_3db080:
    // 0x3db080: 0xc136b18  jal         func_4DAC60
label_3db084:
    if (ctx->pc == 0x3DB084u) {
        ctx->pc = 0x3DB084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB080u;
        // 0x3db084: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB088u;
        goto label_3db088;
    }
    ctx->pc = 0x3DB080u;
    SET_GPR_U32(ctx, 31, 0x3DB088u);
    ctx->pc = 0x3DB084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB080u;
    // 0x3db084: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DB080u, 0x3DB088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB088u;
label_3db088:
    // 0x3db088: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3db088u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3db08c:
    // 0x3db08c: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x3db08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_3db090:
    // 0x3db090: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x3db090u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
label_3db094:
    // 0x3db094: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3db094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3db098:
    // 0x3db098: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x3db098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3db09c:
    // 0x3db09c: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
label_3db0a0:
    if (ctx->pc == 0x3DB0A0u) {
        ctx->pc = 0x3DB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB09Cu;
        // 0x3db0a0: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB0A4u;
        goto label_3db0a4;
    }
    ctx->pc = 0x3DB09Cu;
    {
        const bool branch_taken_0x3db09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3db09c) {
            ctx->pc = 0x3DB0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB09Cu;
            // 0x3db0a0: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB0B4u;
            goto label_3db0b4;
        }
    }
    ctx->pc = 0x3DB0A4u;
label_3db0a4:
    // 0x3db0a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3db0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3db0a8:
    // 0x3db0a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3db0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3db0ac:
    // 0x3db0ac: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3db0acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3db0b0:
    // 0x3db0b0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3db0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3db0b4:
    // 0x3db0b4: 0x2842005b  slti        $v0, $v0, 0x5B
    ctx->pc = 0x3db0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)91) ? 1 : 0);
label_3db0b8:
    // 0x3db0b8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3db0bc:
    if (ctx->pc == 0x3DB0BCu) {
        ctx->pc = 0x3DB0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB0B8u;
        // 0x3db0bc: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB0C0u;
        goto label_3db0c0;
    }
    ctx->pc = 0x3DB0B8u;
    {
        const bool branch_taken_0x3db0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3db0b8) {
            ctx->pc = 0x3DB0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB0B8u;
            // 0x3db0bc: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB0D0u;
            goto label_3db0d0;
        }
    }
    ctx->pc = 0x3DB0C0u;
label_3db0c0:
    // 0x3db0c0: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x3db0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_3db0c4:
    // 0x3db0c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3db0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3db0c8:
    // 0x3db0c8: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3db0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3db0cc:
    // 0x3db0cc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x3db0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3db0d0:
    // 0x3db0d0: 0x240200b3  addiu       $v0, $zero, 0xB3
    ctx->pc = 0x3db0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_3db0d4:
    // 0x3db0d4: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_3db0d8:
    if (ctx->pc == 0x3DB0D8u) {
        ctx->pc = 0x3DB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB0D4u;
        // 0x3db0d8: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB0DCu;
        goto label_3db0dc;
    }
    ctx->pc = 0x3DB0D4u;
    {
        const bool branch_taken_0x3db0d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3db0d4) {
            ctx->pc = 0x3DB0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB0D4u;
            // 0x3db0d8: 0x8e630010  lw          $v1, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB100u;
            goto label_3db100;
        }
    }
    ctx->pc = 0x3DB0DCu;
label_3db0dc:
    // 0x3db0dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3db0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3db0e0:
    // 0x3db0e0: 0xc0e858c  jal         func_3A1630
label_3db0e4:
    if (ctx->pc == 0x3DB0E4u) {
        ctx->pc = 0x3DB0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB0E0u;
        // 0x3db0e4: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB0E8u;
        goto label_3db0e8;
    }
    ctx->pc = 0x3DB0E0u;
    SET_GPR_U32(ctx, 31, 0x3DB0E8u);
    ctx->pc = 0x3DB0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB0E0u;
    // 0x3db0e4: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DB0E0u, 0x3DB0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB0E8u;
label_3db0e8:
    // 0x3db0e8: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x3db0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3db0ec:
    // 0x3db0ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3db0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3db0f0:
    // 0x3db0f0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3db0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3db0f4:
    // 0x3db0f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3db0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3db0f8:
    // 0x3db0f8: 0xae4300b4  sw          $v1, 0xB4($s2)
    ctx->pc = 0x3db0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
label_3db0fc:
    // 0x3db0fc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x3db0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3db100:
    // 0x3db100: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x3db100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_3db104:
    // 0x3db104: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3db108:
    if (ctx->pc == 0x3DB108u) {
        ctx->pc = 0x3DB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB104u;
        // 0x3db108: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB10Cu;
        goto label_3db10c;
    }
    ctx->pc = 0x3DB104u;
    {
        const bool branch_taken_0x3db104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB104u;
        // 0x3db108: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db104) {
            ctx->pc = 0x3DB118u;
            goto label_3db118;
        }
    }
    ctx->pc = 0x3DB10Cu;
label_3db10c:
    // 0x3db10c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3db10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3db110:
    // 0x3db110: 0x10000002  b           . + 4 + (0x2 << 2)
label_3db114:
    if (ctx->pc == 0x3DB114u) {
        ctx->pc = 0x3DB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB110u;
        // 0x3db114: 0xae630010  sw          $v1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB118u;
        goto label_3db118;
    }
    ctx->pc = 0x3DB110u;
    {
        const bool branch_taken_0x3db110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB110u;
        // 0x3db114: 0xae630010  sw          $v1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db110) {
            ctx->pc = 0x3DB11Cu;
            goto label_3db11c;
        }
    }
    ctx->pc = 0x3DB118u;
label_3db118:
    // 0x3db118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3db118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3db11c:
    // 0x3db11c: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x3db11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3db120:
    // 0x3db120: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x3db120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3db124:
    // 0x3db124: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x3db124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3db128:
    // 0x3db128: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x3db128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3db12c:
    // 0x3db12c: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x3db12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
label_3db130:
    // 0x3db130: 0xc7b604e0  lwc1        $f22, 0x4E0($sp)
    ctx->pc = 0x3db130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3db134:
    // 0x3db134: 0xc7b504d8  lwc1        $f21, 0x4D8($sp)
    ctx->pc = 0x3db134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3db138:
    // 0x3db138: 0xc7b404d0  lwc1        $f20, 0x4D0($sp)
    ctx->pc = 0x3db138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3db13c:
    // 0x3db13c: 0x3e00008  jr          $ra
label_3db140:
    if (ctx->pc == 0x3DB140u) {
        ctx->pc = 0x3DB140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB13Cu;
        // 0x3db140: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB144u;
        goto label_3db144;
    }
    ctx->pc = 0x3DB13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB13Cu;
        // 0x3db140: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB144u;
label_3db144:
    // 0x3db144: 0x0  nop
    ctx->pc = 0x3db144u;
    // NOP
    ctx->pc = 0x3db148u;
}
