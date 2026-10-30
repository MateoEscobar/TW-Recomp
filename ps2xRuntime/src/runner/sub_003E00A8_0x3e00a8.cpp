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

// Function: sub_003E00A8
// Address: 0x3e00a8 - 0x3e02a8
void sub_003E00A8_0x3e00a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E00A8_0x3e00a8");
#endif

    switch (ctx->pc) {
        case 0x3e00a8u: goto label_3e00a8;
        case 0x3e00acu: goto label_3e00ac;
        case 0x3e00b0u: goto label_3e00b0;
        case 0x3e00b4u: goto label_3e00b4;
        case 0x3e00b8u: goto label_3e00b8;
        case 0x3e00bcu: goto label_3e00bc;
        case 0x3e00c0u: goto label_3e00c0;
        case 0x3e00c4u: goto label_3e00c4;
        case 0x3e00c8u: goto label_3e00c8;
        case 0x3e00ccu: goto label_3e00cc;
        case 0x3e00d0u: goto label_3e00d0;
        case 0x3e00d4u: goto label_3e00d4;
        case 0x3e00d8u: goto label_3e00d8;
        case 0x3e00dcu: goto label_3e00dc;
        case 0x3e00e0u: goto label_3e00e0;
        case 0x3e00e4u: goto label_3e00e4;
        case 0x3e00e8u: goto label_3e00e8;
        case 0x3e00ecu: goto label_3e00ec;
        case 0x3e00f0u: goto label_3e00f0;
        case 0x3e00f4u: goto label_3e00f4;
        case 0x3e00f8u: goto label_3e00f8;
        case 0x3e00fcu: goto label_3e00fc;
        case 0x3e0100u: goto label_3e0100;
        case 0x3e0104u: goto label_3e0104;
        case 0x3e0108u: goto label_3e0108;
        case 0x3e010cu: goto label_3e010c;
        case 0x3e0110u: goto label_3e0110;
        case 0x3e0114u: goto label_3e0114;
        case 0x3e0118u: goto label_3e0118;
        case 0x3e011cu: goto label_3e011c;
        case 0x3e0120u: goto label_3e0120;
        case 0x3e0124u: goto label_3e0124;
        case 0x3e0128u: goto label_3e0128;
        case 0x3e012cu: goto label_3e012c;
        case 0x3e0130u: goto label_3e0130;
        case 0x3e0134u: goto label_3e0134;
        case 0x3e0138u: goto label_3e0138;
        case 0x3e013cu: goto label_3e013c;
        case 0x3e0140u: goto label_3e0140;
        case 0x3e0144u: goto label_3e0144;
        case 0x3e0148u: goto label_3e0148;
        case 0x3e014cu: goto label_3e014c;
        case 0x3e0150u: goto label_3e0150;
        case 0x3e0154u: goto label_3e0154;
        case 0x3e0158u: goto label_3e0158;
        case 0x3e015cu: goto label_3e015c;
        case 0x3e0160u: goto label_3e0160;
        case 0x3e0164u: goto label_3e0164;
        case 0x3e0168u: goto label_3e0168;
        case 0x3e016cu: goto label_3e016c;
        case 0x3e0170u: goto label_3e0170;
        case 0x3e0174u: goto label_3e0174;
        case 0x3e0178u: goto label_3e0178;
        case 0x3e017cu: goto label_3e017c;
        case 0x3e0180u: goto label_3e0180;
        case 0x3e0184u: goto label_3e0184;
        case 0x3e0188u: goto label_3e0188;
        case 0x3e018cu: goto label_3e018c;
        case 0x3e0190u: goto label_3e0190;
        case 0x3e0194u: goto label_3e0194;
        case 0x3e0198u: goto label_3e0198;
        case 0x3e019cu: goto label_3e019c;
        case 0x3e01a0u: goto label_3e01a0;
        case 0x3e01a4u: goto label_3e01a4;
        case 0x3e01a8u: goto label_3e01a8;
        case 0x3e01acu: goto label_3e01ac;
        case 0x3e01b0u: goto label_3e01b0;
        case 0x3e01b4u: goto label_3e01b4;
        case 0x3e01b8u: goto label_3e01b8;
        case 0x3e01bcu: goto label_3e01bc;
        case 0x3e01c0u: goto label_3e01c0;
        case 0x3e01c4u: goto label_3e01c4;
        case 0x3e01c8u: goto label_3e01c8;
        case 0x3e01ccu: goto label_3e01cc;
        case 0x3e01d0u: goto label_3e01d0;
        case 0x3e01d4u: goto label_3e01d4;
        case 0x3e01d8u: goto label_3e01d8;
        case 0x3e01dcu: goto label_3e01dc;
        case 0x3e01e0u: goto label_3e01e0;
        case 0x3e01e4u: goto label_3e01e4;
        case 0x3e01e8u: goto label_3e01e8;
        case 0x3e01ecu: goto label_3e01ec;
        case 0x3e01f0u: goto label_3e01f0;
        case 0x3e01f4u: goto label_3e01f4;
        case 0x3e01f8u: goto label_3e01f8;
        case 0x3e01fcu: goto label_3e01fc;
        case 0x3e0200u: goto label_3e0200;
        case 0x3e0204u: goto label_3e0204;
        case 0x3e0208u: goto label_3e0208;
        case 0x3e020cu: goto label_3e020c;
        case 0x3e0210u: goto label_3e0210;
        case 0x3e0214u: goto label_3e0214;
        case 0x3e0218u: goto label_3e0218;
        case 0x3e021cu: goto label_3e021c;
        case 0x3e0220u: goto label_3e0220;
        case 0x3e0224u: goto label_3e0224;
        case 0x3e0228u: goto label_3e0228;
        case 0x3e022cu: goto label_3e022c;
        case 0x3e0230u: goto label_3e0230;
        case 0x3e0234u: goto label_3e0234;
        case 0x3e0238u: goto label_3e0238;
        case 0x3e023cu: goto label_3e023c;
        case 0x3e0240u: goto label_3e0240;
        case 0x3e0244u: goto label_3e0244;
        case 0x3e0248u: goto label_3e0248;
        case 0x3e024cu: goto label_3e024c;
        case 0x3e0250u: goto label_3e0250;
        case 0x3e0254u: goto label_3e0254;
        case 0x3e0258u: goto label_3e0258;
        case 0x3e025cu: goto label_3e025c;
        case 0x3e0260u: goto label_3e0260;
        case 0x3e0264u: goto label_3e0264;
        case 0x3e0268u: goto label_3e0268;
        case 0x3e026cu: goto label_3e026c;
        case 0x3e0270u: goto label_3e0270;
        case 0x3e0274u: goto label_3e0274;
        case 0x3e0278u: goto label_3e0278;
        case 0x3e027cu: goto label_3e027c;
        case 0x3e0280u: goto label_3e0280;
        case 0x3e0284u: goto label_3e0284;
        case 0x3e0288u: goto label_3e0288;
        case 0x3e028cu: goto label_3e028c;
        case 0x3e0290u: goto label_3e0290;
        case 0x3e0294u: goto label_3e0294;
        case 0x3e0298u: goto label_3e0298;
        case 0x3e029cu: goto label_3e029c;
        case 0x3e02a0u: goto label_3e02a0;
        case 0x3e02a4u: goto label_3e02a4;
        default: break;
    }

    ctx->pc = 0x3e00a8u;

