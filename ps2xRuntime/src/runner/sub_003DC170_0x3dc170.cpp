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

// Function: sub_003DC170
// Address: 0x3dc170 - 0x3dc370
void sub_003DC170_0x3dc170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC170_0x3dc170");
#endif

    switch (ctx->pc) {
        case 0x3dc170u: goto label_3dc170;
        case 0x3dc174u: goto label_3dc174;
        case 0x3dc178u: goto label_3dc178;
        case 0x3dc17cu: goto label_3dc17c;
        case 0x3dc180u: goto label_3dc180;
        case 0x3dc184u: goto label_3dc184;
        case 0x3dc188u: goto label_3dc188;
        case 0x3dc18cu: goto label_3dc18c;
        case 0x3dc190u: goto label_3dc190;
        case 0x3dc194u: goto label_3dc194;
        case 0x3dc198u: goto label_3dc198;
        case 0x3dc19cu: goto label_3dc19c;
        case 0x3dc1a0u: goto label_3dc1a0;
        case 0x3dc1a4u: goto label_3dc1a4;
        case 0x3dc1a8u: goto label_3dc1a8;
        case 0x3dc1acu: goto label_3dc1ac;
        case 0x3dc1b0u: goto label_3dc1b0;
        case 0x3dc1b4u: goto label_3dc1b4;
        case 0x3dc1b8u: goto label_3dc1b8;
        case 0x3dc1bcu: goto label_3dc1bc;
        case 0x3dc1c0u: goto label_3dc1c0;
        case 0x3dc1c4u: goto label_3dc1c4;
        case 0x3dc1c8u: goto label_3dc1c8;
        case 0x3dc1ccu: goto label_3dc1cc;
        case 0x3dc1d0u: goto label_3dc1d0;
        case 0x3dc1d4u: goto label_3dc1d4;
        case 0x3dc1d8u: goto label_3dc1d8;
        case 0x3dc1dcu: goto label_3dc1dc;
        case 0x3dc1e0u: goto label_3dc1e0;
        case 0x3dc1e4u: goto label_3dc1e4;
        case 0x3dc1e8u: goto label_3dc1e8;
        case 0x3dc1ecu: goto label_3dc1ec;
        case 0x3dc1f0u: goto label_3dc1f0;
        case 0x3dc1f4u: goto label_3dc1f4;
        case 0x3dc1f8u: goto label_3dc1f8;
        case 0x3dc1fcu: goto label_3dc1fc;
        case 0x3dc200u: goto label_3dc200;
        case 0x3dc204u: goto label_3dc204;
        case 0x3dc208u: goto label_3dc208;
        case 0x3dc20cu: goto label_3dc20c;
        case 0x3dc210u: goto label_3dc210;
        case 0x3dc214u: goto label_3dc214;
        case 0x3dc218u: goto label_3dc218;
        case 0x3dc21cu: goto label_3dc21c;
        case 0x3dc220u: goto label_3dc220;
        case 0x3dc224u: goto label_3dc224;
        case 0x3dc228u: goto label_3dc228;
        case 0x3dc22cu: goto label_3dc22c;
        case 0x3dc230u: goto label_3dc230;
        case 0x3dc234u: goto label_3dc234;
        case 0x3dc238u: goto label_3dc238;
        case 0x3dc23cu: goto label_3dc23c;
        case 0x3dc240u: goto label_3dc240;
        case 0x3dc244u: goto label_3dc244;
        case 0x3dc248u: goto label_3dc248;
        case 0x3dc24cu: goto label_3dc24c;
        case 0x3dc250u: goto label_3dc250;
        case 0x3dc254u: goto label_3dc254;
        case 0x3dc258u: goto label_3dc258;
        case 0x3dc25cu: goto label_3dc25c;
        case 0x3dc260u: goto label_3dc260;
        case 0x3dc264u: goto label_3dc264;
        case 0x3dc268u: goto label_3dc268;
        case 0x3dc26cu: goto label_3dc26c;
        case 0x3dc270u: goto label_3dc270;
        case 0x3dc274u: goto label_3dc274;
        case 0x3dc278u: goto label_3dc278;
        case 0x3dc27cu: goto label_3dc27c;
        case 0x3dc280u: goto label_3dc280;
        case 0x3dc284u: goto label_3dc284;
        case 0x3dc288u: goto label_3dc288;
        case 0x3dc28cu: goto label_3dc28c;
        case 0x3dc290u: goto label_3dc290;
        case 0x3dc294u: goto label_3dc294;
        case 0x3dc298u: goto label_3dc298;
        case 0x3dc29cu: goto label_3dc29c;
        case 0x3dc2a0u: goto label_3dc2a0;
        case 0x3dc2a4u: goto label_3dc2a4;
        case 0x3dc2a8u: goto label_3dc2a8;
        case 0x3dc2acu: goto label_3dc2ac;
        case 0x3dc2b0u: goto label_3dc2b0;
        case 0x3dc2b4u: goto label_3dc2b4;
        case 0x3dc2b8u: goto label_3dc2b8;
        case 0x3dc2bcu: goto label_3dc2bc;
        case 0x3dc2c0u: goto label_3dc2c0;
        case 0x3dc2c4u: goto label_3dc2c4;
        case 0x3dc2c8u: goto label_3dc2c8;
        case 0x3dc2ccu: goto label_3dc2cc;
        case 0x3dc2d0u: goto label_3dc2d0;
        case 0x3dc2d4u: goto label_3dc2d4;
        case 0x3dc2d8u: goto label_3dc2d8;
        case 0x3dc2dcu: goto label_3dc2dc;
        case 0x3dc2e0u: goto label_3dc2e0;
        case 0x3dc2e4u: goto label_3dc2e4;
        case 0x3dc2e8u: goto label_3dc2e8;
        case 0x3dc2ecu: goto label_3dc2ec;
        case 0x3dc2f0u: goto label_3dc2f0;
        case 0x3dc2f4u: goto label_3dc2f4;
        case 0x3dc2f8u: goto label_3dc2f8;
        case 0x3dc2fcu: goto label_3dc2fc;
        case 0x3dc300u: goto label_3dc300;
        case 0x3dc304u: goto label_3dc304;
        case 0x3dc308u: goto label_3dc308;
        case 0x3dc30cu: goto label_3dc30c;
        case 0x3dc310u: goto label_3dc310;
        case 0x3dc314u: goto label_3dc314;
        case 0x3dc318u: goto label_3dc318;
        case 0x3dc31cu: goto label_3dc31c;
        case 0x3dc320u: goto label_3dc320;
        case 0x3dc324u: goto label_3dc324;
        case 0x3dc328u: goto label_3dc328;
        case 0x3dc32cu: goto label_3dc32c;
        case 0x3dc330u: goto label_3dc330;
        case 0x3dc334u: goto label_3dc334;
        case 0x3dc338u: goto label_3dc338;
        case 0x3dc33cu: goto label_3dc33c;
        case 0x3dc340u: goto label_3dc340;
        case 0x3dc344u: goto label_3dc344;
        case 0x3dc348u: goto label_3dc348;
        case 0x3dc34cu: goto label_3dc34c;
        case 0x3dc350u: goto label_3dc350;
        case 0x3dc354u: goto label_3dc354;
        case 0x3dc358u: goto label_3dc358;
        case 0x3dc35cu: goto label_3dc35c;
        case 0x3dc360u: goto label_3dc360;
        case 0x3dc364u: goto label_3dc364;
        case 0x3dc368u: goto label_3dc368;
        case 0x3dc36cu: goto label_3dc36c;
        default: break;
    }

    ctx->pc = 0x3dc170u;

