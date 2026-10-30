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

// Function: sub_0016D170
// Address: 0x16d170 - 0x16d410
void sub_0016D170_0x16d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D170_0x16d170");
#endif

    switch (ctx->pc) {
        case 0x16d170u: goto label_16d170;
        case 0x16d174u: goto label_16d174;
        case 0x16d178u: goto label_16d178;
        case 0x16d17cu: goto label_16d17c;
        case 0x16d180u: goto label_16d180;
        case 0x16d184u: goto label_16d184;
        case 0x16d188u: goto label_16d188;
        case 0x16d18cu: goto label_16d18c;
        case 0x16d190u: goto label_16d190;
        case 0x16d194u: goto label_16d194;
        case 0x16d198u: goto label_16d198;
        case 0x16d19cu: goto label_16d19c;
        case 0x16d1a0u: goto label_16d1a0;
        case 0x16d1a4u: goto label_16d1a4;
        case 0x16d1a8u: goto label_16d1a8;
        case 0x16d1acu: goto label_16d1ac;
        case 0x16d1b0u: goto label_16d1b0;
        case 0x16d1b4u: goto label_16d1b4;
        case 0x16d1b8u: goto label_16d1b8;
        case 0x16d1bcu: goto label_16d1bc;
        case 0x16d1c0u: goto label_16d1c0;
        case 0x16d1c4u: goto label_16d1c4;
        case 0x16d1c8u: goto label_16d1c8;
        case 0x16d1ccu: goto label_16d1cc;
        case 0x16d1d0u: goto label_16d1d0;
        case 0x16d1d4u: goto label_16d1d4;
        case 0x16d1d8u: goto label_16d1d8;
        case 0x16d1dcu: goto label_16d1dc;
        case 0x16d1e0u: goto label_16d1e0;
        case 0x16d1e4u: goto label_16d1e4;
        case 0x16d1e8u: goto label_16d1e8;
        case 0x16d1ecu: goto label_16d1ec;
        case 0x16d1f0u: goto label_16d1f0;
        case 0x16d1f4u: goto label_16d1f4;
        case 0x16d1f8u: goto label_16d1f8;
        case 0x16d1fcu: goto label_16d1fc;
        case 0x16d200u: goto label_16d200;
        case 0x16d204u: goto label_16d204;
        case 0x16d208u: goto label_16d208;
        case 0x16d20cu: goto label_16d20c;
        case 0x16d210u: goto label_16d210;
        case 0x16d214u: goto label_16d214;
        case 0x16d218u: goto label_16d218;
        case 0x16d21cu: goto label_16d21c;
        case 0x16d220u: goto label_16d220;
        case 0x16d224u: goto label_16d224;
        case 0x16d228u: goto label_16d228;
        case 0x16d22cu: goto label_16d22c;
        case 0x16d230u: goto label_16d230;
        case 0x16d234u: goto label_16d234;
        case 0x16d238u: goto label_16d238;
        case 0x16d23cu: goto label_16d23c;
        case 0x16d240u: goto label_16d240;
        case 0x16d244u: goto label_16d244;
        case 0x16d248u: goto label_16d248;
        case 0x16d24cu: goto label_16d24c;
        case 0x16d250u: goto label_16d250;
        case 0x16d254u: goto label_16d254;
        case 0x16d258u: goto label_16d258;
        case 0x16d25cu: goto label_16d25c;
        case 0x16d260u: goto label_16d260;
        case 0x16d264u: goto label_16d264;
        case 0x16d268u: goto label_16d268;
        case 0x16d26cu: goto label_16d26c;
        case 0x16d270u: goto label_16d270;
        case 0x16d274u: goto label_16d274;
        case 0x16d278u: goto label_16d278;
        case 0x16d27cu: goto label_16d27c;
        case 0x16d280u: goto label_16d280;
        case 0x16d284u: goto label_16d284;
        case 0x16d288u: goto label_16d288;
        case 0x16d28cu: goto label_16d28c;
        case 0x16d290u: goto label_16d290;
        case 0x16d294u: goto label_16d294;
        case 0x16d298u: goto label_16d298;
        case 0x16d29cu: goto label_16d29c;
        case 0x16d2a0u: goto label_16d2a0;
        case 0x16d2a4u: goto label_16d2a4;
        case 0x16d2a8u: goto label_16d2a8;
        case 0x16d2acu: goto label_16d2ac;
        case 0x16d2b0u: goto label_16d2b0;
        case 0x16d2b4u: goto label_16d2b4;
        case 0x16d2b8u: goto label_16d2b8;
        case 0x16d2bcu: goto label_16d2bc;
        case 0x16d2c0u: goto label_16d2c0;
        case 0x16d2c4u: goto label_16d2c4;
        case 0x16d2c8u: goto label_16d2c8;
        case 0x16d2ccu: goto label_16d2cc;
        case 0x16d2d0u: goto label_16d2d0;
        case 0x16d2d4u: goto label_16d2d4;
        case 0x16d2d8u: goto label_16d2d8;
        case 0x16d2dcu: goto label_16d2dc;
        case 0x16d2e0u: goto label_16d2e0;
        case 0x16d2e4u: goto label_16d2e4;
        case 0x16d2e8u: goto label_16d2e8;
        case 0x16d2ecu: goto label_16d2ec;
        case 0x16d2f0u: goto label_16d2f0;
        case 0x16d2f4u: goto label_16d2f4;
        case 0x16d2f8u: goto label_16d2f8;
        case 0x16d2fcu: goto label_16d2fc;
        case 0x16d300u: goto label_16d300;
        case 0x16d304u: goto label_16d304;
        case 0x16d308u: goto label_16d308;
        case 0x16d30cu: goto label_16d30c;
        case 0x16d310u: goto label_16d310;
        case 0x16d314u: goto label_16d314;
        case 0x16d318u: goto label_16d318;
        case 0x16d31cu: goto label_16d31c;
        case 0x16d320u: goto label_16d320;
        case 0x16d324u: goto label_16d324;
        case 0x16d328u: goto label_16d328;
        case 0x16d32cu: goto label_16d32c;
        case 0x16d330u: goto label_16d330;
        case 0x16d334u: goto label_16d334;
        case 0x16d338u: goto label_16d338;
        case 0x16d33cu: goto label_16d33c;
        case 0x16d340u: goto label_16d340;
        case 0x16d344u: goto label_16d344;
        case 0x16d348u: goto label_16d348;
        case 0x16d34cu: goto label_16d34c;
        case 0x16d350u: goto label_16d350;
        case 0x16d354u: goto label_16d354;
        case 0x16d358u: goto label_16d358;
        case 0x16d35cu: goto label_16d35c;
        case 0x16d360u: goto label_16d360;
        case 0x16d364u: goto label_16d364;
        case 0x16d368u: goto label_16d368;
        case 0x16d36cu: goto label_16d36c;
        case 0x16d370u: goto label_16d370;
        case 0x16d374u: goto label_16d374;
        case 0x16d378u: goto label_16d378;
        case 0x16d37cu: goto label_16d37c;
        case 0x16d380u: goto label_16d380;
        case 0x16d384u: goto label_16d384;
        case 0x16d388u: goto label_16d388;
        case 0x16d38cu: goto label_16d38c;
        case 0x16d390u: goto label_16d390;
        case 0x16d394u: goto label_16d394;
        case 0x16d398u: goto label_16d398;
        case 0x16d39cu: goto label_16d39c;
        case 0x16d3a0u: goto label_16d3a0;
        case 0x16d3a4u: goto label_16d3a4;
        case 0x16d3a8u: goto label_16d3a8;
        case 0x16d3acu: goto label_16d3ac;
        case 0x16d3b0u: goto label_16d3b0;
        case 0x16d3b4u: goto label_16d3b4;
        case 0x16d3b8u: goto label_16d3b8;
        case 0x16d3bcu: goto label_16d3bc;
        case 0x16d3c0u: goto label_16d3c0;
        case 0x16d3c4u: goto label_16d3c4;
        case 0x16d3c8u: goto label_16d3c8;
        case 0x16d3ccu: goto label_16d3cc;
        case 0x16d3d0u: goto label_16d3d0;
        case 0x16d3d4u: goto label_16d3d4;
        case 0x16d3d8u: goto label_16d3d8;
        case 0x16d3dcu: goto label_16d3dc;
        case 0x16d3e0u: goto label_16d3e0;
        case 0x16d3e4u: goto label_16d3e4;
        case 0x16d3e8u: goto label_16d3e8;
        case 0x16d3ecu: goto label_16d3ec;
        case 0x16d3f0u: goto label_16d3f0;
        case 0x16d3f4u: goto label_16d3f4;
        case 0x16d3f8u: goto label_16d3f8;
        case 0x16d3fcu: goto label_16d3fc;
        case 0x16d400u: goto label_16d400;
        case 0x16d404u: goto label_16d404;
        case 0x16d408u: goto label_16d408;
        case 0x16d40cu: goto label_16d40c;
        default: break;
    }

    ctx->pc = 0x16d170u;