label_3e00a8:
    // 0x3e00a8: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x3e00a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
label_3e00ac:
    // 0x3e00ac: 0x7fb20470  sq          $s2, 0x470($sp)
    ctx->pc = 0x3e00acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 18));
label_3e00b0:
    // 0x3e00b0: 0x7fb30460  sq          $s3, 0x460($sp)
    ctx->pc = 0x3e00b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 19));
label_3e00b4:
    // 0x3e00b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e00b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e00b8:
    // 0x3e00b8: 0x7fb00490  sq          $s0, 0x490($sp)
    ctx->pc = 0x3e00b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 16));
label_3e00bc:
    // 0x3e00bc: 0x7fb10480  sq          $s1, 0x480($sp)
    ctx->pc = 0x3e00bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 17));
label_3e00c0:
    // 0x3e00c0: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x3e00c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
label_3e00c4:
    // 0x3e00c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e00c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e00c8:
    // 0x3e00c8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e00c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e00cc:
    // 0x3e00cc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e00d0:
    // 0x3e00d0: 0x40f809  jalr        $v0
label_3e00d4:
    if (ctx->pc == 0x3E00D4u) {
        ctx->pc = 0x3E00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E00D0u;
        // 0x3e00d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E00D8u;
        goto label_3e00d8;
    }
    ctx->pc = 0x3E00D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E00D8u);
        ctx->pc = 0x3E00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E00D0u;
        // 0x3e00d4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E00D0u, 0x3E00D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E00D8u;