label_3dc170:
    // 0x3dc170: 0x27bdf730  addiu       $sp, $sp, -0x8D0
    ctx->pc = 0x3dc170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965040));
label_3dc174:
    // 0x3dc174: 0x7fb20890  sq          $s2, 0x890($sp)
    ctx->pc = 0x3dc174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 18));
label_3dc178:
    // 0x3dc178: 0x7fb30880  sq          $s3, 0x880($sp)
    ctx->pc = 0x3dc178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 19));
label_3dc17c:
    // 0x3dc17c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3dc17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dc180:
    // 0x3dc180: 0x7fb008b0  sq          $s0, 0x8B0($sp)
    ctx->pc = 0x3dc180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 16));
label_3dc184:
    // 0x3dc184: 0x7fb108a0  sq          $s1, 0x8A0($sp)
    ctx->pc = 0x3dc184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 17));
label_3dc188:
    // 0x3dc188: 0x7fb40870  sq          $s4, 0x870($sp)
    ctx->pc = 0x3dc188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 20));
label_3dc18c:
    // 0x3dc18c: 0xffbf0860  sd          $ra, 0x860($sp)
    ctx->pc = 0x3dc18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2144), GPR_U64(ctx, 31));
label_3dc190:
    // 0x3dc190: 0xe7b408c0  swc1        $f20, 0x8C0($sp)
    ctx->pc = 0x3dc190u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2240), bits); }