label_16d170:
    // 0x16d170: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x16d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_16d174:
    // 0x16d174: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x16d174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_16d178:
    // 0x16d178: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x16d178u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_16d17c:
    // 0x16d17c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x16d17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_16d180:
    // 0x16d180: 0x8e054850  lw          $a1, 0x4850($s0)
    ctx->pc = 0x16d180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18512)));
label_16d184:
    // 0x16d184: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x16d184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_16d188:
    // 0x16d188: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x16d188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_16d18c:
    // 0x16d18c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x16d18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_16d190:
    // 0x16d190: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16d190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16d194:
    // 0x16d194: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x16d194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_16d198:
    // 0x16d198: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16d198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16d19c:
    // 0x16d19c: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
label_16d1a0:
    if (ctx->pc == 0x16D1A0u) {
        ctx->pc = 0x16D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D19Cu;
        // 0x16d1a0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1A4u;
        goto label_16d1a4;
    }
    ctx->pc = 0x16D19Cu;
    {
        const bool branch_taken_0x16d19c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D19Cu;
        // 0x16d1a0: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d19c) {
            ctx->pc = 0x16D214u;
            goto label_16d214;
        }
    }
    ctx->pc = 0x16D1A4u;
label_16d1a4:
    // 0x16d1a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16d1a8:
    // 0x16d1a8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x16d1a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_16d1ac:
    // 0x16d1ac: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x16d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_16d1b0:
    // 0x16d1b0: 0x40f809  jalr        $v0
