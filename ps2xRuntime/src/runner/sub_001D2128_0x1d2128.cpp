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

// Function: sub_001D2128
// Address: 0x1d2128 - 0x1d2368
void sub_001D2128_0x1d2128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2128_0x1d2128");
#endif

    switch (ctx->pc) {
        case 0x1d2344u: goto label_1d2344;
        case 0x1d2350u: goto label_1d2350;
        default: break;
    }

    ctx->pc = 0x1d2128u;

    // 0x1d2128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d212c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d212cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d2130: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d2130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d2134: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1d2134u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1d2138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d213c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1d213cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2140: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x1d2140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1d2144: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1D2144u;
    {
        const bool branch_taken_0x1d2144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2144u;
        // 0x1d2148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2144) {
            ctx->pc = 0x1D22D0u;
            goto label_1d22d0;
        }
    }
    ctx->pc = 0x1D214Cu;
    // 0x1d214c: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1d214cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x1d2150: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D2150u;
    {
        const bool branch_taken_0x1d2150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2150u;
        // 0x1d2154: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2150) {
            ctx->pc = 0x1D2200u;
            goto label_1d2200;
        }
    }
    ctx->pc = 0x1D2158u;
    // 0x1d2158: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d2158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d215c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1d215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x1d2160: 0x8c630120  lw          $v1, 0x120($v1)
    ctx->pc = 0x1d2160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x1d2164: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2164u;
    {
        const bool branch_taken_0x1d2164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2164u;
        // 0x1d2168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2164) {
            ctx->pc = 0x1D2174u;
            goto label_1d2174;
        }
    }
    ctx->pc = 0x1D216Cu;
    // 0x1d216c: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D216Cu;
    {
        const bool branch_taken_0x1d216c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D216Cu;
        // 0x1d2170: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d216c) {
            ctx->pc = 0x1D21C4u;
            goto label_1d21c4;
        }
    }
    ctx->pc = 0x1D2174u;
label_1d2174:
    // 0x1d2174: 0x3c013ec7  lui         $at, 0x3EC7
    ctx->pc = 0x1d2174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16071 << 16));
    // 0x1d2178: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1d2178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x1d217c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d217cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1d2180: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1d2180u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1d2184: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x1d2184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x1d2188: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1d2188u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1d218c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d218cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d2190: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d2190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1d2194: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x1d2194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x1d2198: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1d2198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1d219c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d219cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d21a0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d21a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1d21a4: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x1d21a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
    // 0x1d21a8: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1d21a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1d21ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d21acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d21b0: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x1d21b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x1d21b4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1d21b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1d21b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d21b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d21bc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1D21BCu;
    {
        const bool branch_taken_0x1d21bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21BCu;
        // 0x1d21c0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21bc) {
            ctx->pc = 0x1D22B4u;
            goto label_1d22b4;
        }
    }
    ctx->pc = 0x1D21C4u;
label_1d21c4:
    // 0x1d21c4: 0x3c013ec7  lui         $at, 0x3EC7
    ctx->pc = 0x1d21c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16071 << 16));
    // 0x1d21c8: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1d21c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x1d21cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d21ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1d21d0: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1d21d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
    // 0x1d21d4: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1d21d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1d21d8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d21d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d21dc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d21dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1d21e0: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x1d21e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
    // 0x1d21e4: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1d21e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1d21e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d21e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d21ec: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x1d21ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
    // 0x1d21f0: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1d21f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x1d21f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d21f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d21f8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1D21F8u;
    {
        const bool branch_taken_0x1d21f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21F8u;
        // 0x1d21fc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21f8) {
            ctx->pc = 0x1D22A4u;
            goto label_1d22a4;
        }
    }
    ctx->pc = 0x1D2200u;
label_1d2200:
    // 0x1d2200: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d2200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2204: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1d2204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x1d2208: 0x8c630120  lw          $v1, 0x120($v1)
    ctx->pc = 0x1d2208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x1d220c: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D220Cu;
    {
        const bool branch_taken_0x1d220c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D220Cu;
        // 0x1d2210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d220c) {
            ctx->pc = 0x1D221Cu;
            goto label_1d221c;
        }
    }
    ctx->pc = 0x1D2214u;
    // 0x1d2214: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D2214u;
    {
        const bool branch_taken_0x1d2214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2214u;
        // 0x1d2218: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2214) {
            ctx->pc = 0x1D226Cu;
            goto label_1d226c;
        }
    }
    ctx->pc = 0x1D221Cu;
label_1d221c:
    // 0x1d221c: 0x3c013ec7  lui         $at, 0x3EC7
    ctx->pc = 0x1d221cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16071 << 16));
    // 0x1d2220: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1d2220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x1d2224: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d2224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1d2228: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1d2228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1d222c: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x1d222cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x1d2230: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1d2230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1d2234: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d2234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d2238: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d2238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1d223c: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1d223cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x1d2240: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1d2240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1d2244: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d2244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d2248: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d2248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1d224c: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x1d224cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
    // 0x1d2250: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1d2250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1d2254: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d2254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2258: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x1d2258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x1d225c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1d225cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1d2260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d2260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2264: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D2264u;
    {
        const bool branch_taken_0x1d2264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2264u;
        // 0x1d2268: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2264) {
            ctx->pc = 0x1D22B4u;
            goto label_1d22b4;
        }
    }
    ctx->pc = 0x1D226Cu;