label_3dc194:
    // 0x3dc194: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3dc194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3dc198:
    // 0x3dc198: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dc198u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dc19c:
    // 0x3dc19c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dc19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dc1a0:
    // 0x3dc1a0: 0x40f809  jalr        $v0
label_3dc1a4:
    if (ctx->pc == 0x3DC1A4u) {
        ctx->pc = 0x3DC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1A0u;
        // 0x3dc1a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC1A8u;
        goto label_3dc1a8;
    }
    ctx->pc = 0x3DC1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DC1A8u);
        ctx->pc = 0x3DC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1A0u;
        // 0x3dc1a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC1A0u, 0x3DC1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DC1A8u;
label_3dc1a8:
    // 0x3dc1a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3dc1a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc1ac:
    // 0x3dc1ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3dc1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3dc1b0:
    // 0x3dc1b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3dc1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3dc1b4:
    // 0x3dc1b4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3dc1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3dc1b8:
    // 0x3dc1b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3dc1bc:
    // 0x3dc1bc: 0x0  nop
    ctx->pc = 0x3dc1bcu;
    // NOP
label_3dc1c0:
    // 0x3dc1c0: 0x0  nop
    ctx->pc = 0x3dc1c0u;
    // NOP
label_3dc1c4:
    // 0x3dc1c4: 0x0  nop
    ctx->pc = 0x3dc1c4u;
    // NOP
label_3dc1c8:
    // 0x3dc1c8: 0x0  nop
    ctx->pc = 0x3dc1c8u;
    // NOP
label_3dc1cc:
    // 0x3dc1cc: 0x0  nop
    ctx->pc = 0x3dc1ccu;
    // NOP
label_3dc1d0:
    // 0x3dc1d0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3dc1d4:
    if (ctx->pc == 0x3DC1D4u) {
        ctx->pc = 0x3DC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1D0u;
        // 0x3dc1d4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC1D8u;
        goto label_3dc1d8;
    }
    ctx->pc = 0x3DC1D0u;
    {
        const bool branch_taken_0x3dc1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1D0u;
        // 0x3dc1d4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc1d0) {
            ctx->pc = 0x3DC1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc1c0;
        }
    }
    ctx->pc = 0x3DC1D8u;
label_3dc1d8:
    // 0x3dc1d8: 0xc138ddc  jal         func_4E3770
label_3dc1dc:
    if (ctx->pc == 0x3DC1DCu) {
        ctx->pc = 0x3DC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1D8u;
        // 0x3dc1dc: 0x3c102000  lui         $s0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC1E0u;
        goto label_3dc1e0;
    }
    ctx->pc = 0x3DC1D8u;
    SET_GPR_U32(ctx, 31, 0x3DC1E0u);
    ctx->pc = 0x3DC1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC1D8u;
    // 0x3dc1dc: 0x3c102000  lui         $s0, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DC1D8u, 0x3DC1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC1E0u;
label_3dc1e0:
    // 0x3dc1e0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3dc1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3dc1e4:
    // 0x3dc1e4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x3dc1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_3dc1e8:
    // 0x3dc1e8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_3dc1ec:
    if (ctx->pc == 0x3DC1ECu) {
        ctx->pc = 0x3DC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1E8u;
        // 0x3dc1ec: 0x27b40420  addiu       $s4, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC1F0u;
        goto label_3dc1f0;
    }
    ctx->pc = 0x3DC1E8u;
    {
        const bool branch_taken_0x3dc1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1E8u;
        // 0x3dc1ec: 0x27b40420  addiu       $s4, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc1e8) {
            ctx->pc = 0x3DC280u;
            goto label_3dc280;
        }
    }
    ctx->pc = 0x3DC1F0u;
label_3dc1f0:
    // 0x3dc1f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3dc1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dc1f4:
    // 0x3dc1f4: 0xc0e92f4  jal         func_3A4BD0
label_3dc1f8:
    if (ctx->pc == 0x3DC1F8u) {
        ctx->pc = 0x3DC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC1F4u;
        // 0x3dc1f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC1FCu;
        goto label_3dc1fc;
    }
    ctx->pc = 0x3DC1F4u;
    SET_GPR_U32(ctx, 31, 0x3DC1FCu);
    ctx->pc = 0x3DC1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC1F4u;
    // 0x3dc1f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3DC1F4u, 0x3DC1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC1FCu;