label_16d1b4:
    if (ctx->pc == 0x16D1B4u) {
        ctx->pc = 0x16D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1B0u;
        // 0x16d1b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1B8u;
        goto label_16d1b8;
    }
    ctx->pc = 0x16D1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D1B8u);
        ctx->pc = 0x16D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1B0u;
        // 0x16d1b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D1B0u, 0x16D1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D1B8u;
label_16d1b8:
    // 0x16d1b8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x16d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_16d1bc:
    // 0x16d1bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16d1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_16d1c0:
    // 0x16d1c0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_16d1c4:
    if (ctx->pc == 0x16D1C4u) {
        ctx->pc = 0x16D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1C0u;
        // 0x16d1c4: 0x8e064850  lw          $a2, 0x4850($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1C8u;
        goto label_16d1c8;
    }
    ctx->pc = 0x16D1C0u;
    {
        const bool branch_taken_0x16d1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1C0u;
        // 0x16d1c4: 0x8e064850  lw          $a2, 0x4850($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1c0) {
            ctx->pc = 0x16D214u;
            goto label_16d214;
        }
    }
    ctx->pc = 0x16D1C8u;
label_16d1c8:
    // 0x16d1c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16d1cc:
    // 0x16d1cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16d1d0:
    // 0x16d1d0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x16d1d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_16d1d4:
    // 0x16d1d4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x16d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_16d1d8:
    // 0x16d1d8: 0x60f809  jalr        $v1
label_16d1dc:
    if (ctx->pc == 0x16D1DCu) {
        ctx->pc = 0x16D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1D8u;
        // 0x16d1dc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1E0u;
        goto label_16d1e0;
    }
    ctx->pc = 0x16D1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16D1E0u);
        ctx->pc = 0x16D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1D8u;
        // 0x16d1dc: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D1D8u, 0x16D1E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D1E0u;
label_16d1e0:
    // 0x16d1e0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x16d1e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d1e4:
    // 0x16d1e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16d1e8:
    // 0x16d1e8: 0xc0941c2  jal         func_250708
label_16d1ec:
    if (ctx->pc == 0x16D1ECu) {
        ctx->pc = 0x16D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1E8u;
        // 0x16d1ec: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1F0u;
        goto label_16d1f0;
    }
    ctx->pc = 0x16D1E8u;
    SET_GPR_U32(ctx, 31, 0x16D1F0u);
    ctx->pc = 0x16D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D1E8u;
    // 0x16d1ec: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x16D1E8u, 0x16D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D1F0u;
