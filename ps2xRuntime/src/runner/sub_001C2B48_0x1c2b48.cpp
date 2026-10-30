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

// Function: sub_001C2B48
// Address: 0x1c2b48 - 0x1c2ce0
void sub_001C2B48_0x1c2b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2B48_0x1c2b48");
#endif

    switch (ctx->pc) {
        case 0x1c2b8cu: goto label_1c2b8c;
        case 0x1c2ba8u: goto label_1c2ba8;
        case 0x1c2c44u: goto label_1c2c44;
        case 0x1c2cbcu: goto label_1c2cbc;
        default: break;
    }

    ctx->pc = 0x1c2b48u;

    // 0x1c2b48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c2b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c2b4c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1c2b4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c2b50: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1c2b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1c2b54: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1c2b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1c2b58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c2b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c2b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c2b60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c2b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c2b64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c2b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b68: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1c2b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1c2b6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c2b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c2b70: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1c2b70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1c2b74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c2b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c2b78: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1c2b78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1c2b7c: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x1c2b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c2b80: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c2b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c2b84: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1C2B84u;
    SET_GPR_U32(ctx, 31, 0x1C2B8Cu);
    ctx->pc = 0x1C2B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B84u;
    // 0x1c2b88: 0x26320650  addiu       $s2, $s1, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1C2B84u, 0x1C2B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B8Cu;
label_1c2b8c:
    // 0x1c2b8c: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x1c2b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
    // 0x1c2b90: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c2b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c2b94: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c2b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c2b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c2b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ba0: 0xc079bd4  jal         func_1E6F50
    ctx->pc = 0x1C2BA0u;
    SET_GPR_U32(ctx, 31, 0x1C2BA8u);
    ctx->pc = 0x1C2BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BA0u;
    // 0x1c2ba4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6F50u, 0x1C2BA0u, 0x1C2BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BA8u;
label_1c2ba8:
    // 0x1c2ba8: 0x3c013f4e  lui         $at, 0x3F4E
    ctx->pc = 0x1c2ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16206 << 16));
    // 0x1c2bac: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1c2bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1c2bb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2bb4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c2bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c2bb8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c2bbc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1c2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1c2bc0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1c2bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c2bc4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1c2bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1c2bc8: 0xae20064c  sw          $zero, 0x64C($s1)
    ctx->pc = 0x1c2bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1612), GPR_U32(ctx, 0));
    // 0x1c2bcc: 0x24630840  addiu       $v1, $v1, 0x840
    ctx->pc = 0x1c2bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x1c2bd0: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x1c2bd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1c2bd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c2bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c2bd8: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1c2bd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1c2bdc: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x1c2bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1c2be0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c2be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c2be4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1c2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2be8: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1c2be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
    // 0x1c2bec: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1c2becu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1c2bf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c2bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2bf4: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x1c2bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
    // 0x1c2bf8: 0xc4601124  lwc1        $f0, 0x1124($v1)
    ctx->pc = 0x1c2bf8u;
    { uint32_t bits = FAST_READ32(0x619964u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2bfc: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x1c2bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x1c2c00: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x1c2c00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2c04: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1c2c04u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1c2c08: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1c2c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
    // 0x1c2c0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c2c0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c2c10: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c2c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2c14: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1c2c14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1c2c18: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x1c2c18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2c1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c2c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c20: 0xa0530003  sb          $s3, 0x3($v0)
    ctx->pc = 0x1c2c20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x1c2c24: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x1c2c24u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1c2c28: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x1c2c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2c2c: 0x24e74f68  addiu       $a3, $a3, 0x4F68
    ctx->pc = 0x1c2c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20328));
    // 0x1c2c30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c34: 0x35080036  ori         $t0, $t0, 0x36
    ctx->pc = 0x1c2c34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54);
    // 0x1c2c38: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1c2c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2c3c: 0xc0707e0  jal         func_1C1F80
    ctx->pc = 0x1C2C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C2C44u);
    ctx->pc = 0x1C2C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C3Cu;
    // 0x1c2c40: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F80u, 0x1C2C3Cu, 0x1C2C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C44u;
label_1c2c44:
    // 0x1c2c44: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1c2c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c2c48: 0x27a30024  addiu       $v1, $sp, 0x24
    ctx->pc = 0x1c2c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c2c4c: 0xa3a40024  sb          $a0, 0x24($sp)
    ctx->pc = 0x1c2c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 36), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2c50: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1c2c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1c2c54: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1c2c54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c2c58: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c2c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c2c5c: 0xa0730003  sb          $s3, 0x3($v1)
    ctx->pc = 0x1c2c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x1c2c60: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x1c2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1c2c64: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c2c64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2c68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2c6c: 0xa3a50028  sb          $a1, 0x28($sp)
    ctx->pc = 0x1c2c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c2c70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c74: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x1c2c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1c2c78: 0xa0530003  sb          $s3, 0x3($v0)
    ctx->pc = 0x1c2c78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x1c2c7c: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x1c2c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c2c80: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x1c2c80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c2c84: 0x3c013f75  lui         $at, 0x3F75
    ctx->pc = 0x1c2c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16245 << 16));
    // 0x1c2c88: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c2c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c2c8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2c90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2c94: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1c2c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c2c98: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1c2c98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1c2c9c: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x1c2c9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1c2ca0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c2ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c2ca4: 0xae460068  sw          $a2, 0x68($s2)
    ctx->pc = 0x1c2ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 6));
    // 0x1c2ca8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1c2ca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2cac: 0xae2306b0  sw          $v1, 0x6B0($s1)
    ctx->pc = 0x1c2cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1712), GPR_U32(ctx, 3));
    // 0x1c2cb0: 0xa22706ec  sb          $a3, 0x6EC($s1)
    ctx->pc = 0x1c2cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1772), (uint8_t)GPR_U32(ctx, 7));
    // 0x1c2cb4: 0xc070a7e  jal         func_1C29F8
    ctx->pc = 0x1C2CB4u;
    SET_GPR_U32(ctx, 31, 0x1C2CBCu);
    ctx->pc = 0x1C2CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CB4u;
    // 0x1c2cb8: 0x7e4203c0  sq          $v0, 0x3C0($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 960), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29F8u, 0x1C2CB4u, 0x1C2CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2CBCu;
label_1c2cbc:
    // 0x1c2cbc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1c2cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c2cc0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1c2cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c2cc4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1c2cc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2cc8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c2cc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2ccc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c2cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2cd0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1c2cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c2cd4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1c2cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c2cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CD8u;
        // 0x1c2cdc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2CE0u;
}