label_3e00d8:
    // 0x3e00d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e00d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e00dc:
    // 0x3e00dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e00dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e00e0:
    // 0x3e00e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e00e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e00e4:
    // 0x3e00e4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e00e8:
    // 0x3e00e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e00ec:
    // 0x3e00ec: 0x0  nop
    ctx->pc = 0x3e00ecu;
    // NOP
label_3e00f0:
    // 0x3e00f0: 0x0  nop
    ctx->pc = 0x3e00f0u;
    // NOP
label_3e00f4:
    // 0x3e00f4: 0x0  nop
    ctx->pc = 0x3e00f4u;
    // NOP
label_3e00f8:
    // 0x3e00f8: 0x0  nop
    ctx->pc = 0x3e00f8u;
    // NOP
label_3e00fc:
    // 0x3e00fc: 0x0  nop
    ctx->pc = 0x3e00fcu;
    // NOP
label_3e0100:
    // 0x3e0100: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e0104:
    if (ctx->pc == 0x3E0104u) {
        ctx->pc = 0x3E0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0100u;
        // 0x3e0104: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0108u;
        goto label_3e0108;
    }
    ctx->pc = 0x3E0100u;
    {
        const bool branch_taken_0x3e0100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0100u;
        // 0x3e0104: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0100) {
            ctx->pc = 0x3E00F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e00f0;
        }
    }
    ctx->pc = 0x3E0108u;
label_3e0108:
    // 0x3e0108: 0xc138ddc  jal         func_4E3770
label_3e010c:
    if (ctx->pc == 0x3E010Cu) {
        ctx->pc = 0x3E0110u;
        goto label_3e0110;
    }
    ctx->pc = 0x3E0108u;
    SET_GPR_U32(ctx, 31, 0x3E0110u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E0108u, 0x3E0110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0110u;
label_3e0110:
    // 0x3e0110: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e0110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e0114:
    // 0x3e0114: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x3e0114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_3e0118:
    // 0x3e0118: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3e011c:
    if (ctx->pc == 0x3E011Cu) {
        ctx->pc = 0x3E011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0118u;
        // 0x3e011c: 0xc64000bc  lwc1        $f0, 0xBC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0120u;
        goto label_3e0120;
    }
    ctx->pc = 0x3E0118u;
    {
        const bool branch_taken_0x3e0118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0118) {
            ctx->pc = 0x3E011Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0118u;
            // 0x3e011c: 0xc64000bc  lwc1        $f0, 0xBC($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0134u;
            goto label_3e0134;
        }
    }
    ctx->pc = 0x3E0120u;
label_3e0120:
    // 0x3e0120: 0x3c031010  lui         $v1, 0x1010
    ctx->pc = 0x3e0120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4112 << 16));