label_16d1f0:
    // 0x16d1f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_16d1f4:
    if (ctx->pc == 0x16D1F4u) {
        ctx->pc = 0x16D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1F0u;
        // 0x16d1f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1F8u;
        goto label_16d1f8;
    }
    ctx->pc = 0x16D1F0u;
    {
        const bool branch_taken_0x16d1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1F0u;
        // 0x16d1f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1f0) {
            ctx->pc = 0x16D218u;
            goto label_16d218;
        }
    }
    ctx->pc = 0x16D1F8u;
label_16d1f8:
    // 0x16d1f8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x16d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_16d1fc:
    // 0x16d1fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16d1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d200:
    // 0x16d200: 0x24841790  addiu       $a0, $a0, 0x1790
    ctx->pc = 0x16d200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6032));
label_16d204:
    // 0x16d204: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x16d204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_16d208:
    // 0x16d208: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16d208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d20c:
    // 0x16d20c: 0xc105b2c  jal         func_416CB0
label_16d210:
    if (ctx->pc == 0x16D210u) {
        ctx->pc = 0x16D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D20Cu;
        // 0x16d210: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D214u;
        goto label_16d214;
    }
    ctx->pc = 0x16D20Cu;
    SET_GPR_U32(ctx, 31, 0x16D214u);
    ctx->pc = 0x16D210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D20Cu;
    // 0x16d210: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416CB0u, 0x16D20Cu, 0x16D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D214u;
label_16d214:
    // 0x16d214: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16d214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16d218:
    // 0x16d218: 0x8c43cbec  lw          $v1, -0x3414($v0)
    ctx->pc = 0x16d218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953964)));
label_16d21c:
    // 0x16d21c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x16d21cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d220:
    // 0x16d220: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16d220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16d224:
    // 0x16d224: 0x28640005  slti        $a0, $v1, 0x5
    ctx->pc = 0x16d224u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_16d228:
    // 0x16d228: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_16d22c:
    if (ctx->pc == 0x16D22Cu) {
        ctx->pc = 0x16D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D228u;
        // 0x16d22c: 0xac43cbec  sw          $v1, -0x3414($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953964), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D230u;
        goto label_16d230;
    }
    ctx->pc = 0x16D228u;
    {
        const bool branch_taken_0x16d228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D228u;
        // 0x16d22c: 0xac43cbec  sw          $v1, -0x3414($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953964), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d228) {
            ctx->pc = 0x16D234u;
            goto label_16d234;
        }
    }
    ctx->pc = 0x16D230u;
label_16d230:
    // 0x16d230: 0xaea0cbec  sw          $zero, -0x3414($s5)
    ctx->pc = 0x16d230u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294953964), GPR_U32(ctx, 0));
label_16d234:
    // 0x16d234: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16d234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d238:
    // 0x16d238: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x16d238u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
label_16d23c:
    // 0x16d23c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x16d23cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d240:
    // 0x16d240: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x16d240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16d244:
    // 0x16d244: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x16d244u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_16d248:
    // 0x16d248: 0x24020b10  addiu       $v0, $zero, 0xB10
    ctx->pc = 0x16d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
label_16d24c:
    // 0x16d24c: 0x26c46e30  addiu       $a0, $s6, 0x6E30
    ctx->pc = 0x16d24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 28208));
label_16d250:
    // 0x16d250: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x16d250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_16d254:
    // 0x16d254: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x16d254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16d258:
    // 0x16d258: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x16d258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_16d25c:
    // 0x16d25c: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
label_16d260:
    if (ctx->pc == 0x16D260u) {
        ctx->pc = 0x16D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D25Cu;
        // 0x16d260: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D264u;
        goto label_16d264;
    }
    ctx->pc = 0x16D25Cu;
    {
        const bool branch_taken_0x16d25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D25Cu;
        // 0x16d260: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d25c) {
            ctx->pc = 0x16D3A0u;
            goto label_16d3a0;
        }
    }
    ctx->pc = 0x16D264u;
label_16d264:
    // 0x16d264: 0x920200d3  lbu         $v0, 0xD3($s0)
    ctx->pc = 0x16d264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 211)));
label_16d268:
    // 0x16d268: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16d268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16d26c:
    // 0x16d26c: 0x14540022  bne         $v0, $s4, . + 4 + (0x22 << 2)
