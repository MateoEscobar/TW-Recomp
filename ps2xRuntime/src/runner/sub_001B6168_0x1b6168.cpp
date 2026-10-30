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

// Function: sub_001B6168
// Address: 0x1b6168 - 0x1b6358
void sub_001B6168_0x1b6168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6168_0x1b6168");
#endif

    ctx->pc = 0x1b6168u;

    // 0x1b6168: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b6168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b616c: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x1b616cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
    // 0x1b6170: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1b6170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1b6174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6178: 0x2446d5f0  addiu       $a2, $v0, -0x2A10
    ctx->pc = 0x1b6178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956528));
    // 0x1b617c: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1b617cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x1b6180: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1b6180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1b6184: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1b6184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1b6188: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1b6188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D5F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D5F8u, _value); } while (0); }
    // 0x1b618c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b618cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1b6190: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1b6190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b6194: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b6194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1b6198: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b6198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b619c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b619cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b61a0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1b61a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61a4: 0x8c83cdb4  lw          $v1, -0x324C($a0)
    ctx->pc = 0x1b61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1b61a8: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1b61a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1b61ac: 0xe447d5f0  swc1        $f7, -0x2A10($v0)
    ctx->pc = 0x1b61acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D5F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D5F0u, _value); } while (0); }
    // 0x1b61b0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b61b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1b61b4: 0xe4c60004  swc1        $f6, 0x4($a2)
    ctx->pc = 0x1b61b4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D5F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D5F4u, _value); } while (0); }
    // 0x1b61b8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1b61b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b61bc: 0xe4c5000c  swc1        $f5, 0xC($a2)
    ctx->pc = 0x1b61bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D5FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D5FCu, _value); } while (0); }
    // 0x1b61c0: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1b61c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1b61c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b61c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b61c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b61c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b61cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b61ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b61d0: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1b61d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1b61d4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b61d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b61d8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b61d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b61dc: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1b61dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x1b61e0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b61e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b61e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b61e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b61e8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1b61e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1b61ec: 0xe4a1d600  swc1        $f1, -0x2A00($a1)
    ctx->pc = 0x1b61ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D600u, _value); } while (0); }
    // 0x1b61f0: 0xe480d608  swc1        $f0, -0x29F8($a0)
    ctx->pc = 0x1b61f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D608u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D608u, _value); } while (0); }
    // 0x1b61f4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B61F4u;
    {
        const bool branch_taken_0x1b61f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61F4u;
        // 0x1b61f8: 0xe4e4d604  swc1        $f4, -0x29FC($a3) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61f4) {
            ctx->pc = 0x1B6294u;
            goto label_1b6294;
        }
    }
    ctx->pc = 0x1B61FCu;
    // 0x1b61fc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1b61fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1b6200: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B6200u;
    {
        const bool branch_taken_0x1b6200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6200u;
        // 0x1b6204: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6200) {
            ctx->pc = 0x1B6260u;
            goto label_1b6260;
        }
    }
    ctx->pc = 0x1B6208u;
    // 0x1b6208: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1b6208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
    // 0x1b620c: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1b620cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1b6210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6214: 0x3c01bdf5  lui         $at, 0xBDF5
    ctx->pc = 0x1b6214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48629 << 16));
    // 0x1b6218: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b6218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1b621c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b621cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b6220: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1b6220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1b6224: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b6224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1b6228: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b6228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b622c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1b622cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1b6230: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b6230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b6234: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b6234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b6238: 0x3c013c8b  lui         $at, 0x3C8B
    ctx->pc = 0x1b6238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15499 << 16));
    // 0x1b623c: 0x34214396  ori         $at, $at, 0x4396
    ctx->pc = 0x1b623cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17302);
    // 0x1b6240: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b6240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b6244: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1b6244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1b6248: 0xe4e1d604  swc1        $f1, -0x29FC($a3)
    ctx->pc = 0x1b6248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956548), bits); }
    // 0x1b624c: 0xe482d608  swc1        $f2, -0x29F8($a0)
    ctx->pc = 0x1b624cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956552), bits); }
    // 0x1b6250: 0xe443d5d0  swc1        $f3, -0x2A30($v0)
    ctx->pc = 0x1b6250u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956496), bits); }
    // 0x1b6254: 0xe524d5f0  swc1        $f4, -0x2A10($t1)
    ctx->pc = 0x1b6254u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294956528), bits); }
    // 0x1b6258: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1B6258u;
    {
        const bool branch_taken_0x1b6258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6258u;
        // 0x1b625c: 0xe507d600  swc1        $f7, -0x2A00($t0) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294956544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6258) {
            ctx->pc = 0x1B630Cu;
            goto label_1b630c;
        }
    }
    ctx->pc = 0x1B6260u;
