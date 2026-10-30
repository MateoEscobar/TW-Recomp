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

// Function: sub_002EE198
// Address: 0x2ee198 - 0x2ee2b8
void sub_002EE198_0x2ee198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE198_0x2ee198");
#endif

    switch (ctx->pc) {
        case 0x2ee198u: goto label_2ee198;
        case 0x2ee19cu: goto label_2ee19c;
        case 0x2ee1a0u: goto label_2ee1a0;
        case 0x2ee1a4u: goto label_2ee1a4;
        case 0x2ee1a8u: goto label_2ee1a8;
        case 0x2ee1acu: goto label_2ee1ac;
        case 0x2ee1b0u: goto label_2ee1b0;
        case 0x2ee1b4u: goto label_2ee1b4;
        case 0x2ee1b8u: goto label_2ee1b8;
        case 0x2ee1bcu: goto label_2ee1bc;
        case 0x2ee1c0u: goto label_2ee1c0;
        case 0x2ee1c4u: goto label_2ee1c4;
        case 0x2ee1c8u: goto label_2ee1c8;
        case 0x2ee1ccu: goto label_2ee1cc;
        case 0x2ee1d0u: goto label_2ee1d0;
        case 0x2ee1d4u: goto label_2ee1d4;
        case 0x2ee1d8u: goto label_2ee1d8;
        case 0x2ee1dcu: goto label_2ee1dc;
        case 0x2ee1e0u: goto label_2ee1e0;
        case 0x2ee1e4u: goto label_2ee1e4;
        case 0x2ee1e8u: goto label_2ee1e8;
        case 0x2ee1ecu: goto label_2ee1ec;
        case 0x2ee1f0u: goto label_2ee1f0;
        case 0x2ee1f4u: goto label_2ee1f4;
        case 0x2ee1f8u: goto label_2ee1f8;
        case 0x2ee1fcu: goto label_2ee1fc;
        case 0x2ee200u: goto label_2ee200;
        case 0x2ee204u: goto label_2ee204;
        case 0x2ee208u: goto label_2ee208;
        case 0x2ee20cu: goto label_2ee20c;
        case 0x2ee210u: goto label_2ee210;
        case 0x2ee214u: goto label_2ee214;
        case 0x2ee218u: goto label_2ee218;
        case 0x2ee21cu: goto label_2ee21c;
        case 0x2ee220u: goto label_2ee220;
        case 0x2ee224u: goto label_2ee224;
        case 0x2ee228u: goto label_2ee228;
        case 0x2ee22cu: goto label_2ee22c;
        case 0x2ee230u: goto label_2ee230;
        case 0x2ee234u: goto label_2ee234;
        case 0x2ee238u: goto label_2ee238;
        case 0x2ee23cu: goto label_2ee23c;
        case 0x2ee240u: goto label_2ee240;
        case 0x2ee244u: goto label_2ee244;
        case 0x2ee248u: goto label_2ee248;
        case 0x2ee24cu: goto label_2ee24c;
        case 0x2ee250u: goto label_2ee250;
        case 0x2ee254u: goto label_2ee254;
        case 0x2ee258u: goto label_2ee258;
        case 0x2ee25cu: goto label_2ee25c;
        case 0x2ee260u: goto label_2ee260;
        case 0x2ee264u: goto label_2ee264;
        case 0x2ee268u: goto label_2ee268;
        case 0x2ee26cu: goto label_2ee26c;
        case 0x2ee270u: goto label_2ee270;
        case 0x2ee274u: goto label_2ee274;
        case 0x2ee278u: goto label_2ee278;
        case 0x2ee27cu: goto label_2ee27c;
        case 0x2ee280u: goto label_2ee280;
        case 0x2ee284u: goto label_2ee284;
        case 0x2ee288u: goto label_2ee288;
        case 0x2ee28cu: goto label_2ee28c;
        case 0x2ee290u: goto label_2ee290;
        case 0x2ee294u: goto label_2ee294;
        case 0x2ee298u: goto label_2ee298;
        case 0x2ee29cu: goto label_2ee29c;
        case 0x2ee2a0u: goto label_2ee2a0;
        case 0x2ee2a4u: goto label_2ee2a4;
        case 0x2ee2a8u: goto label_2ee2a8;
        case 0x2ee2acu: goto label_2ee2ac;
        case 0x2ee2b0u: goto label_2ee2b0;
        case 0x2ee2b4u: goto label_2ee2b4;
        default: break;
    }

    ctx->pc = 0x2ee198u;