label_16d270:
    if (ctx->pc == 0x16D270u) {
        ctx->pc = 0x16D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D26Cu;
        // 0x16d270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D274u;
        goto label_16d274;
    }
    ctx->pc = 0x16D26Cu;
    {
        const bool branch_taken_0x16d26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x16D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D26Cu;
        // 0x16d270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d26c) {
            ctx->pc = 0x16D2F8u;
            goto label_16d2f8;
        }
    }
    ctx->pc = 0x16D274u;
label_16d274:
    // 0x16d274: 0xc059856  jal         func_166158
label_16d278:
    if (ctx->pc == 0x16D278u) {
        ctx->pc = 0x16D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D274u;
        // 0x16d278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D27Cu;
        goto label_16d27c;
    }
    ctx->pc = 0x16D274u;
    SET_GPR_U32(ctx, 31, 0x16D27Cu);
    ctx->pc = 0x16D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D274u;
    // 0x16d278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x16D274u, 0x16D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D27Cu;
label_16d27c:
    // 0x16d27c: 0x1c40001e  bgtz        $v0, . + 4 + (0x1E << 2)
label_16d280:
    if (ctx->pc == 0x16D280u) {
        ctx->pc = 0x16D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D27Cu;
        // 0x16d280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D284u;
        goto label_16d284;
    }
    ctx->pc = 0x16D27Cu;
    {
        const bool branch_taken_0x16d27c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x16D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D27Cu;
        // 0x16d280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d27c) {
            ctx->pc = 0x16D2F8u;
            goto label_16d2f8;
        }
    }
    ctx->pc = 0x16D284u;
label_16d284:
    // 0x16d284: 0x8e050158  lw          $a1, 0x158($s0)
    ctx->pc = 0x16d284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_16d288:
    // 0x16d288: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_16d28c:
    if (ctx->pc == 0x16D28Cu) {
        ctx->pc = 0x16D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D288u;
        // 0x16d28c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D290u;
        goto label_16d290;
    }
    ctx->pc = 0x16D288u;
    {
        const bool branch_taken_0x16d288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D288u;
        // 0x16d28c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d288) {
            ctx->pc = 0x16D2E8u;
            goto label_16d2e8;
        }
    }
    ctx->pc = 0x16D290u;
label_16d290:
    // 0x16d290: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x16d290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_16d294:
    // 0x16d294: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16d294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16d298:
    // 0x16d298: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x16d298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_16d29c:
    // 0x16d29c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x16d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_16d2a0:
    // 0x16d2a0: 0x40f809  jalr        $v0
label_16d2a4:
    if (ctx->pc == 0x16D2A4u) {
        ctx->pc = 0x16D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2A0u;
        // 0x16d2a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2A8u;
        goto label_16d2a8;
    }
    ctx->pc = 0x16D2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D2A8u);
        ctx->pc = 0x16D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2A0u;
        // 0x16d2a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D2A0u, 0x16D2A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D2A8u;
label_16d2a8:
    // 0x16d2a8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_16d2ac:
    if (ctx->pc == 0x16D2ACu) {
        ctx->pc = 0x16D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2A8u;
        // 0x16d2ac: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2B0u;
        goto label_16d2b0;
    }
    ctx->pc = 0x16D2A8u;
    {
        const bool branch_taken_0x16d2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2A8u;
        // 0x16d2ac: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2a8) {
            ctx->pc = 0x16D2E8u;
            goto label_16d2e8;
        }
    }
    ctx->pc = 0x16D2B0u;
label_16d2b0:
    // 0x16d2b0: 0x86050030  lh          $a1, 0x30($s0)
    ctx->pc = 0x16d2b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_16d2b4:
    // 0x16d2b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16d2b8:
    // 0x16d2b8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x16d2b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_16d2bc:
    // 0x16d2bc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x16d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_16d2c0:
    // 0x16d2c0: 0x60f809  jalr        $v1
label_16d2c4:
    if (ctx->pc == 0x16D2C4u) {
        ctx->pc = 0x16D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2C0u;
        // 0x16d2c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2C8u;
        goto label_16d2c8;
    }
    ctx->pc = 0x16D2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16D2C8u);
        ctx->pc = 0x16D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2C0u;
        // 0x16d2c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D2C0u, 0x16D2C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D2C8u;
label_16d2c8:
    // 0x16d2c8: 0x8e272b04  lw          $a3, 0x2B04($s1)
    ctx->pc = 0x16d2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_16d2cc:
    // 0x16d2cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16d2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d2d0:
    // 0x16d2d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d2d4:
    // 0x16d2d4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16d2d8:
    // 0x16d2d8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x16d2d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_16d2dc:
    // 0x16d2dc: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x16d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_16d2e0:
    // 0x16d2e0: 0x60f809  jalr        $v1