label_1d226c:
    // 0x1d226c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1d226cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1d2270: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d2270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d2274: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d2274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1d2278: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1d2278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
    // 0x1d227c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1d227cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1d2280: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d2280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d2284: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1d2284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1d2288: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x1d2288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
    // 0x1d228c: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1d228cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1d2290: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d2290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d2294: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1d2294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1d2298: 0x3c013f03  lui         $at, 0x3F03
    ctx->pc = 0x1d2298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16131 << 16));
    // 0x1d229c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1d229cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1d22a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d22a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d22a4:
    // 0x1d22a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d22a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1d22a8: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x1d22a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x1d22ac: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1d22acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1d22b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d22b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d22b4:
    // 0x1d22b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d22b8: 0xe4c4ec94  swc1        $f4, -0x136C($a2)
    ctx->pc = 0x1d22b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294962324), bits); }
    // 0x1d22bc: 0xe4a3eca0  swc1        $f3, -0x1360($a1)
    ctx->pc = 0x1d22bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962336), bits); }
    // 0x1d22c0: 0xe482ecac  swc1        $f2, -0x1354($a0)
    ctx->pc = 0x1d22c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962348), bits); }
    // 0x1d22c4: 0xe461eca8  swc1        $f1, -0x1358($v1)
    ctx->pc = 0x1d22c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962344), bits); }
    // 0x1d22c8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D22C8u;
    {
        const bool branch_taken_0x1d22c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22C8u;
        // 0x1d22cc: 0xe440ecb4  swc1        $f0, -0x134C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22c8) {
            ctx->pc = 0x1D233Cu;
            goto label_1d233c;
        }
    }
    ctx->pc = 0x1D22D0u;
label_1d22d0:
    // 0x1d22d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d22d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d22d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d22d8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1d22d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1d22dc: 0x8c630120  lw          $v1, 0x120($v1)
    ctx->pc = 0x1d22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x1d22e0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D22E0u;
    {
        const bool branch_taken_0x1d22e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22E0u;
        // 0x1d22e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22e0) {
            ctx->pc = 0x1D22F0u;
            goto label_1d22f0;
        }
    }
    ctx->pc = 0x1D22E8u;
    // 0x1d22e8: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D22E8u;
    {
        const bool branch_taken_0x1d22e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d22e8) {
            ctx->pc = 0x1D233Cu;
            goto label_1d233c;
        }
    }
    ctx->pc = 0x1D22F0u;
label_1d22f0:
    // 0x1d22f0: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1d22f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x1d22f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D22F4u;
    {
        const bool branch_taken_0x1d22f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22F4u;
        // 0x1d22f8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22f4) {
            ctx->pc = 0x1D231Cu;
            goto label_1d231c;
        }
    }
    ctx->pc = 0x1D22FCu;
    // 0x1d22fc: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x1d22fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
    // 0x1d2300: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1d2300u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1d2304: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d2304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2308: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x1d2308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x1d230c: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1d230cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1d2310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d2310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2314: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2314u;
    {
        const bool branch_taken_0x1d2314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2314u;
        // 0x1d2318: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2314) {
            ctx->pc = 0x1D2334u;
            goto label_1d2334;
        }
    }
    ctx->pc = 0x1D231Cu;
label_1d231c:
    // 0x1d231c: 0x3c013eae  lui         $at, 0x3EAE
    ctx->pc = 0x1d231cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16046 << 16));
    // 0x1d2320: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1d2320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1d2324: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d2324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2328: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d2328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d232c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d232cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2330: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d2330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d2334:
    // 0x1d2334: 0xe461ec94  swc1        $f1, -0x136C($v1)
    ctx->pc = 0x1d2334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962324), bits); }
    // 0x1d2338: 0xe440eca0  swc1        $f0, -0x1360($v0)
    ctx->pc = 0x1d2338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962336), bits); }
label_1d233c:
    // 0x1d233c: 0xc074656  jal         func_1D1958
    ctx->pc = 0x1D233Cu;
    SET_GPR_U32(ctx, 31, 0x1D2344u);
    ctx->pc = 0x1D2340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D233Cu;
    // 0x1d2340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1958u, 0x1D233Cu, 0x1D2344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2344u;
label_1d2344:
    // 0x1d2344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2348: 0xc0748e6  jal         func_1D2398
    ctx->pc = 0x1D2348u;
    SET_GPR_U32(ctx, 31, 0x1D2350u);
    ctx->pc = 0x1D234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2348u;
    // 0x1d234c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2398u, 0x1D2348u, 0x1D2350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2350u;
label_1d2350:
    // 0x1d2350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2358: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1d2358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1d235c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d235cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2360: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2360u;
        // 0x1d2364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2368u;
}