label_2ee198:
    // 0x2ee198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ee198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ee19c:
    // 0x2ee19c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2ee19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2ee1a0:
    // 0x2ee1a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ee1a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2ee1a4:
    // 0x2ee1a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ee1a8:
    // 0x2ee1a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ee1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ee1ac:
    // 0x2ee1ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ee1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee1b0:
    // 0x2ee1b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ee1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ee1b4:
    // 0x2ee1b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ee1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ee1b8:
    // 0x2ee1b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ee1bc:
    // 0x2ee1bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ee1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ee1c0:
    // 0x2ee1c0: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2ee1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_2ee1c4:
    // 0x2ee1c4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ee1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ee1c8:
    // 0x2ee1c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ee1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ee1cc:
    // 0x2ee1cc: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2ee1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2ee1d0:
    // 0x2ee1d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ee1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ee1d4:
    // 0x2ee1d4: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2ee1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2ee1d8:
    // 0x2ee1d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ee1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ee1dc:
    // 0x2ee1dc: 0xa040011e  sb          $zero, 0x11E($v0)
    ctx->pc = 0x2ee1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 0));
label_2ee1e0:
    // 0x2ee1e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ee1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ee1e4:
    // 0x2ee1e4: 0xc0a22c6  jal         func_288B18
label_2ee1e8:
    if (ctx->pc == 0x2EE1E8u) {
        ctx->pc = 0x2EE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1E4u;
        // 0x2ee1e8: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE1ECu;
        goto label_2ee1ec;
    }
    ctx->pc = 0x2EE1E4u;
    SET_GPR_U32(ctx, 31, 0x2EE1ECu);
    ctx->pc = 0x2EE1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE1E4u;
    // 0x2ee1e8: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2EE1E4u, 0x2EE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE1ECu;
label_2ee1ec:
    // 0x2ee1ec: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2ee1ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2ee1f0:
    // 0x2ee1f0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2ee1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2ee1f4:
    // 0x2ee1f4: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2ee1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2ee1f8:
    // 0x2ee1f8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2ee1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2ee1fc:
    // 0x2ee1fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ee1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ee200:
    // 0x2ee200: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2ee200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2ee204:
    // 0x2ee204: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ee204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2ee208:
    // 0x2ee208: 0x3c070004  lui         $a3, 0x4
    ctx->pc = 0x2ee208u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
label_2ee20c:
    // 0x2ee20c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ee20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2ee210:
    // 0x2ee210: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ee210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ee214:
    // 0x2ee214: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2ee214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2ee218:
    // 0x2ee218: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2ee218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2ee21c:
    // 0x2ee21c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2ee21cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2ee220:
    // 0x2ee220: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ee220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ee224:
    // 0x2ee224: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ee224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2ee228:
    // 0x2ee228: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ee228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ee22c:
    // 0x2ee22c: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2ee22cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_2ee230:
    // 0x2ee230: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2ee230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2ee234:
    // 0x2ee234: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2ee234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2ee238:
    // 0x2ee238: 0x40f809  jalr        $v0
label_2ee23c:
    if (ctx->pc == 0x2EE23Cu) {
        ctx->pc = 0x2EE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE238u;
        // 0x2ee23c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE240u;
        goto label_2ee240;
    }
    ctx->pc = 0x2EE238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE240u);
        ctx->pc = 0x2EE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE238u;
        // 0x2ee23c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE238u, 0x2EE240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE240u;
label_2ee240:
    // 0x2ee240: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x2ee240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_2ee244:
    // 0x2ee244: 0x24020087  addiu       $v0, $zero, 0x87
    ctx->pc = 0x2ee244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_2ee248:
    // 0x2ee248: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2ee24c:
    if (ctx->pc == 0x2EE24Cu) {
        ctx->pc = 0x2EE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE248u;
        // 0x2ee24c: 0x386200b2  xori        $v0, $v1, 0xB2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)178);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE250u;
        goto label_2ee250;
    }
    ctx->pc = 0x2EE248u;
    {
        const bool branch_taken_0x2ee248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE248u;
        // 0x2ee24c: 0x386200b2  xori        $v0, $v1, 0xB2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)178);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee248) {
            ctx->pc = 0x2EE288u;
            goto label_2ee288;
        }
    }
    ctx->pc = 0x2EE250u;
