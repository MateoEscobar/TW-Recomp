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

// Function: sub_0041F118
// Address: 0x41f118 - 0x41f298
void sub_0041F118_0x41f118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F118_0x41f118");
#endif

    switch (ctx->pc) {
        case 0x41f1d8u: goto label_41f1d8;
        case 0x41f1ecu: goto label_41f1ec;
        case 0x41f200u: goto label_41f200;
        case 0x41f214u: goto label_41f214;
        default: break;
    }

    ctx->pc = 0x41f118u;

    // 0x41f118: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x41f118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x41f11c: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x41f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x41f120: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x41f120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x41f124: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x41f124u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f128: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x41f128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x41f12c: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x41f12cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41f130: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x41f130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x41f134: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x41f134u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f138: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x41f138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x41f13c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x41f13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x41f140: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x41f140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f144: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x41f144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x41f148: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x41f148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f14c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x41f14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x41f150: 0x2a2a021  addu        $s4, $s5, $v0
    ctx->pc = 0x41f150u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x41f154: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x41f154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x41f158: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x41f158u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f15c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x41f15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x41f160: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x41f160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41f168: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x41f168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f16c: 0x93ac00a0  lbu         $t4, 0xA0($sp)
    ctx->pc = 0x41f16cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x41f170: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x41f170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f174: 0x8fad00c0  lw          $t5, 0xC0($sp)
    ctx->pc = 0x41f174u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x41f178: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x41f178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f17c: 0x8fae00c8  lw          $t6, 0xC8($sp)
    ctx->pc = 0x41f17cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x41f180: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x41f180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f184: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x41f184u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x41f188: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x41f188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f18c: 0xac6a0004  sw          $t2, 0x4($v1)
    ctx->pc = 0x41f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 10));
    // 0x41f190: 0xac8b0008  sw          $t3, 0x8($a0)
    ctx->pc = 0x41f190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 11));
    // 0x41f194: 0xa28c000c  sb          $t4, 0xC($s4)
    ctx->pc = 0x41f194u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 12));
    // 0x41f198: 0xaccd0010  sw          $t5, 0x10($a2)
    ctx->pc = 0x41f198u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 13));
    // 0x41f19c: 0xe46c006c  swc1        $f12, 0x6C($v1)
    ctx->pc = 0x41f19cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
    // 0x41f1a0: 0xe48d0070  swc1        $f13, 0x70($a0)
    ctx->pc = 0x41f1a0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x41f1a4: 0xe4ee0074  swc1        $f14, 0x74($a3)
    ctx->pc = 0x41f1a4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 116), bits); }
    // 0x41f1a8: 0x26840014  addiu       $a0, $s4, 0x14
    ctx->pc = 0x41f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x41f1ac: 0x93a700d0  lbu         $a3, 0xD0($sp)
    ctx->pc = 0x41f1acu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x41f1b0: 0xacce0078  sw          $t6, 0x78($a2)
    ctx->pc = 0x41f1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 14));
    // 0x41f1b4: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x41f1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x41f1b8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x41f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x41f1bc: 0xa287007c  sb          $a3, 0x7C($s4)
    ctx->pc = 0x41f1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 7));
    // 0x41f1c0: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x41f1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x41f1c4: 0xa2800023  sb          $zero, 0x23($s4)
    ctx->pc = 0x41f1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x41f1c8: 0x93b000a8  lbu         $s0, 0xA8($sp)
    ctx->pc = 0x41f1c8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x41f1cc: 0x93b700b0  lbu         $s7, 0xB0($sp)
    ctx->pc = 0x41f1ccu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x41f1d0: 0xc10c4de  jal         func_431378
    ctx->pc = 0x41F1D0u;
    SET_GPR_U32(ctx, 31, 0x41F1D8u);
    ctx->pc = 0x41F1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F1D0u;
    // 0x41f1d4: 0x93be00b8  lbu         $fp, 0xB8($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x41F1D0u, 0x41F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F1D8u;