label_3e0124:
    // 0x3e0124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e0124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e0128:
    // 0x3e0128: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3e0128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_3e012c:
    // 0x3e012c: 0x10000054  b           . + 4 + (0x54 << 2)
label_3e0130:
    if (ctx->pc == 0x3E0130u) {
        ctx->pc = 0x3E0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E012Cu;
        // 0x3e0130: 0xae4300b4  sw          $v1, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0134u;
        goto label_3e0134;
    }
    ctx->pc = 0x3E012Cu;
    {
        const bool branch_taken_0x3e012c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E012Cu;
        // 0x3e0130: 0xae4300b4  sw          $v1, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e012c) {
            ctx->pc = 0x3E0280u;
            goto label_3e0280;
        }
    }
    ctx->pc = 0x3E0134u;
label_3e0134:
    // 0x3e0134: 0x27b10430  addiu       $s1, $sp, 0x430
    ctx->pc = 0x3e0134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3e0138:
    // 0x3e0138: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e0138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e013c:
    // 0x3e013c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e013cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e0140:
    // 0x3e0140: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3e0140u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3e0144:
    // 0x3e0144: 0xe7a00438  swc1        $f0, 0x438($sp)
    ctx->pc = 0x3e0144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_3e0148:
    // 0x3e0148: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3e0148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3e014c:
    // 0x3e014c: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x3e014cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_3e0150:
    // 0x3e0150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e0150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0154:
    // 0x3e0154: 0xafa00434  sw          $zero, 0x434($sp)
    ctx->pc = 0x3e0154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 0));
label_3e0158:
    // 0x3e0158: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x3e0158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3e015c:
    // 0x3e015c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3e015cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3e0160:
    // 0x3e0160: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e0160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e0164:
    // 0x3e0164: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e0164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e0168:
    // 0x3e0168: 0x7ba30430  lq          $v1, 0x430($sp)
    ctx->pc = 0x3e0168u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e016c:
    // 0x3e016c: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x3e016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3e0170:
    // 0x3e0170: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x3e0170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_3e0174:
    // 0x3e0174: 0x2442ffe2  addiu       $v0, $v0, -0x1E
    ctx->pc = 0x3e0174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
label_3e0178:
    // 0x3e0178: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3e0178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_3e017c:
    // 0x3e017c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3e017cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3e0180:
    // 0x3e0180: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e0180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e0184:
    // 0x3e0184: 0xc0cd518  jal         func_335460
label_3e0188:
    if (ctx->pc == 0x3E0188u) {
        ctx->pc = 0x3E0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0184u;
        // 0x3e0188: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E018Cu;
        goto label_3e018c;
    }
    ctx->pc = 0x3E0184u;
    SET_GPR_U32(ctx, 31, 0x3E018Cu);
    ctx->pc = 0x3E0188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0184u;
    // 0x3e0188: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E0184u, 0x3E018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E018Cu;
label_3e018c:
    // 0x3e018c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3e018cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3e0190:
    // 0x3e0190: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3e0190u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3e0194:
    // 0x3e0194: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x3e0194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3e0198:
    // 0x3e0198: 0xc136b24  jal         func_4DAC90
label_3e019c:
    if (ctx->pc == 0x3E019Cu) {
        ctx->pc = 0x3E019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0198u;
        // 0x3e019c: 0x24a53130  addiu       $a1, $a1, 0x3130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01A0u;
        goto label_3e01a0;
    }
    ctx->pc = 0x3E0198u;
    SET_GPR_U32(ctx, 31, 0x3E01A0u);
    ctx->pc = 0x3E019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0198u;
    // 0x3e019c: 0x24a53130  addiu       $a1, $a1, 0x3130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E0198u, 0x3E01A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E01A0u;
label_3e01a0:
    // 0x3e01a0: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3e01a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e01a4:
    // 0x3e01a4: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x3e01a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3e01a8:
    // 0x3e01a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e01a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e01ac:
    // 0x3e01ac: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3e01acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3e01b0:
    // 0x3e01b0: 0xc136b18  jal         func_4DAC60