label_16d2e4:
    if (ctx->pc == 0x16D2E4u) {
        ctx->pc = 0x16D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2E0u;
        // 0x16d2e4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2E8u;
        goto label_16d2e8;
    }
    ctx->pc = 0x16D2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16D2E8u);
        ctx->pc = 0x16D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2E0u;
        // 0x16d2e4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D2E0u, 0x16D2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D2E8u;
label_16d2e8:
    // 0x16d2e8: 0xc05a87a  jal         func_16A1E8
label_16d2ec:
    if (ctx->pc == 0x16D2ECu) {
        ctx->pc = 0x16D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2E8u;
        // 0x16d2ec: 0x86040030  lh          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2F0u;
        goto label_16d2f0;
    }
    ctx->pc = 0x16D2E8u;
    SET_GPR_U32(ctx, 31, 0x16D2F0u);
    ctx->pc = 0x16D2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D2E8u;
    // 0x16d2ec: 0x86040030  lh          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1E8u, 0x16D2E8u, 0x16D2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D2F0u;
label_16d2f0:
    // 0x16d2f0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_16d2f4:
    if (ctx->pc == 0x16D2F4u) {
        ctx->pc = 0x16D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2F0u;
        // 0x16d2f4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D2F8u;
        goto label_16d2f8;
    }
    ctx->pc = 0x16D2F0u;
    {
        const bool branch_taken_0x16d2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2F0u;
        // 0x16d2f4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2f0) {
            ctx->pc = 0x16D3A0u;
            goto label_16d3a0;
        }
    }
    ctx->pc = 0x16D2F8u;
label_16d2f8:
    // 0x16d2f8: 0xc0599c2  jal         func_166708
label_16d2fc:
    if (ctx->pc == 0x16D2FCu) {
        ctx->pc = 0x16D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2F8u;
        // 0x16d2fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D300u;
        goto label_16d300;
    }
    ctx->pc = 0x16D2F8u;
    SET_GPR_U32(ctx, 31, 0x16D300u);
    ctx->pc = 0x16D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D2F8u;
    // 0x16d2fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166708u, 0x16D2F8u, 0x16D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D300u;
label_16d300:
    // 0x16d300: 0x233001a  div         $zero, $s1, $s3
    ctx->pc = 0x16d300u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_16d304:
    // 0x16d304: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_16d308:
    if (ctx->pc == 0x16D308u) {
        ctx->pc = 0x16D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D304u;
        // 0x16d308: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D30Cu;
        goto label_16d30c;
    }
    ctx->pc = 0x16D304u;
    {
        const bool branch_taken_0x16d304 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d304) {
            ctx->pc = 0x16D308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D304u;
            // 0x16d308: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D30Cu;
            goto label_16d30c;
        }
    }
    ctx->pc = 0x16D30Cu;
label_16d30c:
    // 0x16d30c: 0x8ea2cbec  lw          $v0, -0x3414($s5)
    ctx->pc = 0x16d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953964)));
label_16d310:
    // 0x16d310: 0x1810  mfhi        $v1
    ctx->pc = 0x16d310u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_16d314:
    // 0x16d314: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_16d318:
    if (ctx->pc == 0x16D318u) {
        ctx->pc = 0x16D31Cu;
        goto label_16d31c;
    }
    ctx->pc = 0x16D314u;
    {
        const bool branch_taken_0x16d314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d314) {
            ctx->pc = 0x16D394u;
            goto label_16d394;
        }
    }
    ctx->pc = 0x16D31Cu;
label_16d31c:
    // 0x16d31c: 0xc059ad8  jal         func_166B60
label_16d320:
    if (ctx->pc == 0x16D320u) {
        ctx->pc = 0x16D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D31Cu;
        // 0x16d320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D324u;
        goto label_16d324;
    }
    ctx->pc = 0x16D31Cu;
    SET_GPR_U32(ctx, 31, 0x16D324u);
    ctx->pc = 0x16D320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D31Cu;
    // 0x16d320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166B60u, 0x16D31Cu, 0x16D324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D324u;
label_16d324:
    // 0x16d324: 0xc059b3e  jal         func_166CF8