label_3dc1fc:
    // 0x3dc1fc: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3dc1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3dc200:
    // 0x3dc200: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3dc200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_3dc204:
    // 0x3dc204: 0x7ba40420  lq          $a0, 0x420($sp)
    ctx->pc = 0x3dc204u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3dc208:
    // 0x3dc208: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3dc208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3dc20c:
    // 0x3dc20c: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x3dc20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
label_3dc210:
    // 0x3dc210: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3dc210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3dc214:
    // 0x3dc214: 0x7fa40410  sq          $a0, 0x410($sp)
    ctx->pc = 0x3dc214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 4));
label_3dc218:
    // 0x3dc218: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x3dc218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_3dc21c:
    // 0x3dc21c: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3dc21cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3dc220:
    // 0x3dc220: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3dc220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dc224:
    // 0x3dc224: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3dc224u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3dc228:
    // 0x3dc228: 0xc0e9694  jal         func_3A5A50
label_3dc22c:
    if (ctx->pc == 0x3DC22Cu) {
        ctx->pc = 0x3DC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC228u;
        // 0x3dc22c: 0x7e420030  sq          $v0, 0x30($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC230u;
        goto label_3dc230;
    }
    ctx->pc = 0x3DC228u;
    SET_GPR_U32(ctx, 31, 0x3DC230u);
    ctx->pc = 0x3DC22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC228u;
    // 0x3dc22c: 0x7e420030  sq          $v0, 0x30($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DC228u, 0x3DC230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC230u;
label_3dc230:
    // 0x3dc230: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3dc234:
    if (ctx->pc == 0x3DC234u) {
        ctx->pc = 0x3DC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC230u;
        // 0x3dc234: 0x7ba30410  lq          $v1, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC238u;
        goto label_3dc238;
    }
    ctx->pc = 0x3DC230u;
    {
        const bool branch_taken_0x3dc230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC230u;
        // 0x3dc234: 0x7ba30410  lq          $v1, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc230) {
            ctx->pc = 0x3DC278u;
            goto label_3dc278;
        }
    }
    ctx->pc = 0x3DC238u;
label_3dc238:
    // 0x3dc238: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3dc238u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3dc23c:
    // 0x3dc23c: 0x27b10430  addiu       $s1, $sp, 0x430
    ctx->pc = 0x3dc23cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3dc240:
    // 0x3dc240: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3dc240u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3dc244:
    // 0x3dc244: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3dc244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3dc248:
    // 0x3dc248: 0x26105168  addiu       $s0, $s0, 0x5168
    ctx->pc = 0x3dc248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20840));
label_3dc24c:
    // 0x3dc24c: 0x7fa30840  sq          $v1, 0x840($sp)
    ctx->pc = 0x3dc24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 3));
label_3dc250:
    // 0x3dc250: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3dc250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dc254:
    // 0x3dc254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dc254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dc258:
    // 0x3dc258: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3dc258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3dc25c:
    // 0x3dc25c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3dc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3dc260:
    // 0x3dc260: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3dc260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3dc264:
    // 0x3dc264: 0xc0e9fa6  jal         func_3A7E98
label_3dc268:
    if (ctx->pc == 0x3DC268u) {
        ctx->pc = 0x3DC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC264u;
        // 0x3dc268: 0xafa20850  sw          $v0, 0x850($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC26Cu;
        goto label_3dc26c;
    }
    ctx->pc = 0x3DC264u;
    SET_GPR_U32(ctx, 31, 0x3DC26Cu);
    ctx->pc = 0x3DC268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC264u;
    // 0x3dc268: 0xafa20850  sw          $v0, 0x850($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3DC264u, 0x3DC26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC26Cu;
label_3dc26c:
    // 0x3dc26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc270:
    // 0x3dc270: 0xc0f15bc  jal         func_3C56F0
label_3dc274:
    if (ctx->pc == 0x3DC274u) {
        ctx->pc = 0x3DC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC270u;
        // 0x3dc274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC278u;
        goto label_3dc278;
    }
    ctx->pc = 0x3DC270u;
    SET_GPR_U32(ctx, 31, 0x3DC278u);
    ctx->pc = 0x3DC274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC270u;
    // 0x3dc274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DC270u, 0x3DC278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC278u;