label_3e01b4:
    if (ctx->pc == 0x3E01B4u) {
        ctx->pc = 0x3E01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01B0u;
        // 0x3e01b4: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01B8u;
        goto label_3e01b8;
    }
    ctx->pc = 0x3E01B0u;
    SET_GPR_U32(ctx, 31, 0x3E01B8u);
    ctx->pc = 0x3E01B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E01B0u;
    // 0x3e01b4: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E01B0u, 0x3E01B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E01B8u;
label_3e01b8:
    // 0x3e01b8: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3e01b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e01bc:
    // 0x3e01bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e01bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e01c0:
    // 0x3e01c0: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3e01c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3e01c4:
    // 0x3e01c4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3e01c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3e01c8:
    // 0x3e01c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e01c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e01cc:
    // 0x3e01cc: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x3e01ccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
label_3e01d0:
    // 0x3e01d0: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3e01d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_3e01d4:
    // 0x3e01d4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3e01d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3e01d8:
    // 0x3e01d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e01d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e01dc:
    // 0x3e01dc: 0xc0cd518  jal         func_335460
label_3e01e0:
    if (ctx->pc == 0x3E01E0u) {
        ctx->pc = 0x3E01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01DCu;
        // 0x3e01e0: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E01E4u;
        goto label_3e01e4;
    }
    ctx->pc = 0x3E01DCu;
    SET_GPR_U32(ctx, 31, 0x3E01E4u);
    ctx->pc = 0x3E01E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E01DCu;
    // 0x3e01e0: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E01DCu, 0x3E01E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E01E4u;
label_3e01e4:
    // 0x3e01e4: 0xc64100bc  lwc1        $f1, 0xBC($s2)
    ctx->pc = 0x3e01e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e01e8:
    // 0x3e01e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3e01e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3e01ec:
    // 0x3e01ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3e01ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3e01f0:
    // 0x3e01f0: 0xe64100c0  swc1        $f1, 0xC0($s2)
    ctx->pc = 0x3e01f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3e01f4:
    // 0x3e01f4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e01f8:
    // 0x3e01f8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3e01fc:
    if (ctx->pc == 0x3E01FCu) {
        ctx->pc = 0x3E01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E01F8u;
        // 0x3e01fc: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0200u;
        goto label_3e0200;
    }
    ctx->pc = 0x3E01F8u;
    {
        const bool branch_taken_0x3e01f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e01f8) {
            ctx->pc = 0x3E01FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E01F8u;
            // 0x3e01fc: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0234u;
            goto label_3e0234;
        }
    }
    ctx->pc = 0x3E0200u;
label_3e0200:
    // 0x3e0200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e0200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e0204:
    // 0x3e0204: 0xc0e858c  jal         func_3A1630
label_3e0208:
    if (ctx->pc == 0x3E0208u) {
        ctx->pc = 0x3E0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0204u;
        // 0x3e0208: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E020Cu;
        goto label_3e020c;
    }
    ctx->pc = 0x3E0204u;
    SET_GPR_U32(ctx, 31, 0x3E020Cu);
    ctx->pc = 0x3E0208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0204u;
    // 0x3e0208: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E0204u, 0x3E020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E020Cu;
label_3e020c:
    // 0x3e020c: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x3e020cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_3e0210:
    // 0x3e0210: 0x3c022020  lui         $v0, 0x2020
    ctx->pc = 0x3e0210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8224 << 16));
label_3e0214:
    // 0x3e0214: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e0214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e0218:
    // 0x3e0218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e0218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e021c:
    // 0x3e021c: 0x34422090  ori         $v0, $v0, 0x2090
    ctx->pc = 0x3e021cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8336);