label_41f1d8:
    // 0x41f1d8: 0xa2800038  sb          $zero, 0x38($s4)
    ctx->pc = 0x41f1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x41f1dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41f1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f1e0: 0x26840024  addiu       $a0, $s4, 0x24
    ctx->pc = 0x41f1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x41f1e4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x41F1E4u;
    SET_GPR_U32(ctx, 31, 0x41F1ECu);
    ctx->pc = 0x41F1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F1E4u;
    // 0x41f1e8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x41F1E4u, 0x41F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F1ECu;
label_41f1ec:
    // 0x41f1ec: 0xa2800048  sb          $zero, 0x48($s4)
    ctx->pc = 0x41f1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x41f1f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41f1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f1f4: 0x26840039  addiu       $a0, $s4, 0x39
    ctx->pc = 0x41f1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 57));
    // 0x41f1f8: 0xc10c4de  jal         func_431378
    ctx->pc = 0x41F1F8u;
    SET_GPR_U32(ctx, 31, 0x41F200u);
    ctx->pc = 0x41F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F1F8u;
    // 0x41f1fc: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x41F1F8u, 0x41F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F200u;
label_41f200:
    // 0x41f200: 0xa2800068  sb          $zero, 0x68($s4)
    ctx->pc = 0x41f200u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x41f204: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41f204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f208: 0x26840049  addiu       $a0, $s4, 0x49
    ctx->pc = 0x41f208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 73));
    // 0x41f20c: 0xc10c4de  jal         func_431378
    ctx->pc = 0x41F20Cu;
    SET_GPR_U32(ctx, 31, 0x41F214u);
    ctx->pc = 0x41F210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F20Cu;
    // 0x41f210: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x41F20Cu, 0x41F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F214u;
label_41f214:
    // 0x41f214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41f214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41f218: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x41F218u;
    {
        const bool branch_taken_0x41f218 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x41f218) {
            ctx->pc = 0x41F22Cu;
            goto label_41f22c;
        }
    }
    ctx->pc = 0x41F220u;
    // 0x41f220: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x41f220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x41f224: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x41f224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x41f228: 0xa282000d  sb          $v0, 0xD($s4)
    ctx->pc = 0x41f228u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 13), (uint8_t)GPR_U32(ctx, 2));
label_41f22c:
    // 0x41f22c: 0x16e30004  bne         $s7, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x41F22Cu;
    {
        const bool branch_taken_0x41f22c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x41f22c) {
            ctx->pc = 0x41F240u;
            goto label_41f240;
        }
    }
    ctx->pc = 0x41F234u;
    // 0x41f234: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x41f234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x41f238: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x41f238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x41f23c: 0xa282000d  sb          $v0, 0xD($s4)
    ctx->pc = 0x41f23cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 13), (uint8_t)GPR_U32(ctx, 2));
label_41f240:
    // 0x41f240: 0x57c30005  bnel        $fp, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x41F240u;
    {
        const bool branch_taken_0x41f240 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x41f240) {
            ctx->pc = 0x41F244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F240u;
            // 0x41f244: 0x8ea24200  lw          $v0, 0x4200($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F258u;
            goto label_41f258;
        }
    }
    ctx->pc = 0x41F248u;
    // 0x41f248: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x41f248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x41f24c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x41f24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x41f250: 0xa282000d  sb          $v0, 0xD($s4)
    ctx->pc = 0x41f250u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x41f254: 0x8ea24200  lw          $v0, 0x4200($s5)
    ctx->pc = 0x41f254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16896)));
label_41f258:
    // 0x41f258: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x41f258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x41f25c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41F25Cu;
    {
        const bool branch_taken_0x41f25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F25Cu;
        // 0x41f260: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f25c) {
            ctx->pc = 0x41F26Cu;
            goto label_41f26c;
        }
    }
    ctx->pc = 0x41F264u;
    // 0x41f264: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x41f264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x41f268: 0xaea24200  sw          $v0, 0x4200($s5)
    ctx->pc = 0x41f268u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16896), GPR_U32(ctx, 2));
label_41f26c:
    // 0x41f26c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x41f26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x41f270: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x41f270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41f274: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x41f274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41f278: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x41f278u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41f27c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x41f27cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41f280: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x41f280u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41f284: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x41f284u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41f288: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x41f288u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41f28c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41f28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41f290: 0x3e00008  jr          $ra
    ctx->pc = 0x41F290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F290u;
        // 0x41f294: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F298u;
}