label_3dc278:
    // 0x3dc278: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3dc278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3dc27c:
    // 0x3dc27c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3dc27cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3dc280:
    // 0x3dc280: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3dc280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3dc284:
    // 0x3dc284: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3dc284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3dc288:
    // 0x3dc288: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3dc288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3dc28c:
    // 0x3dc28c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_3dc290:
    if (ctx->pc == 0x3DC290u) {
        ctx->pc = 0x3DC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC28Cu;
        // 0x3dc290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC294u;
        goto label_3dc294;
    }
    ctx->pc = 0x3DC28Cu;
    {
        const bool branch_taken_0x3dc28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC28Cu;
        // 0x3dc290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc28c) {
            ctx->pc = 0x3DC348u;
            goto label_3dc348;
        }
    }
    ctx->pc = 0x3DC294u;
label_3dc294:
    // 0x3dc294: 0xc0e9694  jal         func_3A5A50
label_3dc298:
    if (ctx->pc == 0x3DC298u) {
        ctx->pc = 0x3DC298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC294u;
        // 0x3dc298: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC29Cu;
        goto label_3dc29c;
    }
    ctx->pc = 0x3DC294u;
    SET_GPR_U32(ctx, 31, 0x3DC29Cu);
    ctx->pc = 0x3DC298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC294u;
    // 0x3dc298: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DC294u, 0x3DC29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC29Cu;
label_3dc29c:
    // 0x3dc29c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3dc2a0:
    if (ctx->pc == 0x3DC2A0u) {
        ctx->pc = 0x3DC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC29Cu;
        // 0x3dc2a0: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC2A4u;
        goto label_3dc2a4;
    }
    ctx->pc = 0x3DC29Cu;
    {
        const bool branch_taken_0x3dc29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC29Cu;
        // 0x3dc2a0: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc29c) {
            ctx->pc = 0x3DC2ACu;
            goto label_3dc2ac;
        }
    }
    ctx->pc = 0x3DC2A4u;
label_3dc2a4:
    // 0x3dc2a4: 0x10000028  b           . + 4 + (0x28 << 2)
label_3dc2a8:
    if (ctx->pc == 0x3DC2A8u) {
        ctx->pc = 0x3DC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC2A4u;
        // 0x3dc2a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC2ACu;
        goto label_3dc2ac;
    }
    ctx->pc = 0x3DC2A4u;
    {
        const bool branch_taken_0x3dc2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC2A4u;
        // 0x3dc2a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc2a4) {
            ctx->pc = 0x3DC348u;
            goto label_3dc348;
        }
    }
    ctx->pc = 0x3DC2ACu;
label_3dc2ac:
    // 0x3dc2ac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3dc2acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3dc2b0:
    // 0x3dc2b0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3dc2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3dc2b4:
    // 0x3dc2b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3dc2b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3dc2b8:
    // 0x3dc2b8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3dc2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dc2bc:
    // 0x3dc2bc: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3dc2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3dc2c0:
    // 0x3dc2c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3dc2c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3dc2c4:
    // 0x3dc2c4: 0xc0cd518  jal         func_335460
label_3dc2c8:
    if (ctx->pc == 0x3DC2C8u) {
        ctx->pc = 0x3DC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC2C4u;
        // 0x3dc2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC2CCu;
        goto label_3dc2cc;
    }
    ctx->pc = 0x3DC2C4u;
    SET_GPR_U32(ctx, 31, 0x3DC2CCu);
    ctx->pc = 0x3DC2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC2C4u;
    // 0x3dc2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DC2C4u, 0x3DC2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC2CCu;
label_3dc2cc:
    // 0x3dc2cc: 0xe7b40444  swc1        $f20, 0x444($sp)
    ctx->pc = 0x3dc2ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1092), bits); }
label_3dc2d0:
    // 0x3dc2d0: 0x27a20440  addiu       $v0, $sp, 0x440
    ctx->pc = 0x3dc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3dc2d4:
    // 0x3dc2d4: 0xe7b40440  swc1        $f20, 0x440($sp)
    ctx->pc = 0x3dc2d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3dc2d8:
    // 0x3dc2d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dc2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc2dc:
    // 0x3dc2dc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3dc2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3dc2e0:
    // 0x3dc2e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3dc2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3dc2e4:
    // 0x3dc2e4: 0x27a60430  addiu       $a2, $sp, 0x430
    ctx->pc = 0x3dc2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3dc2e8:
    // 0x3dc2e8: 0xc64100bc  lwc1        $f1, 0xBC($s2)
    ctx->pc = 0x3dc2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dc2ec:
    // 0x3dc2ec: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x3dc2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_3dc2f0:
    // 0x3dc2f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3dc2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3dc2f4:
    // 0x3dc2f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3dc2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3dc2f8:
    // 0x3dc2f8: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x3dc2f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3dc2fc:
    // 0x3dc2fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3dc2fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3dc300:
    // 0x3dc300: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x3dc300u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3dc304:
    // 0x3dc304: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3dc304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3dc308:
    // 0x3dc308: 0xe64100c0  swc1        $f1, 0xC0($s2)
    ctx->pc = 0x3dc308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3dc30c:
    // 0x3dc30c: 0xc136afa  jal         func_4DABE8