label_16d328:
    if (ctx->pc == 0x16D328u) {
        ctx->pc = 0x16D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D324u;
        // 0x16d328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D32Cu;
        goto label_16d32c;
    }
    ctx->pc = 0x16D324u;
    SET_GPR_U32(ctx, 31, 0x16D32Cu);
    ctx->pc = 0x16D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D324u;
    // 0x16d328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166CF8u, 0x16D324u, 0x16D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D32Cu;
label_16d32c:
    // 0x16d32c: 0xc05a74c  jal         func_169D30
label_16d330:
    if (ctx->pc == 0x16D330u) {
        ctx->pc = 0x16D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D32Cu;
        // 0x16d330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D334u;
        goto label_16d334;
    }
    ctx->pc = 0x16D32Cu;
    SET_GPR_U32(ctx, 31, 0x16D334u);
    ctx->pc = 0x16D330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D32Cu;
    // 0x16d330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169D30u, 0x16D32Cu, 0x16D334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D334u;
label_16d334:
    // 0x16d334: 0xc04808c  jal         func_120230
label_16d338:
    if (ctx->pc == 0x16D338u) {
        ctx->pc = 0x16D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D334u;
        // 0x16d338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D33Cu;
        goto label_16d33c;
    }
    ctx->pc = 0x16D334u;
    SET_GPR_U32(ctx, 31, 0x16D33Cu);
    ctx->pc = 0x16D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D334u;
    // 0x16d338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x16D334u, 0x16D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D33Cu;
label_16d33c:
    // 0x16d33c: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x16d33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_16d340:
    // 0x16d340: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x16d340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_16d344:
    // 0x16d344: 0x1454000b  bne         $v0, $s4, . + 4 + (0xB << 2)
label_16d348:
    if (ctx->pc == 0x16D348u) {
        ctx->pc = 0x16D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D344u;
        // 0x16d348: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D34Cu;
        goto label_16d34c;
    }
    ctx->pc = 0x16D344u;
    {
        const bool branch_taken_0x16d344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x16D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D344u;
        // 0x16d348: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d344) {
            ctx->pc = 0x16D374u;
            goto label_16d374;
        }
    }
    ctx->pc = 0x16D34Cu;
label_16d34c:
    // 0x16d34c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x16d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_16d350:
    // 0x16d350: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x16d350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_16d354:
    // 0x16d354: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16d358:
    // 0x16d358: 0x40f809  jalr        $v0
label_16d35c:
    if (ctx->pc == 0x16D35Cu) {
        ctx->pc = 0x16D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D358u;
        // 0x16d35c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D360u;
        goto label_16d360;
    }
    ctx->pc = 0x16D358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D360u);
        ctx->pc = 0x16D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D358u;
        // 0x16d35c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D358u, 0x16D360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D360u;
label_16d360:
    // 0x16d360: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x16d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
label_16d364:
    // 0x16d364: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x16d364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_16d368:
    // 0x16d368: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16d36c:
    if (ctx->pc == 0x16D36Cu) {
        ctx->pc = 0x16D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D368u;
        // 0x16d36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D370u;
        goto label_16d370;
    }
    ctx->pc = 0x16D368u;
    {
        const bool branch_taken_0x16d368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D368u;
        // 0x16d36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d368) {
            ctx->pc = 0x16D378u;
            goto label_16d378;
        }
    }
    ctx->pc = 0x16D370u;
label_16d370:
    // 0x16d370: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16d370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16d374:
    // 0x16d374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d378:
    // 0x16d378: 0xc05a822  jal         func_16A088
label_16d37c:
    if (ctx->pc == 0x16D37Cu) {
        ctx->pc = 0x16D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D378u;
        // 0x16d37c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D380u;
        goto label_16d380;
    }
    ctx->pc = 0x16D378u;
    SET_GPR_U32(ctx, 31, 0x16D380u);
    ctx->pc = 0x16D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D378u;
    // 0x16d37c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A088u, 0x16D378u, 0x16D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D380u;
label_16d380:
    // 0x16d380: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16d380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16d384:
    // 0x16d384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d388:
    // 0x16d388: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x16d388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_16d38c:
    // 0x16d38c: 0xc062a40  jal         func_18A900
label_16d390:
    if (ctx->pc == 0x16D390u) {
        ctx->pc = 0x16D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D38Cu;
        // 0x16d390: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D394u;
        goto label_16d394;
    }
    ctx->pc = 0x16D38Cu;
    SET_GPR_U32(ctx, 31, 0x16D394u);
    ctx->pc = 0x16D390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D38Cu;
    // 0x16d390: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A900u, 0x16D38Cu, 0x16D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D394u;