label_3e0220:
    // 0x3e0220: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x3e0220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0224:
    // 0x3e0224: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3e0224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3e0228:
    // 0x3e0228: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e0228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3e022c:
    // 0x3e022c: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3e022cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3e0230:
    // 0x3e0230: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e0230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e0234:
    // 0x3e0234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e0234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e0238:
    // 0x3e0238: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_3e023c:
    if (ctx->pc == 0x3E023Cu) {
        ctx->pc = 0x3E023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0238u;
        // 0x3e023c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0240u;
        goto label_3e0240;
    }
    ctx->pc = 0x3E0238u;
    {
        const bool branch_taken_0x3e0238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e0238) {
            ctx->pc = 0x3E023Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0238u;
            // 0x3e023c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0258u;
            goto label_3e0258;
        }
    }
    ctx->pc = 0x3E0240u;
label_3e0240:
    // 0x3e0240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e0240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e0244:
    // 0x3e0244: 0xc0e858c  jal         func_3A1630
label_3e0248:
    if (ctx->pc == 0x3E0248u) {
        ctx->pc = 0x3E0248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0244u;
        // 0x3e0248: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E024Cu;
        goto label_3e024c;
    }
    ctx->pc = 0x3E0244u;
    SET_GPR_U32(ctx, 31, 0x3E024Cu);
    ctx->pc = 0x3E0248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0244u;
    // 0x3e0248: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E0244u, 0x3E024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E024Cu;
label_3e024c:
    // 0x3e024c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x3e024cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0250:
    // 0x3e0250: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3e0250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3e0254:
    // 0x3e0254: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e0254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e0258:
    // 0x3e0258: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e0258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e025c:
    // 0x3e025c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3e0260:
    if (ctx->pc == 0x3E0260u) {
        ctx->pc = 0x3E0260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E025Cu;
        // 0x3e0260: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0264u;
        goto label_3e0264;
    }
    ctx->pc = 0x3E025Cu;
    {
        const bool branch_taken_0x3e025c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e025c) {
            ctx->pc = 0x3E0260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E025Cu;
            // 0x3e0260: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0274u;
            goto label_3e0274;
        }
    }
    ctx->pc = 0x3E0264u;
label_3e0264:
    // 0x3e0264: 0x3c021010  lui         $v0, 0x1010
    ctx->pc = 0x3e0264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4112 << 16));
label_3e0268:
    // 0x3e0268: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3e0268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_3e026c:
    // 0x3e026c: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3e026cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3e0270:
    // 0x3e0270: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e0270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e0274:
    // 0x3e0274: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e0274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e0278:
    // 0x3e0278: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e0278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e027c:
    // 0x3e027c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3e027cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3e0280:
    // 0x3e0280: 0x7bb00490  lq          $s0, 0x490($sp)
    ctx->pc = 0x3e0280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3e0284:
    // 0x3e0284: 0x7bb10480  lq          $s1, 0x480($sp)
    ctx->pc = 0x3e0284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3e0288:
    // 0x3e0288: 0x7bb20470  lq          $s2, 0x470($sp)
    ctx->pc = 0x3e0288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3e028c:
    // 0x3e028c: 0x7bb30460  lq          $s3, 0x460($sp)
    ctx->pc = 0x3e028cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e0290:
    // 0x3e0290: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x3e0290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
label_3e0294:
    // 0x3e0294: 0x3e00008  jr          $ra
label_3e0298:
    if (ctx->pc == 0x3E0298u) {
        ctx->pc = 0x3E0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0294u;
        // 0x3e0298: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E029Cu;
        goto label_3e029c;
    }
    ctx->pc = 0x3E0294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0294u;
        // 0x3e0298: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E029Cu;
label_3e029c:
    // 0x3e029c: 0x0  nop
    ctx->pc = 0x3e029cu;
    // NOP
label_3e02a0:
    // 0x3e02a0: 0x27bd04e0  addiu       $sp, $sp, 0x4E0
    ctx->pc = 0x3e02a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
label_3e02a4:
    // 0x3e02a4: 0x0  nop
    ctx->pc = 0x3e02a4u;
    // NOP
    ctx->pc = 0x3e02a8u;
}
