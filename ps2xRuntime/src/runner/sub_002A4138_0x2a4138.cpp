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

// Function: sub_002A4138
// Address: 0x2a4138 - 0x2a4230
void sub_002A4138_0x2a4138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4138_0x2a4138");
#endif

    switch (ctx->pc) {
        case 0x2a4138u: goto label_2a4138;
        case 0x2a413cu: goto label_2a413c;
        case 0x2a4140u: goto label_2a4140;
        case 0x2a4144u: goto label_2a4144;
        case 0x2a4148u: goto label_2a4148;
        case 0x2a414cu: goto label_2a414c;
        case 0x2a4150u: goto label_2a4150;
        case 0x2a4154u: goto label_2a4154;
        case 0x2a4158u: goto label_2a4158;
        case 0x2a415cu: goto label_2a415c;
        case 0x2a4160u: goto label_2a4160;
        case 0x2a4164u: goto label_2a4164;
        case 0x2a4168u: goto label_2a4168;
        case 0x2a416cu: goto label_2a416c;
        case 0x2a4170u: goto label_2a4170;
        case 0x2a4174u: goto label_2a4174;
        case 0x2a4178u: goto label_2a4178;
        case 0x2a417cu: goto label_2a417c;
        case 0x2a4180u: goto label_2a4180;
        case 0x2a4184u: goto label_2a4184;
        case 0x2a4188u: goto label_2a4188;
        case 0x2a418cu: goto label_2a418c;
        case 0x2a4190u: goto label_2a4190;
        case 0x2a4194u: goto label_2a4194;
        case 0x2a4198u: goto label_2a4198;
        case 0x2a419cu: goto label_2a419c;
        case 0x2a41a0u: goto label_2a41a0;
        case 0x2a41a4u: goto label_2a41a4;
        case 0x2a41a8u: goto label_2a41a8;
        case 0x2a41acu: goto label_2a41ac;
        case 0x2a41b0u: goto label_2a41b0;
        case 0x2a41b4u: goto label_2a41b4;
        case 0x2a41b8u: goto label_2a41b8;
        case 0x2a41bcu: goto label_2a41bc;
        case 0x2a41c0u: goto label_2a41c0;
        case 0x2a41c4u: goto label_2a41c4;
        case 0x2a41c8u: goto label_2a41c8;
        case 0x2a41ccu: goto label_2a41cc;
        case 0x2a41d0u: goto label_2a41d0;
        case 0x2a41d4u: goto label_2a41d4;
        case 0x2a41d8u: goto label_2a41d8;
        case 0x2a41dcu: goto label_2a41dc;
        case 0x2a41e0u: goto label_2a41e0;
        case 0x2a41e4u: goto label_2a41e4;
        case 0x2a41e8u: goto label_2a41e8;
        case 0x2a41ecu: goto label_2a41ec;
        case 0x2a41f0u: goto label_2a41f0;
        case 0x2a41f4u: goto label_2a41f4;
        case 0x2a41f8u: goto label_2a41f8;
        case 0x2a41fcu: goto label_2a41fc;
        case 0x2a4200u: goto label_2a4200;
        case 0x2a4204u: goto label_2a4204;
        case 0x2a4208u: goto label_2a4208;
        case 0x2a420cu: goto label_2a420c;
        case 0x2a4210u: goto label_2a4210;
        case 0x2a4214u: goto label_2a4214;
        case 0x2a4218u: goto label_2a4218;
        case 0x2a421cu: goto label_2a421c;
        case 0x2a4220u: goto label_2a4220;
        case 0x2a4224u: goto label_2a4224;
        case 0x2a4228u: goto label_2a4228;
        case 0x2a422cu: goto label_2a422c;
        default: break;
    }

    ctx->pc = 0x2a4138u;

label_2a4138:
    // 0x2a4138: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a4138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2a413c:
    // 0x2a413c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2a413cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2a4140:
    // 0x2a4140: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2a4140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2a4144:
    // 0x2a4144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a4144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a4148:
    // 0x2a4148: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a4148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2a414c:
    // 0x2a414c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2a414cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2a4150:
    // 0x2a4150: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a4150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a4154:
    // 0x2a4154: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a4154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a4158:
    // 0x2a4158: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2a4158u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a415c:
    // 0x2a415c: 0xc08bfbc  jal         func_22FEF0
label_2a4160:
    if (ctx->pc == 0x2A4160u) {
        ctx->pc = 0x2A4160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A415Cu;
        // 0x2a4160: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4164u;
        goto label_2a4164;
    }
    ctx->pc = 0x2A415Cu;
    SET_GPR_U32(ctx, 31, 0x2A4164u);
    ctx->pc = 0x2A4160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A415Cu;
    // 0x2a4160: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2A415Cu, 0x2A4164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4164u;
label_2a4164:
    // 0x2a4164: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a4164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a4168:
    // 0x2a4168: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a4168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a416c:
    // 0x2a416c: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x2a416cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a4170:
    // 0x2a4170: 0x3c06fffb  lui         $a2, 0xFFFB
    ctx->pc = 0x2a4170u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65531 << 16));
label_2a4174:
    // 0x2a4174: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2a4174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2a4178:
    // 0x2a4178: 0xaca40128  sw          $a0, 0x128($a1)
    ctx->pc = 0x2a4178u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 4));