label_1b6260:
    // 0x1b6260: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x1b6260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
    // 0x1b6264: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1b6264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1b6268: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b6268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b626c: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x1b626cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
    // 0x1b6270: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b6270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b6274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6278: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1b6278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1b627c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b627cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b6280: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b6280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b6284: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x1b6284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1b6288: 0xe4e2d604  swc1        $f2, -0x29FC($a3)
    ctx->pc = 0x1b6288u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956548), bits); }
    // 0x1b628c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B628Cu;
    {
        const bool branch_taken_0x1b628c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B628Cu;
        // 0x1b6290: 0xe500d600  swc1        $f0, -0x2A00($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294956544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b628c) {
            ctx->pc = 0x1B630Cu;
            goto label_1b630c;
        }
    }
    ctx->pc = 0x1B6294u;
label_1b6294:
    // 0x1b6294: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1b6294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1b6298: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B6298u;
    {
        const bool branch_taken_0x1b6298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6298u;
        // 0x1b629c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6298) {
            ctx->pc = 0x1B62F0u;
            goto label_1b62f0;
        }
    }
    ctx->pc = 0x1B62A0u;
    // 0x1b62a0: 0x3c01bda3  lui         $at, 0xBDA3
    ctx->pc = 0x1b62a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
    // 0x1b62a4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b62a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b62a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b62a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b62ac: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1b62acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1b62b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b62b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b62b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b62b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b62b8: 0xe4c5000c  swc1        $f5, 0xC($a2)
    ctx->pc = 0x1b62b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x1b62bc: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1b62bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1b62c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b62c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b62c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b62c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b62c8: 0xe4e4d604  swc1        $f4, -0x29FC($a3)
    ctx->pc = 0x1b62c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956548), bits); }
    // 0x1b62cc: 0xe480d608  swc1        $f0, -0x29F8($a0)
    ctx->pc = 0x1b62ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956552), bits); }
    // 0x1b62d0: 0xe521d5f0  swc1        $f1, -0x2A10($t1)
    ctx->pc = 0x1b62d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294956528), bits); }
    // 0x1b62d4: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1b62d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x1b62d8: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1b62d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1b62dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b62dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b62e0: 0xe4c60004  swc1        $f6, 0x4($a2)
    ctx->pc = 0x1b62e0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1b62e4: 0xe4c30008  swc1        $f3, 0x8($a2)
    ctx->pc = 0x1b62e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1b62e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B62E8u;
    {
        const bool branch_taken_0x1b62e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62E8u;
        // 0x1b62ec: 0xe502d600  swc1        $f2, -0x2A00($t0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294956544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62e8) {
            ctx->pc = 0x1B630Cu;
            goto label_1b630c;
        }
    }
    ctx->pc = 0x1B62F0u;
label_1b62f0:
    // 0x1b62f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B62F0u;
    {
        const bool branch_taken_0x1b62f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62F0u;
        // 0x1b62f4: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62f0) {
            ctx->pc = 0x1B6310u;
            goto label_1b6310;
        }
    }
    ctx->pc = 0x1B62F8u;
    // 0x1b62f8: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x1b62f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x1b62fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b62fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b6300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6304: 0x0  nop
    ctx->pc = 0x1b6304u;
    // NOP
    // 0x1b6308: 0xe520d5f0  swc1        $f0, -0x2A10($t1)
    ctx->pc = 0x1b6308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294956528), bits); }
label_1b630c:
    // 0x1b630c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b630cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1b6310:
    // 0x1b6310: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b6310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b6314: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x1b6314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
    // 0x1b6318: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x1b6318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x1b631c: 0x1465000c  bne         $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B631Cu;
    {
        const bool branch_taken_0x1b631c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B631Cu;
        // 0x1b6320: 0xc520d5f0  lwc1        $f0, -0x2A10($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294956528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b631c) {
            ctx->pc = 0x1B6350u;
            goto label_1b6350;
        }
    }
    ctx->pc = 0x1B6324u;
    // 0x1b6324: 0xc501d600  lwc1        $f1, -0x2A00($t0)
    ctx->pc = 0x1b6324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294956544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6328: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1b6328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1b632c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b632cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b6330: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b6330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b6334: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1b6334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x1b6338: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1b6338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1b633c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b633cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b6340: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b6340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1b6344: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1b6344u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1b6348: 0xe520d5f0  swc1        $f0, -0x2A10($t1)
    ctx->pc = 0x1b6348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294956528), bits); }
    // 0x1b634c: 0xe501d600  swc1        $f1, -0x2A00($t0)
    ctx->pc = 0x1b634cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294956544), bits); }
label_1b6350:
    // 0x1b6350: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6358u;
}