label_2ee250:
    // 0x2ee250: 0x24020088  addiu       $v0, $zero, 0x88
    ctx->pc = 0x2ee250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_2ee254:
    // 0x2ee254: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ee254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee258:
    // 0x2ee258: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x2ee258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
label_2ee25c:
    // 0x2ee25c: 0x9223004b  lbu         $v1, 0x4B($s1)
    ctx->pc = 0x2ee25cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
label_2ee260:
    // 0x2ee260: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_2ee264:
    if (ctx->pc == 0x2EE264u) {
        ctx->pc = 0x2EE264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE260u;
        // 0x2ee264: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE268u;
        goto label_2ee268;
    }
    ctx->pc = 0x2EE260u;
    {
        const bool branch_taken_0x2ee260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EE264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE260u;
        // 0x2ee264: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee260) {
            ctx->pc = 0x2EE278u;
            goto label_2ee278;
        }
    }
    ctx->pc = 0x2EE268u;
label_2ee268:
    // 0x2ee268: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ee268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ee26c:
    // 0x2ee26c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ee26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ee270:
    // 0x2ee270: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2ee270u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_2ee274:
    // 0x2ee274: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2ee274u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2ee278:
    // 0x2ee278: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2ee278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2ee27c:
    // 0x2ee27c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ee27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ee280:
    // 0x2ee280: 0x10000007  b           . + 4 + (0x7 << 2)
label_2ee284:
    if (ctx->pc == 0x2EE284u) {
        ctx->pc = 0x2EE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE280u;
        // 0x2ee284: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE288u;
        goto label_2ee288;
    }
    ctx->pc = 0x2EE280u;
    {
        const bool branch_taken_0x2ee280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE280u;
        // 0x2ee284: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee280) {
            ctx->pc = 0x2EE2A0u;
            goto label_2ee2a0;
        }
    }
    ctx->pc = 0x2EE288u;
label_2ee288:
    // 0x2ee288: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ee28c:
    if (ctx->pc == 0x2EE28Cu) {
        ctx->pc = 0x2EE28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE288u;
        // 0x2ee28c: 0x3c060056  lui         $a2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE290u;
        goto label_2ee290;
    }
    ctx->pc = 0x2EE288u;
    {
        const bool branch_taken_0x2ee288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE288u;
        // 0x2ee28c: 0x3c060056  lui         $a2, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee288) {
            ctx->pc = 0x2EE2A0u;
            goto label_2ee2a0;
        }
    }
    ctx->pc = 0x2EE290u;
label_2ee290:
    // 0x2ee290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ee294:
    // 0x2ee294: 0x24c67aa0  addiu       $a2, $a2, 0x7AA0
    ctx->pc = 0x2ee294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31392));
label_2ee298:
    // 0x2ee298: 0xc0886a8  jal         func_221AA0
label_2ee29c:
    if (ctx->pc == 0x2EE29Cu) {
        ctx->pc = 0x2EE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE298u;
        // 0x2ee29c: 0x24050225  addiu       $a1, $zero, 0x225 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE2A0u;
        goto label_2ee2a0;
    }
    ctx->pc = 0x2EE298u;
    SET_GPR_U32(ctx, 31, 0x2EE2A0u);
    ctx->pc = 0x2EE29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE298u;
    // 0x2ee29c: 0x24050225  addiu       $a1, $zero, 0x225 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 549));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2EE298u, 0x2EE2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE2A0u;
label_2ee2a0:
    // 0x2ee2a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ee2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ee2a4:
    // 0x2ee2a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ee2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ee2a8:
    // 0x2ee2a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee2ac:
    // 0x2ee2ac: 0x3e00008  jr          $ra
label_2ee2b0:
    if (ctx->pc == 0x2EE2B0u) {
        ctx->pc = 0x2EE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2ACu;
        // 0x2ee2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE2B4u;
        goto label_2ee2b4;
    }
    ctx->pc = 0x2EE2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE2ACu;
        // 0x2ee2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE2B4u;
label_2ee2b4:
    // 0x2ee2b4: 0x0  nop
    ctx->pc = 0x2ee2b4u;
    // NOP
    ctx->pc = 0x2ee2b8u;
}