label_2a417c:
    // 0x2a417c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2a417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a4180:
    // 0x2a4180: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a4180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a4184:
    // 0x2a4184: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2a4184u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
label_2a4188:
    // 0x2a4188: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2a4188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2a418c:
    // 0x2a418c: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2a418cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_2a4190:
    // 0x2a4190: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2a4190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2a4194:
    // 0x2a4194: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_2a4198:
    if (ctx->pc == 0x2A4198u) {
        ctx->pc = 0x2A4198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4194u;
        // 0x2a4198: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A419Cu;
        goto label_2a419c;
    }
    ctx->pc = 0x2A4194u;
    {
        const bool branch_taken_0x2a4194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4194u;
        // 0x2a4198: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4194) {
            ctx->pc = 0x2A4214u;
            goto label_2a4214;
        }
    }
    ctx->pc = 0x2A419Cu;
label_2a419c:
    // 0x2a419c: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x2a419cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_2a41a0:
    // 0x2a41a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a41a4:
    // 0x2a41a4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2a41a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2a41a8:
    // 0x2a41a8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2a41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2a41ac:
    // 0x2a41ac: 0x40f809  jalr        $v0
label_2a41b0:
    if (ctx->pc == 0x2A41B0u) {
        ctx->pc = 0x2A41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41ACu;
        // 0x2a41b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A41B4u;
        goto label_2a41b4;
    }
    ctx->pc = 0x2A41ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A41B4u);
        ctx->pc = 0x2A41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41ACu;
        // 0x2a41b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A41ACu, 0x2A41B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A41B4u;
label_2a41b4:
    // 0x2a41b4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2a41b8:
    if (ctx->pc == 0x2A41B8u) {
        ctx->pc = 0x2A41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41B4u;
        // 0x2a41b8: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A41BCu;
        goto label_2a41bc;
    }
    ctx->pc = 0x2A41B4u;
    {
        const bool branch_taken_0x2a41b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41B4u;
        // 0x2a41b8: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a41b4) {
            ctx->pc = 0x2A4214u;
            goto label_2a4214;
        }
    }
    ctx->pc = 0x2A41BCu;
label_2a41bc:
    // 0x2a41bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a41bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a41c0:
    // 0x2a41c0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2a41c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a41c4:
    // 0x2a41c4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a41c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a41c8:
    // 0x2a41c8: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x2a41c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_2a41cc:
    // 0x2a41cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a41d0:
    // 0x2a41d0: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x2a41d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2a41d4:
    // 0x2a41d4: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2a41d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2a41d8:
    // 0x2a41d8: 0x40f809  jalr        $v0
label_2a41dc:
    if (ctx->pc == 0x2A41DCu) {
        ctx->pc = 0x2A41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41D8u;
        // 0x2a41dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A41E0u;
        goto label_2a41e0;
    }
    ctx->pc = 0x2A41D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A41E0u);
        ctx->pc = 0x2A41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41D8u;
        // 0x2a41dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A41D8u, 0x2A41E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A41E0u;
label_2a41e0:
    // 0x2a41e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2a41e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2a41e4:
    // 0x2a41e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a41e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a41e8:
    // 0x2a41e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2a41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2a41ec:
    // 0x2a41ec: 0x40f809  jalr        $v0
label_2a41f0:
    if (ctx->pc == 0x2A41F0u) {
        ctx->pc = 0x2A41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41ECu;
        // 0x2a41f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A41F4u;
        goto label_2a41f4;
    }
    ctx->pc = 0x2A41ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A41F4u);
        ctx->pc = 0x2A41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41ECu;
        // 0x2a41f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A41ECu, 0x2A41F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A41F4u;
label_2a41f4:
    // 0x2a41f4: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x2a41f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_2a41f8:
    // 0x2a41f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a41f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a41fc:
    // 0x2a41fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a41fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4200:
    // 0x2a4200: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a4200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2a4204:
    // 0x2a4204: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2a4204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2a4208:
    // 0x2a4208: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2a4208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2a420c:
    // 0x2a420c: 0x60f809  jalr        $v1
label_2a4210:
    if (ctx->pc == 0x2A4210u) {
        ctx->pc = 0x2A4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A420Cu;
        // 0x2a4210: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4214u;
        goto label_2a4214;
    }
    ctx->pc = 0x2A420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A4214u);
        ctx->pc = 0x2A4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A420Cu;
        // 0x2a4210: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A420Cu, 0x2A4214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A4214u;
label_2a4214:
    // 0x2a4214: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2a4214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a4218:
    // 0x2a4218: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2a4218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a421c:
    // 0x2a421c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a421cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a4220:
    // 0x2a4220: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2a4220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a4224:
    // 0x2a4224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a4224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a4228:
    // 0x2a4228: 0x3e00008  jr          $ra
label_2a422c:
    if (ctx->pc == 0x2A422Cu) {
        ctx->pc = 0x2A422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4228u;
        // 0x2a422c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4230u;
        goto label_fallthrough_0x2a4228;
    }
    ctx->pc = 0x2A4228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4228u;
        // 0x2a422c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a4228:
    ctx->pc = 0x2A4230u;
}