label_3dc310:
    if (ctx->pc == 0x3DC310u) {
        ctx->pc = 0x3DC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC30Cu;
        // 0x3dc310: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC314u;
        goto label_3dc314;
    }
    ctx->pc = 0x3DC30Cu;
    SET_GPR_U32(ctx, 31, 0x3DC314u);
    ctx->pc = 0x3DC310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC30Cu;
    // 0x3dc310: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3DC30Cu, 0x3DC314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC314u;
label_3dc314:
    // 0x3dc314: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3dc314u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3dc318:
    // 0x3dc318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc31c:
    // 0x3dc31c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dc31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dc320:
    // 0x3dc320: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x3dc320u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
label_3dc324:
    // 0x3dc324: 0xc0cd4ee  jal         func_3353B8
label_3dc328:
    if (ctx->pc == 0x3DC328u) {
        ctx->pc = 0x3DC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC324u;
        // 0x3dc328: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC32Cu;
        goto label_3dc32c;
    }
    ctx->pc = 0x3DC324u;
    SET_GPR_U32(ctx, 31, 0x3DC32Cu);
    ctx->pc = 0x3DC328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC324u;
    // 0x3dc328: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DC324u, 0x3DC32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC32Cu;
label_3dc32c:
    // 0x3dc32c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x3dc32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3dc330:
    // 0x3dc330: 0xc0e858c  jal         func_3A1630
label_3dc334:
    if (ctx->pc == 0x3DC334u) {
        ctx->pc = 0x3DC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC330u;
        // 0x3dc334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC338u;
        goto label_3dc338;
    }
    ctx->pc = 0x3DC330u;
    SET_GPR_U32(ctx, 31, 0x3DC338u);
    ctx->pc = 0x3DC334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC330u;
    // 0x3dc334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DC330u, 0x3DC338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC338u;
label_3dc338:
    // 0x3dc338: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3dc338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3dc33c:
    // 0x3dc33c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dc33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dc340:
    // 0x3dc340: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dc340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3dc344:
    // 0x3dc344: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x3dc344u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_3dc348:
    // 0x3dc348: 0x7bb008b0  lq          $s0, 0x8B0($sp)
    ctx->pc = 0x3dc348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3dc34c:
    // 0x3dc34c: 0x7bb108a0  lq          $s1, 0x8A0($sp)
    ctx->pc = 0x3dc34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3dc350:
    // 0x3dc350: 0x7bb20890  lq          $s2, 0x890($sp)
    ctx->pc = 0x3dc350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3dc354:
    // 0x3dc354: 0x7bb30880  lq          $s3, 0x880($sp)
    ctx->pc = 0x3dc354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3dc358:
    // 0x3dc358: 0x7bb40870  lq          $s4, 0x870($sp)
    ctx->pc = 0x3dc358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_3dc35c:
    // 0x3dc35c: 0xdfbf0860  ld          $ra, 0x860($sp)
    ctx->pc = 0x3dc35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2144)));
label_3dc360:
    // 0x3dc360: 0xc7b408c0  lwc1        $f20, 0x8C0($sp)
    ctx->pc = 0x3dc360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dc364:
    // 0x3dc364: 0x3e00008  jr          $ra
label_3dc368:
    if (ctx->pc == 0x3DC368u) {
        ctx->pc = 0x3DC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC364u;
        // 0x3dc368: 0x27bd08d0  addiu       $sp, $sp, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC36Cu;
        goto label_3dc36c;
    }
    ctx->pc = 0x3DC364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC364u;
        // 0x3dc368: 0x27bd08d0  addiu       $sp, $sp, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC36Cu;
label_3dc36c:
    // 0x3dc36c: 0x0  nop
    ctx->pc = 0x3dc36cu;
    // NOP
    ctx->pc = 0x3dc370u;
}