label_16d394:
    // 0x16d394: 0xc0c198c  jal         func_306630
label_16d398:
    if (ctx->pc == 0x16D398u) {
        ctx->pc = 0x16D39Cu;
        goto label_16d39c;
    }
    ctx->pc = 0x16D394u;
    SET_GPR_U32(ctx, 31, 0x16D39Cu);
    ctx->pc = 0x306630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306630u, 0x16D394u, 0x16D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D39Cu;
label_16d39c:
    // 0x16d39c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16d39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d3a0:
    // 0x16d3a0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x16d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_16d3a4:
    // 0x16d3a4: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x16d3a4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
label_16d3a8:
    // 0x16d3a8: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x16d3a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16d3ac:
    // 0x16d3ac: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
label_16d3b0:
    if (ctx->pc == 0x16D3B0u) {
        ctx->pc = 0x16D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3ACu;
        // 0x16d3b0: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3B4u;
        goto label_16d3b4;
    }
    ctx->pc = 0x16D3ACu;
    {
        const bool branch_taken_0x16d3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3ACu;
        // 0x16d3b0: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3ac) {
            ctx->pc = 0x16D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d248;
        }
    }
    ctx->pc = 0x16D3B4u;
label_16d3b4:
    // 0x16d3b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16d3b8:
    // 0x16d3b8: 0x8c45cb7c  lw          $a1, -0x3484($v0)
    ctx->pc = 0x16d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953852)));
label_16d3bc:
    // 0x16d3bc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_16d3c0:
    if (ctx->pc == 0x16D3C0u) {
        ctx->pc = 0x16D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3BCu;
        // 0x16d3c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3C4u;
        goto label_16d3c4;
    }
    ctx->pc = 0x16D3BCu;
    {
        const bool branch_taken_0x16d3bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3BCu;
        // 0x16d3c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3bc) {
            ctx->pc = 0x16D3E0u;
            goto label_16d3e0;
        }
    }
    ctx->pc = 0x16D3C4u;
label_16d3c4:
    // 0x16d3c4: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x16d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_16d3c8:
    // 0x16d3c8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x16d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_16d3cc:
    // 0x16d3cc: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x16d3ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_16d3d0:
    // 0x16d3d0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_16d3d4:
    if (ctx->pc == 0x16D3D4u) {
        ctx->pc = 0x16D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3D0u;
        // 0x16d3d4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3D8u;
        goto label_16d3d8;
    }
    ctx->pc = 0x16D3D0u;
    {
        const bool branch_taken_0x16d3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3D0u;
        // 0x16d3d4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3d0) {
            ctx->pc = 0x16D3E4u;
            goto label_16d3e4;
        }
    }
    ctx->pc = 0x16D3D8u;
label_16d3d8:
    // 0x16d3d8: 0xc05b0d6  jal         func_16C358
label_16d3dc:
    if (ctx->pc == 0x16D3DCu) {
        ctx->pc = 0x16D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3D8u;
        // 0x16d3dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3E0u;
        goto label_16d3e0;
    }
    ctx->pc = 0x16D3D8u;
    SET_GPR_U32(ctx, 31, 0x16D3E0u);
    ctx->pc = 0x16D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3D8u;
    // 0x16d3dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C358u, 0x16D3D8u, 0x16D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3E0u;
label_16d3e0:
    // 0x16d3e0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x16d3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_16d3e4:
    // 0x16d3e4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x16d3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16d3e8:
    // 0x16d3e8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x16d3e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16d3ec:
    // 0x16d3ec: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x16d3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16d3f0:
    // 0x16d3f0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x16d3f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16d3f4:
    // 0x16d3f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16d3f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16d3f8:
    // 0x16d3f8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x16d3f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16d3fc:
    // 0x16d3fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16d3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16d400:
    // 0x16d400: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x16d400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16d404:
    // 0x16d404: 0x3e00008  jr          $ra
label_16d408:
    if (ctx->pc == 0x16D408u) {
        ctx->pc = 0x16D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D404u;
        // 0x16d408: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D40Cu;
        goto label_16d40c;
    }
    ctx->pc = 0x16D404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D404u;
        // 0x16d408: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D40Cu;
label_16d40c:
    // 0x16d40c: 0x0  nop
    ctx->pc = 0x16d40cu;
    // NOP
    ctx->pc = 0x16d410u;
}
